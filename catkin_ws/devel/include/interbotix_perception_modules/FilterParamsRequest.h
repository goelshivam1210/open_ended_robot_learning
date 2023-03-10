// Generated by gencpp from file interbotix_perception_modules/FilterParamsRequest.msg
// DO NOT EDIT!


#ifndef INTERBOTIX_PERCEPTION_MODULES_MESSAGE_FILTERPARAMSREQUEST_H
#define INTERBOTIX_PERCEPTION_MODULES_MESSAGE_FILTERPARAMSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace interbotix_perception_modules
{
template <class ContainerAllocator>
struct FilterParamsRequest_
{
  typedef FilterParamsRequest_<ContainerAllocator> Type;

  FilterParamsRequest_()
    : x_filter_min(0.0)
    , x_filter_max(0.0)
    , y_filter_min(0.0)
    , y_filter_max(0.0)
    , z_filter_min(0.0)
    , z_filter_max(0.0)
    , voxel_leaf_size(0.0)
    , plane_max_iter(0)
    , plane_dist_thresh(0.0)
    , ror_radius_search(0.0)
    , ror_min_neighbors(0)
    , cluster_tol(0.0)
    , cluster_min_size(0)
    , cluster_max_size(0)  {
    }
  FilterParamsRequest_(const ContainerAllocator& _alloc)
    : x_filter_min(0.0)
    , x_filter_max(0.0)
    , y_filter_min(0.0)
    , y_filter_max(0.0)
    , z_filter_min(0.0)
    , z_filter_max(0.0)
    , voxel_leaf_size(0.0)
    , plane_max_iter(0)
    , plane_dist_thresh(0.0)
    , ror_radius_search(0.0)
    , ror_min_neighbors(0)
    , cluster_tol(0.0)
    , cluster_min_size(0)
    , cluster_max_size(0)  {
  (void)_alloc;
    }



   typedef float _x_filter_min_type;
  _x_filter_min_type x_filter_min;

   typedef float _x_filter_max_type;
  _x_filter_max_type x_filter_max;

   typedef float _y_filter_min_type;
  _y_filter_min_type y_filter_min;

   typedef float _y_filter_max_type;
  _y_filter_max_type y_filter_max;

   typedef float _z_filter_min_type;
  _z_filter_min_type z_filter_min;

   typedef float _z_filter_max_type;
  _z_filter_max_type z_filter_max;

   typedef float _voxel_leaf_size_type;
  _voxel_leaf_size_type voxel_leaf_size;

   typedef int32_t _plane_max_iter_type;
  _plane_max_iter_type plane_max_iter;

   typedef float _plane_dist_thresh_type;
  _plane_dist_thresh_type plane_dist_thresh;

   typedef float _ror_radius_search_type;
  _ror_radius_search_type ror_radius_search;

   typedef int32_t _ror_min_neighbors_type;
  _ror_min_neighbors_type ror_min_neighbors;

   typedef float _cluster_tol_type;
  _cluster_tol_type cluster_tol;

   typedef int32_t _cluster_min_size_type;
  _cluster_min_size_type cluster_min_size;

   typedef int32_t _cluster_max_size_type;
  _cluster_max_size_type cluster_max_size;





  typedef boost::shared_ptr< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FilterParamsRequest_

typedef ::interbotix_perception_modules::FilterParamsRequest_<std::allocator<void> > FilterParamsRequest;

typedef boost::shared_ptr< ::interbotix_perception_modules::FilterParamsRequest > FilterParamsRequestPtr;
typedef boost::shared_ptr< ::interbotix_perception_modules::FilterParamsRequest const> FilterParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator1> & lhs, const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x_filter_min == rhs.x_filter_min &&
    lhs.x_filter_max == rhs.x_filter_max &&
    lhs.y_filter_min == rhs.y_filter_min &&
    lhs.y_filter_max == rhs.y_filter_max &&
    lhs.z_filter_min == rhs.z_filter_min &&
    lhs.z_filter_max == rhs.z_filter_max &&
    lhs.voxel_leaf_size == rhs.voxel_leaf_size &&
    lhs.plane_max_iter == rhs.plane_max_iter &&
    lhs.plane_dist_thresh == rhs.plane_dist_thresh &&
    lhs.ror_radius_search == rhs.ror_radius_search &&
    lhs.ror_min_neighbors == rhs.ror_min_neighbors &&
    lhs.cluster_tol == rhs.cluster_tol &&
    lhs.cluster_min_size == rhs.cluster_min_size &&
    lhs.cluster_max_size == rhs.cluster_max_size;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator1> & lhs, const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace interbotix_perception_modules

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "57d51b939efff834ad5e55a181a7a0a0";
  }

  static const char* value(const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x57d51b939efff834ULL;
  static const uint64_t static_value2 = 0xad5e55a181a7a0a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "interbotix_perception_modules/FilterParamsRequest";
  }

  static const char* value(const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service is used specifically in the interbotix_perception_modules package\n"
"#\n"
"# Parameters used to tune the various PCL Pointcloud filters\n"
"\n"
"float32 x_filter_min            # minimum value [m] along the x axis beyond which all points will be cropped when doing Crop Box Filtering\n"
"float32 x_filter_max            # maximum value [m] along the x axis beyond which all points will be cropped when doing Crop Box Filtering\n"
"float32 y_filter_min            # minimum value [m] along the y axis beyond which all points will be cropped when doing Crop Box Filtering\n"
"float32 y_filter_max            # maximum value [m] along the y axis beyond which all points will be cropped when doing Crop Box Filtering\n"
"float32 z_filter_min            # minimum value [m] along the z axis beyond which all points will be cropped when doing Crop Box Filtering\n"
"float32 z_filter_max            # maximum value [m] along the z axis beyond which all points will be cropped when doing Crop Box Filtering\n"
"float32 voxel_leaf_size         # voxel leaf size [m] for the x, y, and z axes when doing Voxel Filtering\n"
"int32 plane_max_iter            # maximum number of iterations the algorithm should go when when doing Planar Segmentation\n"
"float32 plane_dist_thresh       # distance [m] perpendicular from the planar model outside of which points should not be segmented out when doing Planar Segmentation\n"
"float32 ror_radius_search       # desired search radius when doing Radius Outlier Removal\n"
"int32 ror_min_neighbors         # minimum number of neighbors a point should have to not be cropped out when doing Radius Outlier Removal\n"
"float32 cluster_tol             # any point within this distance [m] will be considered part of the same cluster\n"
"int32 cluster_min_size          # minimum number of points a cluster must have to be considered a cluster\n"
"int32 cluster_max_size          # maximum number of points a cluster can have to be considered a cluster\n"
;
  }

  static const char* value(const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x_filter_min);
      stream.next(m.x_filter_max);
      stream.next(m.y_filter_min);
      stream.next(m.y_filter_max);
      stream.next(m.z_filter_min);
      stream.next(m.z_filter_max);
      stream.next(m.voxel_leaf_size);
      stream.next(m.plane_max_iter);
      stream.next(m.plane_dist_thresh);
      stream.next(m.ror_radius_search);
      stream.next(m.ror_min_neighbors);
      stream.next(m.cluster_tol);
      stream.next(m.cluster_min_size);
      stream.next(m.cluster_max_size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FilterParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::interbotix_perception_modules::FilterParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "x_filter_min: ";
    Printer<float>::stream(s, indent + "  ", v.x_filter_min);
    s << indent << "x_filter_max: ";
    Printer<float>::stream(s, indent + "  ", v.x_filter_max);
    s << indent << "y_filter_min: ";
    Printer<float>::stream(s, indent + "  ", v.y_filter_min);
    s << indent << "y_filter_max: ";
    Printer<float>::stream(s, indent + "  ", v.y_filter_max);
    s << indent << "z_filter_min: ";
    Printer<float>::stream(s, indent + "  ", v.z_filter_min);
    s << indent << "z_filter_max: ";
    Printer<float>::stream(s, indent + "  ", v.z_filter_max);
    s << indent << "voxel_leaf_size: ";
    Printer<float>::stream(s, indent + "  ", v.voxel_leaf_size);
    s << indent << "plane_max_iter: ";
    Printer<int32_t>::stream(s, indent + "  ", v.plane_max_iter);
    s << indent << "plane_dist_thresh: ";
    Printer<float>::stream(s, indent + "  ", v.plane_dist_thresh);
    s << indent << "ror_radius_search: ";
    Printer<float>::stream(s, indent + "  ", v.ror_radius_search);
    s << indent << "ror_min_neighbors: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ror_min_neighbors);
    s << indent << "cluster_tol: ";
    Printer<float>::stream(s, indent + "  ", v.cluster_tol);
    s << indent << "cluster_min_size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cluster_min_size);
    s << indent << "cluster_max_size: ";
    Printer<int32_t>::stream(s, indent + "  ", v.cluster_max_size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERBOTIX_PERCEPTION_MODULES_MESSAGE_FILTERPARAMSREQUEST_H
