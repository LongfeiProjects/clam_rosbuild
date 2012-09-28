/* Auto-generated by genmsg_cpp for file /home/dave/ros/clam/clam_block_manipulation/msg/PickAndPlaceGoal.msg */
#ifndef CLAM_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACEGOAL_H
#define CLAM_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACEGOAL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "geometry_msgs/Pose.h"
#include "geometry_msgs/Pose.h"

namespace clam_block_manipulation
{
template <class ContainerAllocator>
struct PickAndPlaceGoal_ {
  typedef PickAndPlaceGoal_<ContainerAllocator> Type;

  PickAndPlaceGoal_()
  : frame()
  , z_up(0.0)
  , gripper_open(0.0)
  , gripper_closed(0.0)
  , pickup_pose()
  , place_pose()
  , topic()
  {
  }

  PickAndPlaceGoal_(const ContainerAllocator& _alloc)
  : frame(_alloc)
  , z_up(0.0)
  , gripper_open(0.0)
  , gripper_closed(0.0)
  , pickup_pose(_alloc)
  , place_pose(_alloc)
  , topic(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _frame_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  frame;

  typedef float _z_up_type;
  float z_up;

  typedef float _gripper_open_type;
  float gripper_open;

  typedef float _gripper_closed_type;
  float gripper_closed;

  typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pickup_pose_type;
   ::geometry_msgs::Pose_<ContainerAllocator>  pickup_pose;

  typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _place_pose_type;
   ::geometry_msgs::Pose_<ContainerAllocator>  place_pose;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  topic;


private:
  static const char* __s_getDataType_() { return "clam_block_manipulation/PickAndPlaceGoal"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "406b9d2b14d3c2ad49cf6e087a7292df"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
string frame\n\
float32 z_up\n\
float32 gripper_open\n\
float32 gripper_closed\n\
geometry_msgs/Pose pickup_pose\n\
geometry_msgs/Pose place_pose\n\
string topic\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, frame);
    ros::serialization::serialize(stream, z_up);
    ros::serialization::serialize(stream, gripper_open);
    ros::serialization::serialize(stream, gripper_closed);
    ros::serialization::serialize(stream, pickup_pose);
    ros::serialization::serialize(stream, place_pose);
    ros::serialization::serialize(stream, topic);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, frame);
    ros::serialization::deserialize(stream, z_up);
    ros::serialization::deserialize(stream, gripper_open);
    ros::serialization::deserialize(stream, gripper_closed);
    ros::serialization::deserialize(stream, pickup_pose);
    ros::serialization::deserialize(stream, place_pose);
    ros::serialization::deserialize(stream, topic);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(frame);
    size += ros::serialization::serializationLength(z_up);
    size += ros::serialization::serializationLength(gripper_open);
    size += ros::serialization::serializationLength(gripper_closed);
    size += ros::serialization::serializationLength(pickup_pose);
    size += ros::serialization::serializationLength(place_pose);
    size += ros::serialization::serializationLength(topic);
    return size;
  }

  typedef boost::shared_ptr< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct PickAndPlaceGoal
typedef  ::clam_block_manipulation::PickAndPlaceGoal_<std::allocator<void> > PickAndPlaceGoal;

typedef boost::shared_ptr< ::clam_block_manipulation::PickAndPlaceGoal> PickAndPlaceGoalPtr;
typedef boost::shared_ptr< ::clam_block_manipulation::PickAndPlaceGoal const> PickAndPlaceGoalConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace clam_block_manipulation

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "406b9d2b14d3c2ad49cf6e087a7292df";
  }

  static const char* value(const  ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x406b9d2b14d3c2adULL;
  static const uint64_t static_value2 = 0x49cf6e087a7292dfULL;
};

template<class ContainerAllocator>
struct DataType< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "clam_block_manipulation/PickAndPlaceGoal";
  }

  static const char* value(const  ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
string frame\n\
float32 z_up\n\
float32 gripper_open\n\
float32 gripper_closed\n\
geometry_msgs/Pose pickup_pose\n\
geometry_msgs/Pose place_pose\n\
string topic\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.frame);
    stream.next(m.z_up);
    stream.next(m.gripper_open);
    stream.next(m.gripper_closed);
    stream.next(m.pickup_pose);
    stream.next(m.place_pose);
    stream.next(m.topic);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct PickAndPlaceGoal_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::clam_block_manipulation::PickAndPlaceGoal_<ContainerAllocator> & v) 
  {
    s << indent << "frame: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.frame);
    s << indent << "z_up: ";
    Printer<float>::stream(s, indent + "  ", v.z_up);
    s << indent << "gripper_open: ";
    Printer<float>::stream(s, indent + "  ", v.gripper_open);
    s << indent << "gripper_closed: ";
    Printer<float>::stream(s, indent + "  ", v.gripper_closed);
    s << indent << "pickup_pose: ";
s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pickup_pose);
    s << indent << "place_pose: ";
s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.place_pose);
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CLAM_BLOCK_MANIPULATION_MESSAGE_PICKANDPLACEGOAL_H
