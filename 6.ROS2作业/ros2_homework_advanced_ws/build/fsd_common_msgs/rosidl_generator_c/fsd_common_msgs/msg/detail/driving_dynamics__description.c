// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fsd_common_msgs:msg/DrivingDynamics.idl
// generated code does not contain a copyright notice

#include "fsd_common_msgs/msg/detail/driving_dynamics__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
const rosidl_type_hash_t *
fsd_common_msgs__msg__DrivingDynamics__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0x19, 0x29, 0xa0, 0xab, 0xae, 0xe3, 0x23,
      0x7b, 0xe4, 0x01, 0x75, 0x8a, 0x7f, 0x5f, 0xf3,
      0x71, 0xa0, 0xaf, 0xd9, 0x38, 0x0b, 0x71, 0xad,
      0xe1, 0x2f, 0x43, 0x31, 0x0a, 0x1a, 0xf9, 0x9b,
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

static char fsd_common_msgs__msg__DrivingDynamics__TYPE_NAME[] = "fsd_common_msgs/msg/DrivingDynamics";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__header[] = "header";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__speed_target[] = "speed_target";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__speed_actual[] = "speed_actual";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__steering_angle_target[] = "steering_angle_target";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__steering_angle_actual[] = "steering_angle_actual";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__brake_hydr_target[] = "brake_hydr_target";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__brake_hydr_actual[] = "brake_hydr_actual";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__motor_moment_target[] = "motor_moment_target";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__motor_moment_actual[] = "motor_moment_actual";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__acceleration_longitudinal[] = "acceleration_longitudinal";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__acceleration_lateral[] = "acceleration_lateral";
static char fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__yaw_rate[] = "yaw_rate";

static rosidl_runtime_c__type_description__Field fsd_common_msgs__msg__DrivingDynamics__FIELDS[] = {
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__speed_target, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__speed_actual, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__steering_angle_target, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__steering_angle_actual, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__brake_hydr_target, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__brake_hydr_actual, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__motor_moment_target, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__motor_moment_actual, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__acceleration_longitudinal, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__acceleration_lateral, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DrivingDynamics__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fsd_common_msgs__msg__DrivingDynamics__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
fsd_common_msgs__msg__DrivingDynamics__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fsd_common_msgs__msg__DrivingDynamics__TYPE_NAME, 35, 35},
      {fsd_common_msgs__msg__DrivingDynamics__FIELDS, 12, 12},
    },
    {fsd_common_msgs__msg__DrivingDynamics__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "std_msgs/Header header\n"
  "\n"
  "#\\xe6\\xad\\xa4msg\\xe7\\x94\\xa8\\xe6\\x9d\\xa5\\xe5\\x8f\\x91\\xe9\\x80\\x81\\xe7\\x89\\xb9\\xe5\\xae\\x9a\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xe7\\xbb\\x99CAN_send\\xe8\\x8a\\x82\\xe7\\x82\\xb9\\xef\\xbc\\x8c\\xe5\\x86\\x8d\\xe5\\x8f\\x91\\xe5\\x88\\xb0canB\\xe6\\x80\\xbb\\xe7\\xba\\xbf\n"
  "float32 speed_target\n"
  "float32 speed_actual\n"
  "float32 steering_angle_target\n"
  "float32 steering_angle_actual\n"
  "float32 brake_hydr_target\n"
  "float32 brake_hydr_actual\n"
  "float32 motor_moment_target\n"
  "float32 motor_moment_actual\n"
  "\n"
  "float32 acceleration_longitudinal\n"
  "float32 acceleration_lateral\n"
  "float32 yaw_rate";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fsd_common_msgs__msg__DrivingDynamics__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fsd_common_msgs__msg__DrivingDynamics__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 349, 349},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fsd_common_msgs__msg__DrivingDynamics__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fsd_common_msgs__msg__DrivingDynamics__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
