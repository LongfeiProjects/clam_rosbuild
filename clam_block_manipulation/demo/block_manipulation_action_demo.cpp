/*
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Willow Garage, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
  This script combines the three components of block manipulation: block detection,
  interactive block moving, and pick & place into one coherent program using actionlib action
  servers.
*/

#include <ros/ros.h>

#include <actionlib/client/simple_action_client.h>
#include <clam_block_manipulation/BlockDetectionAction.h>
#include <clam_block_manipulation/PickAndPlaceAction.h>
#include <clam_block_manipulation/ClamArmAction.h>
#include <clam_block_manipulation/InteractiveBlockManipulationAction.h>

#include <string>
#include <sstream>


const std::string pick_and_place_topic = "/pick_and_place";

namespace clam_block_manipulation
{

class BlockManipulationAction
{
private:
  ros::NodeHandle nh_;

  // Actions
  actionlib::SimpleActionClient<BlockDetectionAction> block_detection_action_;
  actionlib::SimpleActionClient<InteractiveBlockManipulationAction> interactive_manipulation_action_;
  actionlib::SimpleActionClient<PickAndPlaceAction> pick_and_place_action_;
  actionlib::SimpleActionClient<ClamArmAction> clam_arm_action_;

  BlockDetectionGoal block_detection_goal_;
  InteractiveBlockManipulationGoal interactive_manipulation_goal_;
  PickAndPlaceGoal pick_and_place_goal_;
  ClamArmGoal clam_arm_goal_;

  // Parameters
  std::string arm_link;
  double gripper_open;
  double gripper_closed;
  double z_up;
  double z_down;
  double block_size;
  bool once;

public:

  BlockManipulationAction() :
    block_detection_action_("block_detection", true),
    interactive_manipulation_action_("interactive_manipulation", true),
    pick_and_place_action_("pick_and_place", true),
    clam_arm_action_("clam_arm", true)
  {
    // Load parameters -------------------------------------------------------------------

    nh_.param<std::string>("/block_manipulation_action_demo/arm_link", arm_link, "/base_link");
    nh_.param<double>("/block_manipulation_action_demo/gripper_open", gripper_open, 0.042);
    nh_.param<double>("/block_manipulation_action_demo/gripper_closed", gripper_closed, 0.024);
    nh_.param<double>("/block_manipulation_action_demo/z_up", z_up, 0.12);
    nh_.param<double>("/block_manipulation_action_demo/table_height", z_down, 0.01);
    nh_.param<double>("/block_manipulation_action_demo/block_size", block_size, 0.03);
    nh_.param<bool>("once", once, false);

    ROS_INFO("Block size %f", block_size);
    ROS_INFO("Table height %f", z_down);

    // Initialize goals -------------------------------------------------------------------

    // Block Detection
    block_detection_goal_.frame = arm_link;
    block_detection_goal_.table_height = z_down;
    block_detection_goal_.block_size = block_size;

    // Pick and Place
    pick_and_place_goal_.frame = arm_link;
    pick_and_place_goal_.z_up = z_up;
    pick_and_place_goal_.gripper_open = gripper_open;
    pick_and_place_goal_.gripper_closed = gripper_closed;
    pick_and_place_goal_.topic = pick_and_place_topic;

    // Interactive Manipulation
    interactive_manipulation_goal_.block_size = block_size;
    interactive_manipulation_goal_.frame = arm_link;

    // Wait for servers -------------------------------------------------------------------
    ROS_INFO("Finished initializing, waiting for servers...");

    block_detection_action_.waitForServer();
    ROS_INFO("Found block detection server.");

    interactive_manipulation_action_.waitForServer();
    ROS_INFO("Found interactive manipulation.");

    pick_and_place_action_.waitForServer();
    ROS_INFO("Found pick and place server.");

    ROS_INFO("Found servers.");

    ROS_INFO("Reseting arm action...");
    resetArm();
  }

  void resetArm()
  {
    clam_arm_goal_.command = "RESET";
    clam_arm_action_.sendGoal(clam_arm_goal_,
                               boost::bind( &BlockManipulationAction::detectBlocks, this));
  }

  void detectBlocks()
  {
    block_detection_action_.sendGoal(block_detection_goal_,
                                     boost::bind( &BlockManipulationAction::addBlocks, this, _1, _2));
  }

  void addBlocks(const actionlib::SimpleClientGoalState& state, const BlockDetectionResultConstPtr& result)
  {
    ROS_INFO("Got block detection callback. Adding blocks.");
    geometry_msgs::Pose block;

    if (state == actionlib::SimpleClientGoalState::SUCCEEDED)
      ROS_INFO("Detected blocks successfully!");
    else
    {
      ROS_INFO("Did not succeed! %s",  state.toString().c_str());
      ros::shutdown();
    }

    interactive_manipulation_action_.sendGoal(interactive_manipulation_goal_,
                                              boost::bind( &BlockManipulationAction::pickAndPlace,
                                                           this, _1, _2));
    // DTC:
    //interactive_manipulation_action_.cancelGoal();
    //ros::shutdown();
  }

  void pickAndPlace(const actionlib::SimpleClientGoalState& state,
                    const InteractiveBlockManipulationResultConstPtr& result)
  {
    ROS_INFO("Got interactive marker callback. Picking and placing.");

    if (state == actionlib::SimpleClientGoalState::SUCCEEDED)
    {
      ROS_INFO("Recieved user input successfully!");
    }
    else
    {
      ROS_INFO("Did not succeed! %s",  state.toString().c_str());
      ros::shutdown();
    }
    pick_and_place_action_.sendGoal(pick_and_place_goal_,
                                    boost::bind( &BlockManipulationAction::finish, this, _1, _2));
  }

  void finish(const actionlib::SimpleClientGoalState& state, const PickAndPlaceResultConstPtr& result)
  {
    ROS_INFO("Got pick and place callback. Finished!");
    if (state == actionlib::SimpleClientGoalState::SUCCEEDED)
      ROS_INFO("Picked and placed successfully!");
    else
      ROS_INFO("Did not succeed! %s",  state.toString().c_str());

    if (once)
      ros::shutdown();
    else
      resetArm();
  }
};

};

int main(int argc, char** argv)
{
  // initialize node
  ros::init(argc, argv, "block_manipulation");


  clam_block_manipulation::BlockManipulationAction manip;

  // everything is done in cloud callback, just spin
  ros::spin();
}

