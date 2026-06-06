// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fsd_common_msgs:msg/AsState.idl
// generated code does not contain a copyright notice

#include "fsd_common_msgs/msg/detail/as_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
const rosidl_type_hash_t *
fsd_common_msgs__msg__AsState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0xdf, 0x84, 0x7b, 0xae, 0x07, 0x17, 0x59,
      0x90, 0xbc, 0x18, 0x8f, 0xf9, 0xf6, 0x37, 0xb4,
      0x07, 0xcd, 0xdf, 0x46, 0x9f, 0xb4, 0x21, 0x1d,
      0x2c, 0xb6, 0x27, 0xae, 0x2a, 0xe4, 0x35, 0xab,
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

static char fsd_common_msgs__msg__AsState__TYPE_NAME[] = "fsd_common_msgs/msg/AsState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char fsd_common_msgs__msg__AsState__FIELD_NAME__header[] = "header";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__mission[] = "mission";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__which_lap[] = "which_lap";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__end[] = "end";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__finished[] = "finished";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__camera_state[] = "camera_state";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__lidar_state[] = "lidar_state";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__ins_state[] = "ins_state";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__sensor_state[] = "sensor_state";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__ready[] = "ready";
static char fsd_common_msgs__msg__AsState__FIELD_NAME__count_time[] = "count_time";

