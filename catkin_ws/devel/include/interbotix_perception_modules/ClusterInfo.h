// Generated by gencpp from file interbotix_perception_modules/ClusterInfo.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_PERCEPTION_MODULES_MESSAGE_CLUSTERINFO_H
#define INTERBOTIX_PERCEPTION_MODULES_MESSAGE_CLUSTERINFO_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>
#include <std_msgs/ColorRGBA.h>
#include <geometry_msgs/Point.h>

namespace interbotix_perception_modules
{
template <class ContainerAllocator>
struct ClusterInfo_
{
  typedef ClusterInfo_<ContainerAllocator> Type;

  ClusterInfo_()
    : frame_id()
    , position()
    , yaw(0.0)
    , color()
    , min_z_point()
    , num_points(0)  {
    }
  ClusterInfo_(const ContainerAllocator& _alloc)
    : frame_id(_alloc)
    , position(_alloc)
    , yaw(0.0)
    , color(_alloc)
    , min_z_point(_alloc)
    , num_points(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _frame_id_type;
  _frame_id_type frame_id;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _color_type;
  _color_type color;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _min_z_point_type;
  _min_z_point_type min_z_point;

   typedef int32_t _num_points_type;
  _num_points_type num_points;





  typedef boost::shared_ptr< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> const> ConstPtr;

}; // struct ClusterInfo_

typedef ::interbotix_perception_modules::ClusterInfo_<std::allocator<void> > ClusterInfo;

typedef boost::shared_ptr< ::interbotix_perception_modules::ClusterInfo > ClusterInfoPtr;
typedef boost::shared_ptr< ::interbotix_perception_modules::ClusterInfo const> ClusterInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator1> & lhs, const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator2> & rhs)
{
  return lhs.frame_id == rhs.frame_id &&
    lhs.position == rhs.position &&
    lhs.yaw == rhs.yaw &&
    lhs.color == rhs.color &&
    lhs.min_z_point == rhs.min_z_point &&
    lhs.num_points == rhs.num_points;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator1> & lhs, const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace interbotix_perception_modules

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9627d2d019ccc4ed2077673b4b0f3b40";
  }

  static const char* value(const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9627d2d019ccc4edULL;
  static const uint64_t static_value2 = 0x2077673b4b0f3b40ULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_perception_modules/ClusterInfo";
  }

  static const char* value(const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is used specifically in the interbotix_perception_modules package\n"
"#\n"
"# Message that holds information about each cluster\n"
"\n"
"string frame_id                     # parent frame of the cluster (usually 'camera_depth_optical_frame' or similar)\n"
"geometry_msgs/Point position        # x, y, z position of the cluster\n"
"float32 yaw                         # yaw [rad] of the cluster; x-axis of the cluster should align\n"
"                                    # with the major-axis of a best-fit ellipse (currently not supported)\n"
"std_msgs/ColorRGBA color            # average RGB values (0 - 255) for the whole cluster\n"
"geometry_msgs/Point min_z_point     # point with the min 'z' value of the cluster\n"
"int32 num_points                    # number of points in the cluster\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.position);
      stream.next(m.yaw);
      stream.next(m.color);
      stream.next(m.min_z_point);
      stream.next(m.num_points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ClusterInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_perception_modules::ClusterInfo_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.frame_id);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "color: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.color);
    s << indent << "min_z_point: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.min_z_point);
    s << indent << "num_points: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_points);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_PERCEPTION_MODULES_MESSAGE_CLUSTERINFO_H
