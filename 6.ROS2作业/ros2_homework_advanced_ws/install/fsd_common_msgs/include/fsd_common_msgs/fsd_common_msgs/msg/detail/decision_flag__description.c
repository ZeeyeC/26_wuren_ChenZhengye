// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fsd_common_msgs:msg/DecisionFlag.idl
// generated code does not contain a copyright notice

#include "fsd_common_msgs/msg/detail/decision_flag__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
const rosidl_type_hash_t *
fsd_common_msgs__msg__DecisionFlag__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x96, 0x3e, 0xd9, 0xc9, 0xc7, 0x6a, 0x19,
      0x46, 0x68, 0x90, 0xf8, 0x84, 0x27, 0x6b, 0x0a,
      0x97, 0x1c, 0xc9, 0x06, 0x10, 0x0a, 0x94, 0x0c,
      0xae, 0xb2, 0xd1, 0xc6, 0x57, 0x2e, 0xa1, 0xff,
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

static char fsd_common_msgs__msg__DecisionFlag__TYPE_NAME[] = "fsd_common_msgs/msg/DecisionFlag";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char fsd_common_msgs__msg__DecisionFlag__FIELD_NAME__header[] = "header";
static char fsd_common_msgs__msg__DecisionFlag__FIELD_NAME__lap1_state[] = "lap1_state";
static char fsd_common_msgs__msg__DecisionFlag__FIELD_NAME__lap2_state[] = "lap2_state";
static char fsd_common_msgs__msg__DecisionFlag__FIELD_NAME__map_state[] = "map_state";

static rosidl_runtime_c__type_description__Field fsd_common_msgs__msg__DecisionFlag__FIELDS[] = {
  {
    {fsd_common_msgs__msg__DecisionFlag__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DecisionFlag__FIELD_NAME__lap1_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DecisionFlag__FIELD_NAME__lap2_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__DecisionFlag__FIELD_NAME__map_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fsd_common_msgs__msg__DecisionFlag__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
fsd_common_msgs__msg__DecisionFlag__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fsd_common_msgs__msg__DecisionFlag__TYPE_NAME, 32, 32},
      {fsd_common_msgs__msg__DecisionFlag__FIELDS, 4, 4},
    },
    {fsd_common_msgs__msg__DecisionFlag__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "#############\\xe8\\xaf\\xa5msg\\xe7\\x94\\xa8\\xe4\\xba\\x8e\\xe7\\xb4\\xa7\\xe6\\x80\\xa5\\xe5\\x88\\x87\\xe6\\x8d\\xa2\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe7\\xad\\x96\\xe7\\x95\\xa5\\xe7\\x9b\\xae\\xe5\\x89\\x8d\\xe4\\xbb\\x85\\xe4\\xbd\\x9c\\xe8\\xae\\xbe\\xe6\\x83\\xb3\\xef\\xbc\\x8c\\xe6\\x9c\\xaa\\xe5\\xae\\x9e\\xe8\\xa3\\x85#################\n"
  "uint8 lap1_state #0\\xe4\\xb8\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xef\\xbc\\x8c1\\xe4\\xb8\\xba\\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe6\\xa8\\xa1\\xe5\\x9d\\x97\\xe5\\xbc\\x82\\xe5\\xb8\\xb8--->\\xe8\\xa7\\xa6\\xe5\\x8f\\x91EBS\n"
  "uint8 lap2_state #0\\xe4\\xb8\\xba\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xef\\xbc\\x8c1\\xe4\\xb8\\xba\\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe6\\xa8\\xa1\\xe5\\x9d\\x97\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\\xe3\\x80\\x81SLAM\\xe6\\xad\\xa3\\xe5\\xb8\\xb8--->\\xe8\\xb7\\x9f\\xe8\\xb8\\xaa\\xe9\\xa6\\x96\\xe5\\x9c\\x88\\xe8\\xbd\\xa8\\xe8\\xbf\\xb9/Ribbon\n"
  "                #        2\\xe4\\xb8\\xba\\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe6\\xa8\\xa1\\xe5\\x9d\\x97\\xe5\\xbc\\x82\\xe5\\xb8\\xb8\\xe3\\x80\\x81SLAM\\xe5\\xbc\\x82\\xe5\\xb8\\xb8(\\xe7\\xbb\\x99\\xe4\\xb8\\x8d\\xe5\\x87\\xba\\xe5\\x9b\\xbe\\xe6\\x88\\x96\\xe8\\x80\\x85\\xe7\\xbb\\x99\\xe7\\x9a\\x84\\xe5\\x9b\\xbe\\xe4\\xb8\\x8d\\xe5\\xa5\\xbd)--->\\xe8\\xa7\\xa6\\xe5\\x8f\\x91EBS\n"
  "                #        3\\xe4\\xb8\\xba\\xe8\\xa7\\x84\\xe5\\x88\\x92\\xe6\\xa8\\xa1\\xe5\\x9d\\x97\\xe6\\xad\\xa3\\xe5\\xb8\\xb8\\xe3\\x80\\x81SLAM\\xe6\\xad\\xa3\\xe5\\xb8\\xb8--->\\xe4\\xbd\\x86\\xe9\\x80\\x89\\xe7\\x94\\xa8Ribbon\n"
  "\n"
  "uint8 map_state  #0\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe7\\xac\\xac\\xe4\\xba\\x8c\\xe5\\x9c\\x88\\xe6\\xa0\\xb9\\xe6\\x8d\\xaelap2_state\\xe9\\x80\\x89\\xe6\\x8b\\xa9\\xe6\\x8e\\xa7\\xe5\\x88\\xb6\\xe7\\xad\\x96\\xe7\\x95\\xa5\\xef\\xbc\\x8c1\\xe8\\xa1\\xa8\\xe7\\xa4\\xba\\xe4\\xb8\\x80\\xe7\\x9b\\xb4\\xe7\\x94\\xa8\\xe5\\xb1\\x80\\xe9\\x83\\xa8\\xef\\xbc\\x8c\\xe6\\xad\\xa4flag\\xe4\\xbc\\x98\\xe5\\x85\\x88\\xe7\\xba\\xa7\\xe5\\xba\\x94\\xe9\\xab\\x98\\xe4\\xba\\x8elap2_state  ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fsd_common_msgs__msg__DecisionFlag__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fsd_common_msgs__msg__DecisionFlag__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 370, 370},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fsd_common_msgs__msg__DecisionFlag__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fsd_common_msgs__msg__DecisionFlag__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