static rosidl_runtime_c__type_description__Field fsd_common_msgs__msg__AsState__FIELDS[] = {
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__mission, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__which_lap, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__end, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__finished, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__camera_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__lidar_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__ins_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__sensor_state, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__ready, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsState__FIELD_NAME__count_time, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fsd_common_msgs__msg__AsState__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
fsd_common_msgs__msg__AsState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fsd_common_msgs__msg__AsState__TYPE_NAME, 27, 27},
      {fsd_common_msgs__msg__AsState__FIELDS, 11, 11},
    },
    {fsd_common_msgs__msg__AsState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Header\n"
  "std_msgs/Header header\n"
  "string mission  #\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\n"
  "uint8 which_lap#\\xe8\\xbf\\x9b\\xe8\\xa1\\x8c\\xe8\\xae\\xb0\\xe5\\x9c\\x88\\xef\\xbc\\x8c\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe5\\xbd\\x93\\xe5\\x89\\x8d\\xe7\\x9a\\x84\\xe5\\x9c\\x88\\xe6\\x95\\xb0\n"
  "uint8 end#\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe8\\xbe\\xbe\\xe5\\x88\\xb0\\xe6\\x8c\\x87\\xe5\\xae\\x9a\\xe5\\x81\\x9c\\xe8\\xbd\\xa6\\xe4\\xbd\\x8d\\xe7\\xbd\\xae\\xe3\\x80\\x820\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe6\\x9c\\xaa\\xe5\\x88\\xb0\\xe8\\xbe\\xbe\\xef\\xbc\\x8c1\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe5\\x88\\xb0\\xe8\\xbe\\xbe\\xe3\\x80\\x82\\xe9\\x9a\\x8f\\xe5\\x90\\x8e\\xe9\\x80\\x9f\\xe5\\xba\\xa6\\xe8\\xae\\xbe\\xe4\\xb8\\xba0\\xef\\xbc\\x8c\\xe5\\x90\\x8c\\xe6\\x97\\xb6\\xe5\\x88\\xb9\\xe8\\xbd\\xa6\n"
  "#uint8 stop#\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x81\\x9c\\xe8\\xbd\\xa6\\xe3\\x80\\x821\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe5\\x81\\x9c\\xe8\\xbd\\xa6\\xef\\xbc\\x8c\\xe9\\x9a\\x8f\\xe5\\x90\\x8e\\xe9\\x80\\x9a\\xe8\\xbf\\x87\\xe6\\xb0\\x94\\xe7\\x93\\xb6\\xe8\\xbf\\x9b\\xe8\\xa1\\x8c\\xe5\\x88\\xb6\\xe5\\x8a\\xa8\n"
  "uint8 finished#\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\xae\\x8c\\xe6\\x88\\x90\\xe3\\x80\\x820\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe6\\x9c\\xaa\\xe5\\xae\\x8c\\xe6\\x88\\x90\\xef\\xbc\\x8c1\\xe4\\xb8\\xba\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe5\\xae\\x8c\\xe6\\x88\\x90\n"
  "uint8 camera_state#\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x820\\xe4\\xb8\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xef\\xbc\\x8c1\\xe4\\xb8\\xba\\xe6\\x96\\xad\\xe7\\xba\\xbf\\xe6\\x88\\x96\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint8 lidar_state#\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe6\\xbf\\x80\\xe5\\x85\\x89\\xe9\\x9b\\xb7\\xe8\\xbe\\xbe\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x820\\xe4\\xb8\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xef\\xbc\\x8c1\\xe4\\xb8\\xba\\xe6\\x96\\xad\\xe7\\xba\\xbf\\xe6\\x88\\x96\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint8 ins_state#\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe7\\xbb\\x84\\xe5\\x90\\x88\\xe6\\x83\\xaf\\xe5\\xaf\\xbc\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xe3\\x80\\x820\\xe4\\xb8\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xef\\xbc\\x8c1\\xe4\\xb8\\xba\\xe6\\x96\\xad\\xe7\\xba\\xbf\\xe6\\x88\\x96\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\n"
  "uint8 sensor_state#\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe3\\x80\\x81\\xe6\\xbf\\x80\\xe5\\x85\\x89\\xe9\\x9b\\xb7\\xe8\\xbe\\xbe\\xe3\\x80\\x81\\xe7\\xbb\\x84\\xe5\\x90\\x88\\xe6\\x83\\xaf\\xe5\\xaf\\xbc\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x8c\\xe5\\x90\\x8c\\xe6\\x97\\xb6\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xe5\\x8d\\xb3\\xe4\\xb8\\xba0\\xef\\xbc\\x8c\\xe6\\x9c\\x89\\xe4\\xb8\\x80\\xe4\\xb8\\xaa\\xe4\\xbc\\xa0\\xe6\\x84\\x9f\\xe5\\x99\\xa8\\xe6\\x96\\xad\\xe7\\xba\\xbf\\xe5\\x8d\\xb3\\xe4\\xb8\\xba1\n"
  "uint8 ready#\\xe6\\x8c\\x87\\xe7\\xa4\\xba\\xe7\\x9b\\xae\\xe5\\x89\\x8d\\xe6\\x97\\xa0\\xe4\\xba\\xba\\xe7\\xb3\\xbb\\xe7\\xbb\\x9f\\xe6\\x98\\xaf\\xe5\\x90\\xa6\\xe5\\x87\\x86\\xe5\\xa4\\x87\\xe5\\xa5\\xbd\\xef\\xbc\\x8c\\xe5\\x8d\\xb3\\xe8\\x83\\xbd\\xe5\\x90\\xa6\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xe6\\x8e\\xa5\\xe5\\x8f\\x97\\xe5\\xb9\\xb6\\xe5\\xa4\\x84\\xe7\\x90\\x86\\xe6\\x89\\x80\\xe6\\x9c\\x89\\xe4\\xbc\\xa0\\xe6\\x84\\x9f\\xe5\\x99\\xa8\\xe7\\x9a\\x84\\xe6\\x95\\xb0\\xe6\\x8d\\xae\\xef\\xbc\\x8c\\xe5\\xb9\\xb6\\xe6\\xad\\xa3\\xe7\\xa1\\xae\\xe8\\xbe\\x93\\xe5\\x87\\xba\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe6\\x8c\\x87\\xe4\\xbb\\xa4\\xe3\\x80\\x820\\xe4\\xbb\\xa3\\xe8\\xa1\\xa8\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\n"
  "float32 count_time #\\xe6\\x8e\\xa5\\xe6\\x94\\xb6\\xe5\\x88\\xb0go\\xe4\\xbf\\xa1\\xe5\\x8f\\xb7\\xe5\\x90\\x8e\\xe5\\xbc\\x80\\xe5\\xa7\\x8b\\xe8\\xae\\xa1\\xe6\\x97\\xb6";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fsd_common_msgs__msg__AsState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fsd_common_msgs__msg__AsState__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 471, 471},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fsd_common_msgs__msg__AsState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fsd_common_msgs__msg__AsState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
