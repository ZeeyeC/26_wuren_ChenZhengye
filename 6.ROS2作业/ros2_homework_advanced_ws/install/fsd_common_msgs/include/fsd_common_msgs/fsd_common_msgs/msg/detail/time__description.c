// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fsd_common_msgs:msg/Time.idl
// generated code does not contain a copyright notice

#include "fsd_common_msgs/msg/detail/time__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
const rosidl_type_hash_t *
fsd_common_msgs__msg__Time__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x67, 0x54, 0x55, 0x44, 0x51, 0x5f, 0xda,
      0xb7, 0x32, 0xe1, 0x95, 0x8a, 0x9c, 0x8b, 0x28,
      0xa1, 0x32, 0xd4, 0x7f, 0x8c, 0xdc, 0x77, 0x9c,
      0x3a, 0x67, 0x4f, 0xfd, 0x13, 0x21, 0x80, 0x30,
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

static char fsd_common_msgs__msg__Time__TYPE_NAME[] = "fsd_common_msgs/msg/Time";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char fsd_common_msgs__msg__Time__FIELD_NAME__header[] = "header";
static char fsd_common_msgs__msg__Time__FIELD_NAME__frame_id_num[] = "frame_id_num";
static char fsd_common_msgs__msg__Time__FIELD_NAME__sum_compute_time[] = "sum_compute_time";
static char fsd_common_msgs__msg__Time__FIELD_NAME__control_compute_time[] = "control_compute_time";
static char fsd_common_msgs__msg__Time__FIELD_NAME__boundary_detector_compute_time[] = "boundary_detector_compute_time";
static char fsd_common_msgs__msg__Time__FIELD_NAME__line_detector_compute_time[] = "line_detector_compute_time";
static char fsd_common_msgs__msg__Time__FIELD_NAME__skidpad_detector_compute_time[] = "skidpad_detector_compute_time";
static char fsd_common_msgs__msg__Time__FIELD_NAME__lidar_detection_compute_time[] = "lidar_detection_compute_time";
static char fsd_common_msgs__msg__Time__FIELD_NAME__camera_detection_compute_time[] = "camera_detection_compute_time";
static char fsd_common_msgs__msg__Time__FIELD_NAME__fusion_detection_compute_time[] = "fusion_detection_compute_time";
static char fsd_common_msgs__msg__Time__FIELD_NAME__time2[] = "time2";
static char fsd_common_msgs__msg__Time__FIELD_NAME__time3[] = "time3";
static char fsd_common_msgs__msg__Time__FIELD_NAME__time4[] = "time4";
static char fsd_common_msgs__msg__Time__FIELD_NAME__time5[] = "time5";
static char fsd_common_msgs__msg__Time__FIELD_NAME__time6[] = "time6";
static char fsd_common_msgs__msg__Time__FIELD_NAME__time7[] = "time7";
static char fsd_common_msgs__msg__Time__FIELD_NAME__time8[] = "time8";
static char fsd_common_msgs__msg__Time__FIELD_NAME__time9[] = "time9";

static rosidl_runtime_c__type_description__Field fsd_common_msgs__msg__Time__FIELDS[] = {
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__frame_id_num, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__sum_compute_time, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__control_compute_time, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__boundary_detector_compute_time, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__line_detector_compute_time, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__skidpad_detector_compute_time, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__lidar_detection_compute_time, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__camera_detection_compute_time, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__fusion_detection_compute_time, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__time2, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__time3, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__time4, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__time5, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__time6, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__time7, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__time8, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__Time__FIELD_NAME__time9, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fsd_common_msgs__msg__Time__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
fsd_common_msgs__msg__Time__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fsd_common_msgs__msg__Time__TYPE_NAME, 24, 24},
      {fsd_common_msgs__msg__Time__FIELDS, 18, 18},
    },
    {fsd_common_msgs__msg__Time__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# message of Asensing perception result.It is INS data. \n"
  "std_msgs/Header header         # standard ROS message header\n"
  "uint64 frame_id_num  \n"
  "float32 sum_compute_time\n"
  "float32 control_compute_time\n"
  "float32 boundary_detector_compute_time\n"
  "float32 line_detector_compute_time\n"
  "float32 skidpad_detector_compute_time\n"
  "float32 lidar_detection_compute_time\n"
  "float32 camera_detection_compute_time\n"
  "float32 fusion_detection_compute_time\n"
  "float32 time2\n"
  "float32 time3\n"
  "float32 time4\n"
  "float32 time5\n"
  "float32 time6\n"
  "float32 time7\n"
  "float32 time8\n"
  "float32 time9";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fsd_common_msgs__msg__Time__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fsd_common_msgs__msg__Time__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 531, 531},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fsd_common_msgs__msg__Time__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fsd_common_msgs__msg__Time__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
