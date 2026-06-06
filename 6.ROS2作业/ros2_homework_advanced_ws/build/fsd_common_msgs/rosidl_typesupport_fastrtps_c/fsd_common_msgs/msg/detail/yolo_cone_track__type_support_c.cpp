// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fsd_common_msgs:msg/YoloConeTrack.idl
// generated code does not contain a copyright notice
#include "fsd_common_msgs/msg/detail/yolo_cone_track__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fsd_common_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fsd_common_msgs/msg/detail/yolo_cone_track__struct.h"
#include "fsd_common_msgs/msg/detail/yolo_cone_track__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // position
#include "std_msgs/msg/detail/float32__functions.h"  // color_confidence, height, pose_confidence, width, x, y
#include "std_msgs/msg/detail/string__functions.h"  // color, tracking_state
#include "std_msgs/msg/detail/u_int8__functions.h"  // missing_frams, tracking_id

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_serialize_std_msgs__msg__Float32(
  const std_msgs__msg__Float32 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_deserialize_std_msgs__msg__Float32(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Float32 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_std_msgs__msg__Float32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_std_msgs__msg__Float32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_serialize_key_std_msgs__msg__Float32(
  const std_msgs__msg__Float32 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_key_std_msgs__msg__Float32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_key_std_msgs__msg__Float32(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_serialize_std_msgs__msg__String(
  const std_msgs__msg__String * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_deserialize_std_msgs__msg__String(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__String * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_serialize_key_std_msgs__msg__String(
  const std_msgs__msg__String * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_key_std_msgs__msg__String(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_key_std_msgs__msg__String(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, String)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_serialize_std_msgs__msg__UInt8(
  const std_msgs__msg__UInt8 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_deserialize_std_msgs__msg__UInt8(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__UInt8 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_std_msgs__msg__UInt8(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_std_msgs__msg__UInt8(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
bool cdr_serialize_key_std_msgs__msg__UInt8(
  const std_msgs__msg__UInt8 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t get_serialized_size_key_std_msgs__msg__UInt8(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
size_t max_serialized_size_key_std_msgs__msg__UInt8(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_fsd_common_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8)();


using _YoloConeTrack__ros_msg_type = fsd_common_msgs__msg__YoloConeTrack;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
bool cdr_serialize_fsd_common_msgs__msg__YoloConeTrack(
  const fsd_common_msgs__msg__YoloConeTrack * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: x
  {
    cdr_serialize_std_msgs__msg__Float32(
      &ros_message->x, cdr);
  }

  // Field name: y
  {
    cdr_serialize_std_msgs__msg__Float32(
      &ros_message->y, cdr);
  }

  // Field name: width
  {
    cdr_serialize_std_msgs__msg__Float32(
      &ros_message->width, cdr);
  }

  // Field name: height
  {
    cdr_serialize_std_msgs__msg__Float32(
      &ros_message->height, cdr);
  }

  // Field name: color
  {
    cdr_serialize_std_msgs__msg__String(
      &ros_message->color, cdr);
  }

  // Field name: color_confidence
  {
    cdr_serialize_std_msgs__msg__Float32(
      &ros_message->color_confidence, cdr);
  }

  // Field name: position
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  // Field name: pose_confidence
  {
    cdr_serialize_std_msgs__msg__Float32(
      &ros_message->pose_confidence, cdr);
  }

  // Field name: tracking_id
  {
    cdr_serialize_std_msgs__msg__UInt8(
      &ros_message->tracking_id, cdr);
  }

  // Field name: tracking_state
  {
    cdr_serialize_std_msgs__msg__String(
      &ros_message->tracking_state, cdr);
  }

  // Field name: missing_frams
  {
    cdr_serialize_std_msgs__msg__UInt8(
      &ros_message->missing_frams, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
bool cdr_deserialize_fsd_common_msgs__msg__YoloConeTrack(
  eprosima::fastcdr::Cdr & cdr,
  fsd_common_msgs__msg__YoloConeTrack * ros_message)
{
  // Field name: x
  {
    cdr_deserialize_std_msgs__msg__Float32(cdr, &ros_message->x);
  }

  // Field name: y
  {
    cdr_deserialize_std_msgs__msg__Float32(cdr, &ros_message->y);
  }

  // Field name: width
  {
    cdr_deserialize_std_msgs__msg__Float32(cdr, &ros_message->width);
  }

  // Field name: height
  {
    cdr_deserialize_std_msgs__msg__Float32(cdr, &ros_message->height);
  }

  // Field name: color
  {
    cdr_deserialize_std_msgs__msg__String(cdr, &ros_message->color);
  }

  // Field name: color_confidence
  {
    cdr_deserialize_std_msgs__msg__Float32(cdr, &ros_message->color_confidence);
  }

  // Field name: position
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->position);
  }

  // Field name: pose_confidence
  {
    cdr_deserialize_std_msgs__msg__Float32(cdr, &ros_message->pose_confidence);
  }

  // Field name: tracking_id
  {
    cdr_deserialize_std_msgs__msg__UInt8(cdr, &ros_message->tracking_id);
  }

  // Field name: tracking_state
  {
    cdr_deserialize_std_msgs__msg__String(cdr, &ros_message->tracking_state);
  }

  // Field name: missing_frams
  {
    cdr_deserialize_std_msgs__msg__UInt8(cdr, &ros_message->missing_frams);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
size_t get_serialized_size_fsd_common_msgs__msg__YoloConeTrack(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _YoloConeTrack__ros_msg_type * ros_message = static_cast<const _YoloConeTrack__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: x
  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->x), current_alignment);

  // Field name: y
  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->y), current_alignment);

  // Field name: width
  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->width), current_alignment);

  // Field name: height
  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->height), current_alignment);

  // Field name: color
  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->color), current_alignment);

  // Field name: color_confidence
  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->color_confidence), current_alignment);

  // Field name: position
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  // Field name: pose_confidence
  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->pose_confidence), current_alignment);

  // Field name: tracking_id
  current_alignment += get_serialized_size_std_msgs__msg__UInt8(
    &(ros_message->tracking_id), current_alignment);

  // Field name: tracking_state
  current_alignment += get_serialized_size_std_msgs__msg__String(
    &(ros_message->tracking_state), current_alignment);

  // Field name: missing_frams
  current_alignment += get_serialized_size_std_msgs__msg__UInt8(
    &(ros_message->missing_frams), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
size_t max_serialized_size_fsd_common_msgs__msg__YoloConeTrack(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: x
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: y
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: width
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: height
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: color_confidence
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pose_confidence
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tracking_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__UInt8(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tracking_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: missing_frams
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__UInt8(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fsd_common_msgs__msg__YoloConeTrack;
    is_plain =
      (
      offsetof(DataType, missing_frams) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
bool cdr_serialize_key_fsd_common_msgs__msg__YoloConeTrack(
  const fsd_common_msgs__msg__YoloConeTrack * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: x
  {
    cdr_serialize_key_std_msgs__msg__Float32(
      &ros_message->x, cdr);
  }

  // Field name: y
  {
    cdr_serialize_key_std_msgs__msg__Float32(
      &ros_message->y, cdr);
  }

  // Field name: width
  {
    cdr_serialize_key_std_msgs__msg__Float32(
      &ros_message->width, cdr);
  }

  // Field name: height
  {
    cdr_serialize_key_std_msgs__msg__Float32(
      &ros_message->height, cdr);
  }

  // Field name: color
  {
    cdr_serialize_key_std_msgs__msg__String(
      &ros_message->color, cdr);
  }

  // Field name: color_confidence
  {
    cdr_serialize_key_std_msgs__msg__Float32(
      &ros_message->color_confidence, cdr);
  }

  // Field name: position
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->position, cdr);
  }

  // Field name: pose_confidence
  {
    cdr_serialize_key_std_msgs__msg__Float32(
      &ros_message->pose_confidence, cdr);
  }

  // Field name: tracking_id
  {
    cdr_serialize_key_std_msgs__msg__UInt8(
      &ros_message->tracking_id, cdr);
  }

  // Field name: tracking_state
  {
    cdr_serialize_key_std_msgs__msg__String(
      &ros_message->tracking_state, cdr);
  }

  // Field name: missing_frams
  {
    cdr_serialize_key_std_msgs__msg__UInt8(
      &ros_message->missing_frams, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
size_t get_serialized_size_key_fsd_common_msgs__msg__YoloConeTrack(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _YoloConeTrack__ros_msg_type * ros_message = static_cast<const _YoloConeTrack__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: x
  current_alignment += get_serialized_size_key_std_msgs__msg__Float32(
    &(ros_message->x), current_alignment);

  // Field name: y
  current_alignment += get_serialized_size_key_std_msgs__msg__Float32(
    &(ros_message->y), current_alignment);

  // Field name: width
  current_alignment += get_serialized_size_key_std_msgs__msg__Float32(
    &(ros_message->width), current_alignment);

  // Field name: height
  current_alignment += get_serialized_size_key_std_msgs__msg__Float32(
    &(ros_message->height), current_alignment);

  // Field name: color
  current_alignment += get_serialized_size_key_std_msgs__msg__String(
    &(ros_message->color), current_alignment);

  // Field name: color_confidence
  current_alignment += get_serialized_size_key_std_msgs__msg__Float32(
    &(ros_message->color_confidence), current_alignment);

  // Field name: position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->position), current_alignment);

  // Field name: pose_confidence
  current_alignment += get_serialized_size_key_std_msgs__msg__Float32(
    &(ros_message->pose_confidence), current_alignment);

  // Field name: tracking_id
  current_alignment += get_serialized_size_key_std_msgs__msg__UInt8(
    &(ros_message->tracking_id), current_alignment);

  // Field name: tracking_state
  current_alignment += get_serialized_size_key_std_msgs__msg__String(
    &(ros_message->tracking_state), current_alignment);

  // Field name: missing_frams
  current_alignment += get_serialized_size_key_std_msgs__msg__UInt8(
    &(ros_message->missing_frams), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fsd_common_msgs
size_t max_serialized_size_key_fsd_common_msgs__msg__YoloConeTrack(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: x
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: y
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: width
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: height
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: color
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: color_confidence
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: pose_confidence
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Float32(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tracking_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__UInt8(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tracking_state
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__String(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: missing_frams
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__UInt8(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fsd_common_msgs__msg__YoloConeTrack;
    is_plain =
      (
      offsetof(DataType, missing_frams) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _YoloConeTrack__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const fsd_common_msgs__msg__YoloConeTrack * ros_message = static_cast<const fsd_common_msgs__msg__YoloConeTrack *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_fsd_common_msgs__msg__YoloConeTrack(ros_message, cdr);
}

static bool _YoloConeTrack__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  fsd_common_msgs__msg__YoloConeTrack * ros_message = static_cast<fsd_common_msgs__msg__YoloConeTrack *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_fsd_common_msgs__msg__YoloConeTrack(cdr, ros_message);
}

static uint32_t _YoloConeTrack__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fsd_common_msgs__msg__YoloConeTrack(
      untyped_ros_message, 0));
}

static size_t _YoloConeTrack__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_fsd_common_msgs__msg__YoloConeTrack(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_YoloConeTrack = {
  "fsd_common_msgs::msg",
  "YoloConeTrack",
  _YoloConeTrack__cdr_serialize,
  _YoloConeTrack__cdr_deserialize,
  _YoloConeTrack__get_serialized_size,
  _YoloConeTrack__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _YoloConeTrack__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_YoloConeTrack,
  get_message_typesupport_handle_function,
  &fsd_common_msgs__msg__YoloConeTrack__get_type_hash,
  &fsd_common_msgs__msg__YoloConeTrack__get_type_description,
  &fsd_common_msgs__msg__YoloConeTrack__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fsd_common_msgs, msg, YoloConeTrack)() {
  return &_YoloConeTrack__type_support;
}

#if defined(__cplusplus)
}
#endif
