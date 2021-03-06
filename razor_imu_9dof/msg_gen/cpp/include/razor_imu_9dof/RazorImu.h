/* Auto-generated by genmsg_cpp for file /home/paralax2/github/razor_imu_9dof/razor_imu_9dof/msg/RazorImu.msg */
#ifndef RAZOR_IMU_9DOF_MESSAGE_RAZORIMU_H
#define RAZOR_IMU_9DOF_MESSAGE_RAZORIMU_H
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


namespace razor_imu_9dof
{
template <class ContainerAllocator>
struct RazorImu_ {
  typedef RazorImu_<ContainerAllocator> Type;

  RazorImu_()
  : roll(0.0)
  , pitch(0.0)
  , yaw(0.0)
  {
  }

  RazorImu_(const ContainerAllocator& _alloc)
  : roll(0.0)
  , pitch(0.0)
  , yaw(0.0)
  {
  }

  typedef float _roll_type;
  float roll;

  typedef float _pitch_type;
  float pitch;

  typedef float _yaw_type;
  float yaw;


  typedef boost::shared_ptr< ::razor_imu_9dof::RazorImu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::razor_imu_9dof::RazorImu_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RazorImu
typedef  ::razor_imu_9dof::RazorImu_<std::allocator<void> > RazorImu;

typedef boost::shared_ptr< ::razor_imu_9dof::RazorImu> RazorImuPtr;
typedef boost::shared_ptr< ::razor_imu_9dof::RazorImu const> RazorImuConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::razor_imu_9dof::RazorImu_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::razor_imu_9dof::RazorImu_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace razor_imu_9dof

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::razor_imu_9dof::RazorImu_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::razor_imu_9dof::RazorImu_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::razor_imu_9dof::RazorImu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c66f4de7f99199dd8e863fffbef112ad";
  }

  static const char* value(const  ::razor_imu_9dof::RazorImu_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc66f4de7f99199ddULL;
  static const uint64_t static_value2 = 0x8e863fffbef112adULL;
};

template<class ContainerAllocator>
struct DataType< ::razor_imu_9dof::RazorImu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "razor_imu_9dof/RazorImu";
  }

  static const char* value(const  ::razor_imu_9dof::RazorImu_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::razor_imu_9dof::RazorImu_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 roll\n\
float32 pitch\n\
float32 yaw\n\
\n\
";
  }

  static const char* value(const  ::razor_imu_9dof::RazorImu_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::razor_imu_9dof::RazorImu_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::razor_imu_9dof::RazorImu_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.roll);
    stream.next(m.pitch);
    stream.next(m.yaw);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RazorImu_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::razor_imu_9dof::RazorImu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::razor_imu_9dof::RazorImu_<ContainerAllocator> & v) 
  {
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};


} // namespace message_operations
} // namespace ros

#endif // RAZOR_IMU_9DOF_MESSAGE_RAZORIMU_H

