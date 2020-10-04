// Generated by gencpp from file inekf_msgs/State.msg
// DO NOT EDIT!


#ifndef INEKF_MSGS_MESSAGE_STATE_H
#define INEKF_MSGS_MESSAGE_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Point.h>
#include <inekf_msgs/VectorWithId.h>
#include <inekf_msgs/VectorWithId.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace inekf_msgs
{
template <class ContainerAllocator>
struct State_
{
  typedef State_<ContainerAllocator> Type;

  State_()
    : header()
    , orientation()
    , velocity()
    , position()
    , covariance()
    , contacts()
    , landmarks()
    , gyroscope_bias()
    , accelerometer_bias()  {
      covariance.assign(0.0);
  }
  State_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , orientation(_alloc)
    , velocity(_alloc)
    , position(_alloc)
    , covariance()
    , contacts(_alloc)
    , landmarks(_alloc)
    , gyroscope_bias(_alloc)
    , accelerometer_bias(_alloc)  {
  (void)_alloc;
      covariance.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef boost::array<double, 81>  _covariance_type;
  _covariance_type covariance;

   typedef std::vector< ::inekf_msgs::VectorWithId_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::inekf_msgs::VectorWithId_<ContainerAllocator> >::other >  _contacts_type;
  _contacts_type contacts;

   typedef std::vector< ::inekf_msgs::VectorWithId_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::inekf_msgs::VectorWithId_<ContainerAllocator> >::other >  _landmarks_type;
  _landmarks_type landmarks;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _gyroscope_bias_type;
  _gyroscope_bias_type gyroscope_bias;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _accelerometer_bias_type;
  _accelerometer_bias_type accelerometer_bias;





  typedef boost::shared_ptr< ::inekf_msgs::State_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inekf_msgs::State_<ContainerAllocator> const> ConstPtr;

}; // struct State_

typedef ::inekf_msgs::State_<std::allocator<void> > State;

typedef boost::shared_ptr< ::inekf_msgs::State > StatePtr;
typedef boost::shared_ptr< ::inekf_msgs::State const> StateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inekf_msgs::State_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inekf_msgs::State_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::inekf_msgs::State_<ContainerAllocator1> & lhs, const ::inekf_msgs::State_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.orientation == rhs.orientation &&
    lhs.velocity == rhs.velocity &&
    lhs.position == rhs.position &&
    lhs.covariance == rhs.covariance &&
    lhs.contacts == rhs.contacts &&
    lhs.landmarks == rhs.landmarks &&
    lhs.gyroscope_bias == rhs.gyroscope_bias &&
    lhs.accelerometer_bias == rhs.accelerometer_bias;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::inekf_msgs::State_<ContainerAllocator1> & lhs, const ::inekf_msgs::State_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace inekf_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::inekf_msgs::State_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inekf_msgs::State_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inekf_msgs::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inekf_msgs::State_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inekf_msgs::State_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inekf_msgs::State_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inekf_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7343162f53e88be8c7489511184bffa";
  }

  static const char* value(const ::inekf_msgs::State_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7343162f53e88beULL;
  static const uint64_t static_value2 = 0x8c7489511184bffaULL;
};

template<class ContainerAllocator>
struct DataType< ::inekf_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inekf_msgs/State";
  }

  static const char* value(const ::inekf_msgs::State_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inekf_msgs::State_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"geometry_msgs/Quaternion orientation\n"
"geometry_msgs/Vector3 velocity\n"
"geometry_msgs/Point position\n"
"float64[81] covariance\n"
"VectorWithId[] contacts\n"
"VectorWithId[] landmarks\n"
"geometry_msgs/Vector3 gyroscope_bias\n"
"geometry_msgs/Vector3 accelerometer_bias\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: inekf_msgs/VectorWithId\n"
"int32 id\n"
"geometry_msgs/Point position\n"
;
  }

  static const char* value(const ::inekf_msgs::State_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inekf_msgs::State_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.orientation);
      stream.next(m.velocity);
      stream.next(m.position);
      stream.next(m.covariance);
      stream.next(m.contacts);
      stream.next(m.landmarks);
      stream.next(m.gyroscope_bias);
      stream.next(m.accelerometer_bias);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct State_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inekf_msgs::State_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inekf_msgs::State_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
    s << indent << "contacts[]" << std::endl;
    for (size_t i = 0; i < v.contacts.size(); ++i)
    {
      s << indent << "  contacts[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::inekf_msgs::VectorWithId_<ContainerAllocator> >::stream(s, indent + "    ", v.contacts[i]);
    }
    s << indent << "landmarks[]" << std::endl;
    for (size_t i = 0; i < v.landmarks.size(); ++i)
    {
      s << indent << "  landmarks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::inekf_msgs::VectorWithId_<ContainerAllocator> >::stream(s, indent + "    ", v.landmarks[i]);
    }
    s << indent << "gyroscope_bias: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.gyroscope_bias);
    s << indent << "accelerometer_bias: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.accelerometer_bias);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INEKF_MSGS_MESSAGE_STATE_H
