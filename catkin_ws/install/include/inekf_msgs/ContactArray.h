// Generated by gencpp from file inekf_msgs/ContactArray.msg
// DO NOT EDIT!


#ifndef INEKF_MSGS_MESSAGE_CONTACTARRAY_H
#define INEKF_MSGS_MESSAGE_CONTACTARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <inekf_msgs/Contact.h>

namespace inekf_msgs
{
template <class ContainerAllocator>
struct ContactArray_
{
  typedef ContactArray_<ContainerAllocator> Type;

  ContactArray_()
    : header()
    , contacts()  {
    }
  ContactArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , contacts(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::inekf_msgs::Contact_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::inekf_msgs::Contact_<ContainerAllocator> >::other >  _contacts_type;
  _contacts_type contacts;





  typedef boost::shared_ptr< ::inekf_msgs::ContactArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::inekf_msgs::ContactArray_<ContainerAllocator> const> ConstPtr;

}; // struct ContactArray_

typedef ::inekf_msgs::ContactArray_<std::allocator<void> > ContactArray;

typedef boost::shared_ptr< ::inekf_msgs::ContactArray > ContactArrayPtr;
typedef boost::shared_ptr< ::inekf_msgs::ContactArray const> ContactArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::inekf_msgs::ContactArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::inekf_msgs::ContactArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::inekf_msgs::ContactArray_<ContainerAllocator1> & lhs, const ::inekf_msgs::ContactArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.contacts == rhs.contacts;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::inekf_msgs::ContactArray_<ContainerAllocator1> & lhs, const ::inekf_msgs::ContactArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace inekf_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::inekf_msgs::ContactArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::inekf_msgs::ContactArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inekf_msgs::ContactArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::inekf_msgs::ContactArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inekf_msgs::ContactArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::inekf_msgs::ContactArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::inekf_msgs::ContactArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "21d911d42a15336d566e5a1f733a4470";
  }

  static const char* value(const ::inekf_msgs::ContactArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x21d911d42a15336dULL;
  static const uint64_t static_value2 = 0x566e5a1f733a4470ULL;
};

template<class ContainerAllocator>
struct DataType< ::inekf_msgs::ContactArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "inekf_msgs/ContactArray";
  }

  static const char* value(const ::inekf_msgs::ContactArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::inekf_msgs::ContactArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Contact[] contacts\n"
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
"MSG: inekf_msgs/Contact\n"
"int32 id\n"
"bool indicator\n"
"\n"
;
  }

  static const char* value(const ::inekf_msgs::ContactArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::inekf_msgs::ContactArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.contacts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ContactArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::inekf_msgs::ContactArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::inekf_msgs::ContactArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "contacts[]" << std::endl;
    for (size_t i = 0; i < v.contacts.size(); ++i)
    {
      s << indent << "  contacts[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::inekf_msgs::Contact_<ContainerAllocator> >::stream(s, indent + "    ", v.contacts[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // INEKF_MSGS_MESSAGE_CONTACTARRAY_H