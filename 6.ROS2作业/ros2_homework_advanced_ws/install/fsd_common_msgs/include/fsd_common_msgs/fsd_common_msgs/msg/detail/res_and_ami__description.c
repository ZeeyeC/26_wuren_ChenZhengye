// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fsd_common_msgs:msg/ResAndAmi.idl
// generated code does not contain a copyright notice

#include "fsd_common_msgs/msg/detail/res_and_ami__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
const rosidl_type_hash_t *
fsd_common_msgs__msg__ResAndAmi__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x1f, 0x96, 0x76, 0x10, 0x57, 0xec, 0x27,
      0x10, 0xff, 0x5c, 0xdc, 0x9d, 0x82, 0xaa, 0x5f,
      0x81, 0xbb, 0xc5, 0xa3, 0x84, 0x8c, 0x04, 0x7c,
      0xbe, 0x13, 0x43, 0x1d, 0x73, 0x6e, 0xe0, 0xd7,
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

static char fsd_common_msgs__msg__ResAndAmi__TYPE_NAME[] = "fsd_common_msgs/msg/ResAndAmi";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char fsd_common_msgs__msg__ResAndAmi__FIELD_NAME__header[] = "header";
static char fsd_common_msgs__msg__ResAndAmi__FIELD_NAME__res_state[] = "res_state";
static char fsd_common_msgs__msg__ResAndAmi__FIELD_NAME__mission[] = "mission";

static rosidl_runtime_c__type_description__Field fsd_common_msgs__msg__ResAndAmi__FIELDS[] = {
  {
    {fsd_common_msgs__msg__ResAndAmi__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__ResAndAmi__FIELD_NAME__res_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__ResAndAmi__FIELD_NAME__mission, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fsd_common_msgs__msg__ResAndAmi__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
fsd_common_msgs__msg__ResAndAmi__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fsd_common_msgs__msg__ResAndAmi__TYPE_NAME, 29, 29},
      {fsd_common_msgs__msg__ResAndAmi__FIELDS, 3, 3},
    },
    {fsd_common_msgs__msg__ResAndAmi__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "uint8 res_state #\\xe6\\x8c\\x87\\xe7\\xa4\\xbares\\xe7\\x8a\\xb6\\xe6\\x80\\x81\\xef\\xbc\\x8c1\\xe4\\xbb\\xa3\\xe8\\xa1\\xa8\\xe2\\x80\\x9cgo\\xe2\\x80\\x9d\\xe4\\xbf\\xa1\\xe5\\x8f\\xb7\n"
  "string mission          #\\xe6\\x8c\\x87\\xe7\\xa4\\xbaAMI\\xe9\\x80\\x89\\xe6\\x8b\\xa9\\xe7\\x9a\\x84\\xe6\\x97\\xa0\\xe4\\xba\\xba\\xe9\\xa9\\xbe\\xe9\\xa9\\xb6\\xe4\\xbb\\xbb\\xe5\\x8a\\xa1\\xe3\\x80\\x820.inspection;1.ebs_test;2.acceleration;3.skidpad;4.trackdrive";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fsd_common_msgs__msg__ResAndAmi__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fsd_common_msgs__msg__ResAndAmi__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 169, 169},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fsd_common_msgs__msg__ResAndAmi__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fsd_common_msgs__msg__ResAndAmi__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
