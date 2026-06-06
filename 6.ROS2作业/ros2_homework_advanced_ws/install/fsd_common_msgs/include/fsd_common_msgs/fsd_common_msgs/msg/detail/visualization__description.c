// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fsd_common_msgs:msg/Visualization.idl
// generated code does not contain a copyright notice

#include "fsd_common_msgs/msg/detail/visualization__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
const rosidl_type_hash_t *
fsd_common_msgs__msg__Visualization__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xea, 0x63, 0x52, 0xd1, 0x55, 0x81, 0x8d, 0xcb,
      0x26, 0xeb, 0xa6, 0x33, 0xde, 0x36, 0xc5, 0x89,
      0x9d, 0x9d, 0x1e, 0x46, 0xfb, 0x99, 0xdf, 0xb4,
      0xa7, 0xe7, 0xee, 0xc6, 0xe9, 0x70, 0x21, 0x8e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char fsd_common_msgs__msg__Visualization__TYPE_NAME[] = "fsd_common_msgs/msg/Visualization";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__header[] = "header";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__frame_id_num[] = "frame_id_num";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__lat_error_front_axis[] = "lat_error_front_axis";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__lat_error_cog[] = "lat_error_cog";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__lat_error_rear_axis[] = "lat_error_rear_axis";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_error_front_axis[] = "yaw_error_front_axis";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_error_cog[] = "yaw_error_cog";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_error_rear_axis[] = "yaw_error_rear_axis";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_rate_error[] = "yaw_rate_error";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__steering_error[] = "steering_error";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__vx_error[] = "vx_error";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__vy_error[] = "vy_error";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__sideslip_error[] = "sideslip_error";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__motor_torq_error_lr[] = "motor_torq_error_lr";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__motor_torq_error_rr[] = "motor_torq_error_rr";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__motor_speed_error_lr[] = "motor_speed_error_lr";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__motor_speed_error_rr[] = "motor_speed_error_rr";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__error1[] = "error1";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__error2[] = "error2";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__error3[] = "error3";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__error4[] = "error4";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_ref[] = "yaw_ref";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_ref_front_axis[] = "yaw_ref_front_axis";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_ref_cog[] = "yaw_ref_cog";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_ref_rear_axis[] = "yaw_ref_rear_axis";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__curvature_ref[] = "curvature_ref";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__curvature_ref_front_axis[] = "curvature_ref_front_axis";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__curvature_ref_cog[] = "curvature_ref_cog";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__curvature_ref_rear_axis[] = "curvature_ref_rear_axis";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__vx_ref[] = "vx_ref";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__vy_ref[] = "vy_ref";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__ax_ref[] = "ax_ref";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__ay_ref[] = "ay_ref";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__ref1[] = "ref1";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__ref2[] = "ref2";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__ref3[] = "ref3";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__ref4[] = "ref4";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__steering_without_compensation[] = "steering_without_compensation";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__steering_feedback[] = "steering_feedback";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__steering_feedforward[] = "steering_feedforward";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__lookforward_length[] = "lookforward_length";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_rate_pre[] = "yaw_rate_pre";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__turning_radius[] = "turning_radius";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__adhesion_coefficient_pre[] = "adhesion_coefficient_pre";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__sideslip_pre[] = "sideslip_pre";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__slip_angle_pre_fl[] = "slip_angle_pre_fl";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__slip_angle_pre_fr[] = "slip_angle_pre_fr";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__slip_angle_pre_rl[] = "slip_angle_pre_rl";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__slip_angle_pre_rr[] = "slip_angle_pre_rr";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__norm_force_pre_fl[] = "norm_force_pre_fl";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__norm_force_pre_fr[] = "norm_force_pre_fr";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__norm_force_pre_rl[] = "norm_force_pre_rl";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__norm_force_pre_rr[] = "norm_force_pre_rr";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__algorithm1[] = "algorithm1";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__algorithm2[] = "algorithm2";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__algorithm3[] = "algorithm3";
static char fsd_common_msgs__msg__Visualization__FIELD_NAME__algorithm4[] = "algorithm4";

