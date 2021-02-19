// Generated by gencpp from file hospitalbot/Battery.msg
// DO NOT EDIT!


#ifndef HOSPITALBOT_MESSAGE_BATTERY_H
#define HOSPITALBOT_MESSAGE_BATTERY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hospitalbot
{
template <class ContainerAllocator>
struct Battery_
{
  typedef Battery_<ContainerAllocator> Type;

  Battery_()
    : voltage(0.0)
    , maximum_level(0)
    , current_level(0)
    , charging(false)  {
    }
  Battery_(const ContainerAllocator& _alloc)
    : voltage(0.0)
    , maximum_level(0)
    , current_level(0)
    , charging(false)  {
  (void)_alloc;
    }



   typedef float _voltage_type;
  _voltage_type voltage;

   typedef uint8_t _maximum_level_type;
  _maximum_level_type maximum_level;

   typedef uint8_t _current_level_type;
  _current_level_type current_level;

   typedef uint8_t _charging_type;
  _charging_type charging;




  typedef boost::shared_ptr< ::hospitalbot::Battery_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hospitalbot::Battery_<ContainerAllocator> const> ConstPtr;

}; // struct Battery_

typedef ::hospitalbot::Battery_<std::allocator<void> > Battery;

typedef boost::shared_ptr< ::hospitalbot::Battery > BatteryPtr;
typedef boost::shared_ptr< ::hospitalbot::Battery const> BatteryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hospitalbot::Battery_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hospitalbot::Battery_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hospitalbot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'hospitalbot': ['/home/darkboy/catkin_ws/src/hospitalbot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hospitalbot::Battery_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hospitalbot::Battery_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hospitalbot::Battery_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hospitalbot::Battery_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hospitalbot::Battery_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hospitalbot::Battery_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hospitalbot::Battery_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e743845835d4deeeefdd5b5abae7a1f4";
  }

  static const char* value(const ::hospitalbot::Battery_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe743845835d4deeeULL;
  static const uint64_t static_value2 = 0xefdd5b5abae7a1f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::hospitalbot::Battery_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hospitalbot/Battery";
  }

  static const char* value(const ::hospitalbot::Battery_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hospitalbot::Battery_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 voltage\n\
uint8 maximum_level\n\
uint8 current_level\n\
bool charging\n\
";
  }

  static const char* value(const ::hospitalbot::Battery_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hospitalbot::Battery_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.voltage);
      stream.next(m.maximum_level);
      stream.next(m.current_level);
      stream.next(m.charging);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Battery_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hospitalbot::Battery_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hospitalbot::Battery_<ContainerAllocator>& v)
  {
    s << indent << "voltage: ";
    Printer<float>::stream(s, indent + "  ", v.voltage);
    s << indent << "maximum_level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.maximum_level);
    s << indent << "current_level: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.current_level);
    s << indent << "charging: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.charging);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HOSPITALBOT_MESSAGE_BATTERY_H