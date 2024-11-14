// Generated by gencpp from file brl_pxh_api/GripperPressureGoal.msg
// DO NOT EDIT!


#ifndef BRL_PXH_API_MESSAGE_GRIPPERPRESSUREGOAL_H
#define BRL_PXH_API_MESSAGE_GRIPPERPRESSUREGOAL_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace brl_pxh_api
{
template <class ContainerAllocator>
struct GripperPressureGoal_
{
  typedef GripperPressureGoal_<ContainerAllocator> Type;

  GripperPressureGoal_()
    : pressure(0.0)  {
    }
  GripperPressureGoal_(const ContainerAllocator& _alloc)
    : pressure(0.0)  {
  (void)_alloc;
    }



   typedef float _pressure_type;
  _pressure_type pressure;





  typedef boost::shared_ptr< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> const> ConstPtr;

}; // struct GripperPressureGoal_

typedef ::brl_pxh_api::GripperPressureGoal_<std::allocator<void> > GripperPressureGoal;

typedef boost::shared_ptr< ::brl_pxh_api::GripperPressureGoal > GripperPressureGoalPtr;
typedef boost::shared_ptr< ::brl_pxh_api::GripperPressureGoal const> GripperPressureGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator1> & lhs, const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator2> & rhs)
{
  return lhs.pressure == rhs.pressure;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator1> & lhs, const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace brl_pxh_api

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d08eeab8c09d2ba14f8144e3bbf40d21";
  }

  static const char* value(const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd08eeab8c09d2ba1ULL;
  static const uint64_t static_value2 = 0x4f8144e3bbf40d21ULL;
};

template<class ContainerAllocator>
struct DataType< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "brl_pxh_api/GripperPressureGoal";
  }

  static const char* value(const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Goal\n"
"float32 pressure \n"
;
  }

  static const char* value(const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pressure);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GripperPressureGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::brl_pxh_api::GripperPressureGoal_<ContainerAllocator>& v)
  {
    s << indent << "pressure: ";
    Printer<float>::stream(s, indent + "  ", v.pressure);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BRL_PXH_API_MESSAGE_GRIPPERPRESSUREGOAL_H