static rosidl_runtime_c__type_description__Field fsd_common_msgs__msg__Visualization__FIELDS[] = {
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__frame_id_num, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__lat_error_front_axis, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__lat_error_cog, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__lat_error_rear_axis, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_error_front_axis, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_error_cog, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_error_rear_axis, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_rate_error, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__steering_error, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__vx_error, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__vy_error, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__sideslip_error, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__motor_torq_error_lr, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__motor_torq_error_rr, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__motor_speed_error_lr, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__motor_speed_error_rr, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__error1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__error2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__error3, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__error4, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_ref, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_ref_front_axis, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_ref_cog, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_ref_rear_axis, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__curvature_ref, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__curvature_ref_front_axis, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__curvature_ref_cog, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__curvature_ref_rear_axis, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__vx_ref, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__vy_ref, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__ax_ref, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__ay_ref, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__ref1, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__ref2, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__ref3, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__ref4, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__steering_without_compensation, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__steering_feedback, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__steering_feedforward, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__lookforward_length, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__yaw_rate_pre, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__turning_radius, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__adhesion_coefficient_pre, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__sideslip_pre, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__slip_angle_pre_fl, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__slip_angle_pre_fr, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__slip_angle_pre_rl, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__slip_angle_pre_rr, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__norm_force_pre_fl, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__norm_force_pre_fr, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__norm_force_pre_rl, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__norm_force_pre_rr, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__algorithm1, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__algorithm2, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__algorithm3, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Visualization__FIELD_NAME__algorithm4, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fsd_common_msgs__msg__Visualization__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fsd_common_msgs__msg__Visualization__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fsd_common_msgs__msg__Visualization__TYPE_NAME, 33, 33},
      {fsd_common_msgs__msg__Visualization__FIELDS, 57, 57},
    },
    {fsd_common_msgs__msg__Visualization__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# visualization data \n"
  "std_msgs/Header header         # standard ROS message header\n"
  "uint64 frame_id_num \n"
  "\n"
  "#error data \n"
  "float32 lat_error_front_axis\n"
  "float32 lat_error_cog\n"
  "float32 lat_error_rear_axis\n"
  "float32 yaw_error_front_axis\n"
  "float32 yaw_error_cog\n"
  "float32 yaw_error_rear_axis\n"
  "float32 yaw_rate_error\n"
  "float32 steering_error\n"
  "float32 vx_error\n"
  "float32 vy_error\n"
  "float32 sideslip_error\n"
  "float32 motor_torq_error_lr\n"
  "float32 motor_torq_error_rr\n"
  "float32 motor_speed_error_lr\n"
  "float32 motor_speed_error_rr\n"
  "float32 error1\n"
  "float32 error2\n"
  "float32 error3\n"
  "float32 error4\n"
  "\n"
  "#ref visualization\n"
  "float32 yaw_ref\n"
  "float32 yaw_ref_front_axis\n"
  "float32 yaw_ref_cog\n"
  "float32 yaw_ref_rear_axis\n"
  "float32 curvature_ref\n"
  "float32 curvature_ref_front_axis\n"
  "float32 curvature_ref_cog\n"
  "float32 curvature_ref_rear_axis\n"
  "float32 vx_ref\n"
  "float32 vy_ref\n"
  "float32 ax_ref\n"
  "float32 ay_ref\n"
  "float32 ref1\n"
  "float32 ref2\n"
  "float32 ref3\n"
  "float32 ref4\n"
  "\n"
  "#algorithm data visualization\n"
  "float32 steering_without_compensation\n"
  "float32 steering_feedback\n"
  "float32 steering_feedforward\n"
  "float32 lookforward_length\n"
  "float32 yaw_rate_pre\n"
  "float32 turning_radius\n"
  "float32 adhesion_coefficient_pre\n"
  "float32 sideslip_pre\n"
  "float32 slip_angle_pre_fl\n"
  "float32 slip_angle_pre_fr\n"
  "float32 slip_angle_pre_rl\n"
  "float32 slip_angle_pre_rr\n"
  "float32 norm_force_pre_fl\n"
  "float32 norm_force_pre_fr\n"
  "float32 norm_force_pre_rl\n"
  "float32 norm_force_pre_rr\n"
  "float32 algorithm1\n"
  "float32 algorithm2\n"
  "float32 algorithm3\n"
  "float32 algorithm4";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fsd_common_msgs__msg__Visualization__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fsd_common_msgs__msg__Visualization__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1420, 1420},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fsd_common_msgs__msg__Visualization__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fsd_common_msgs__msg__Visualization__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
