/* Auto-generated by genmsg_cpp for file /home/correlllab/ros/dynamixel_motor/dynamixel_controllers/srv/SetComplianceSlope.srv */
#ifndef DYNAMIXEL_CONTROLLERS_SERVICE_SETCOMPLIANCESLOPE_H
#define DYNAMIXEL_CONTROLLERS_SERVICE_SETCOMPLIANCESLOPE_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "ros/service_traits.h"




namespace dynamixel_controllers
{
template <class ContainerAllocator>
struct SetComplianceSlopeRequest_ : public ros::Message
{
  typedef SetComplianceSlopeRequest_<ContainerAllocator> Type;

  SetComplianceSlopeRequest_()
  : slope(0)
  {
  }

  SetComplianceSlopeRequest_(const ContainerAllocator& _alloc)
  : slope(0)
  {
  }

  typedef uint8_t _slope_type;
  uint8_t slope;


private:
  static const char* __s_getDataType_() { return "dynamixel_controllers/SetComplianceSlopeRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "0b655cbe1b74daf357824dcc427c1004"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "0b655cbe1b74daf357824dcc427c1004"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
uint8 slope\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, slope);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, slope);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(slope);
    return size;
  }

  typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator>  const> ConstPtr;
}; // struct SetComplianceSlopeRequest
typedef  ::dynamixel_controllers::SetComplianceSlopeRequest_<std::allocator<void> > SetComplianceSlopeRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeRequest> SetComplianceSlopeRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeRequest const> SetComplianceSlopeRequestConstPtr;


template <class ContainerAllocator>
struct SetComplianceSlopeResponse_ : public ros::Message
{
  typedef SetComplianceSlopeResponse_<ContainerAllocator> Type;

  SetComplianceSlopeResponse_()
  {
  }

  SetComplianceSlopeResponse_(const ContainerAllocator& _alloc)
  {
  }


private:
  static const char* __s_getDataType_() { return "dynamixel_controllers/SetComplianceSlopeResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d41d8cd98f00b204e9800998ecf8427e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "0b655cbe1b74daf357824dcc427c1004"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    return size;
  }

  typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator>  const> ConstPtr;
}; // struct SetComplianceSlopeResponse
typedef  ::dynamixel_controllers::SetComplianceSlopeResponse_<std::allocator<void> > SetComplianceSlopeResponse;

typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeResponse> SetComplianceSlopeResponsePtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeResponse const> SetComplianceSlopeResponseConstPtr;

struct SetComplianceSlope
{

typedef SetComplianceSlopeRequest Request;
typedef SetComplianceSlopeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct SetComplianceSlope
} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0b655cbe1b74daf357824dcc427c1004";
  }

  static const char* value(const  ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x0b655cbe1b74daf3ULL;
  static const uint64_t static_value2 = 0x57824dcc427c1004ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetComplianceSlopeRequest";
  }

  static const char* value(const  ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
uint8 slope\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetComplianceSlopeResponse";
  }

  static const char* value(const  ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
";
  }

  static const char* value(const  ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.slope);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetComplianceSlopeRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct SetComplianceSlopeResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<dynamixel_controllers::SetComplianceSlope> {
  static const char* value() 
  {
    return "0b655cbe1b74daf357824dcc427c1004";
  }

  static const char* value(const dynamixel_controllers::SetComplianceSlope&) { return value(); } 
};

template<>
struct DataType<dynamixel_controllers::SetComplianceSlope> {
  static const char* value() 
  {
    return "dynamixel_controllers/SetComplianceSlope";
  }

  static const char* value(const dynamixel_controllers::SetComplianceSlope&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0b655cbe1b74daf357824dcc427c1004";
  }

  static const char* value(const dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetComplianceSlope";
  }

  static const char* value(const dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "0b655cbe1b74daf357824dcc427c1004";
  }

  static const char* value(const dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "dynamixel_controllers/SetComplianceSlope";
  }

  static const char* value(const dynamixel_controllers::SetComplianceSlopeResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_SERVICE_SETCOMPLIANCESLOPE_H

