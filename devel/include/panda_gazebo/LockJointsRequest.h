// Generated by gencpp from file panda_gazebo/LockJointsRequest.msg
// DO NOT EDIT!


#ifndef PANDA_GAZEBO_MESSAGE_LOCKJOINTSREQUEST_H
#define PANDA_GAZEBO_MESSAGE_LOCKJOINTSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace panda_gazebo
{
template <class ContainerAllocator>
struct LockJointsRequest_
{
  typedef LockJointsRequest_<ContainerAllocator> Type;

  LockJointsRequest_()
    : joint_names()
    , lock(false)  {
    }
  LockJointsRequest_(const ContainerAllocator& _alloc)
    : joint_names(_alloc)
    , lock(false)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _joint_names_type;
  _joint_names_type joint_names;

   typedef uint8_t _lock_type;
  _lock_type lock;





  typedef boost::shared_ptr< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LockJointsRequest_

typedef ::panda_gazebo::LockJointsRequest_<std::allocator<void> > LockJointsRequest;

typedef boost::shared_ptr< ::panda_gazebo::LockJointsRequest > LockJointsRequestPtr;
typedef boost::shared_ptr< ::panda_gazebo::LockJointsRequest const> LockJointsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::panda_gazebo::LockJointsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::panda_gazebo::LockJointsRequest_<ContainerAllocator1> & lhs, const ::panda_gazebo::LockJointsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.joint_names == rhs.joint_names &&
    lhs.lock == rhs.lock;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::panda_gazebo::LockJointsRequest_<ContainerAllocator1> & lhs, const ::panda_gazebo::LockJointsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace panda_gazebo

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e3f532b3fc5dd33c255de3599f87ab7";
  }

  static const char* value(const ::panda_gazebo::LockJointsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e3f532b3fc5dd33ULL;
  static const uint64_t static_value2 = 0xc255de3599f87ab7ULL;
};

template<class ContainerAllocator>
struct DataType< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "panda_gazebo/LockJointsRequest";
  }

  static const char* value(const ::panda_gazebo::LockJointsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Service that can be used to lock/unlock specific joints of the robot.\n"
"string[] joint_names\n"
"bool lock\n"
;
  }

  static const char* value(const ::panda_gazebo::LockJointsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_names);
      stream.next(m.lock);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LockJointsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::panda_gazebo::LockJointsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::panda_gazebo::LockJointsRequest_<ContainerAllocator>& v)
  {
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "lock: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lock);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PANDA_GAZEBO_MESSAGE_LOCKJOINTSREQUEST_H