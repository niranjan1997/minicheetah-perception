// Generated by gencpp from file inekf_msgs/Contact.msg
// DO NOT EDIT!


#ifndef INEKF_MSGS_MESSAGE_CONTACT_H
#define INEKF_MSGS_MESSAGE_CONTACT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace inekf_msgs
{
template <class ContainerAllocator>
struct Contact_
{
  typedef Contact_<ContainerAllocator> Type;

  Contact_()
    : id(0)
    , indicator(false)  {
    }
  Contact_(const ContainerAllocator& _alloc)
    : id(0)
    , indicator(false)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef uint8_t _indicator_type;
  _indicator_type indicator;





  typedef boost::shared_ptr< ::inekf_msgs::Contact_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inekf_msgs::Contact_<ContainerAllocator> const> ConstPtr;

}; // struct Contact_

typedef ::inekf_msgs::Contact_<std::allocator<void> > Contact;

typedef boost::shared_ptr< ::inekf_msgs::Contact > ContactPtr;
typedef boost::shared_ptr< ::inekf_msgs::Contact const> ContactConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inekf_msgs::Contact_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inekf_msgs::Contact_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::inekf_msgs::Contact_<ContainerAllocator1> & lhs, const ::inekf_msgs::Contact_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.indicator == rhs.indicator;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::inekf_msgs::Contact_<ContainerAllocator1> & lhs, const ::inekf_msgs::Contact_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace inekf_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::inekf_msgs::Contact_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inekf_msgs::Contact_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inekf_msgs::Contact_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inekf_msgs::Contact_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inekf_msgs::Contact_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inekf_msgs::Contact_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inekf_msgs::Contact_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9b656e87f7598502afc68a75a34bb861";
  }

  static const char* value(const ::inekf_msgs::Contact_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9b656e87f7598502ULL;
  static const uint64_t static_value2 = 0xafc68a75a34bb861ULL;
};

template<class ContainerAllocator>
struct DataType< ::inekf_msgs::Contact_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inekf_msgs/Contact";
  }

  static const char* value(const ::inekf_msgs::Contact_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inekf_msgs::Contact_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"bool indicator\n"
"\n"
;
  }

  static const char* value(const ::inekf_msgs::Contact_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inekf_msgs::Contact_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.indicator);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Contact_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inekf_msgs::Contact_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inekf_msgs::Contact_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "indicator: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.indicator);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INEKF_MSGS_MESSAGE_CONTACT_H