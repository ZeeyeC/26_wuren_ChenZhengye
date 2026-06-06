// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fsd_common_msgs:msg/YoloConeTrack.idl
// generated code does not contain a copyright notice

#include "fsd_common_msgs/msg/detail/yolo_cone_track__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
const rosidl_type_hash_t *
fsd_common_msgs__msg__YoloConeTrack__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xa9, 0x5e, 0x11, 0x1e, 0xb8, 0xfa, 0xcb,
      0x3c, 0xb0, 0x49, 0x6d, 0x86, 0xa6, 0xf8, 0x7f,
      0x81, 0x04, 0x52, 0x53, 0x5b, 0x4e, 0x71, 0xa7,
      0x03, 0xfa, 0x80, 0x30, 0x87, 0x24, 0x06, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/string__functions.h"
#include "std_msgs/msg/detail/float32__functions.h"
#include "std_msgs/msg/detail/u_int8__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t std_msgs__msg__Float32__EXPECTED_HASH = {1, {
    0x71, 0x70, 0xd3, 0xd8, 0xf8, 0x41, 0xf7, 0xbe,
    0x31, 0x72, 0xce, 0x5f, 0x4f, 0x59, 0xf3, 0xa4,
    0xd7, 0xf6, 0x3b, 0x04, 0x47, 0xe8, 0xb3, 0x33,
    0x27, 0x60, 0x1a, 0xd6, 0x4d, 0x83, 0xd6, 0xe2,
  }};
static const rosidl_type_hash_t std_msgs__msg__String__EXPECTED_HASH = {1, {
    0xdf, 0x66, 0x8c, 0x74, 0x04, 0x82, 0xbb, 0xd4,
    0x8f, 0xb3, 0x9d, 0x76, 0xa7, 0x0d, 0xfd, 0x4b,
    0xd5, 0x9d, 0xb1, 0x28, 0x80, 0x21, 0x74, 0x35,
    0x03, 0x25, 0x9e, 0x94, 0x8f, 0x6b, 0x1a, 0x18,
  }};
static const rosidl_type_hash_t std_msgs__msg__UInt8__EXPECTED_HASH = {1, {
    0x61, 0x38, 0xbd, 0x83, 0xd8, 0xc3, 0x56, 0x9c,
    0xb8, 0x0a, 0x66, 0x7d, 0xb0, 0x3c, 0xfc, 0x16,
    0x29, 0xf5, 0x29, 0xfe, 0xe7, 0x9d, 0x94, 0x4c,
    0x39, 0xc3, 0x4e, 0x35, 0x2e, 0x72, 0xf0, 0x10,
  }};
#endif

static char fsd_common_msgs__msg__YoloConeTrack__TYPE_NAME[] = "fsd_common_msgs/msg/YoloConeTrack";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char std_msgs__msg__Float32__TYPE_NAME[] = "std_msgs/msg/Float32";
static char std_msgs__msg__String__TYPE_NAME[] = "std_msgs/msg/String";
static char std_msgs__msg__UInt8__TYPE_NAME[] = "std_msgs/msg/UInt8";

// Define type names, field names, and default values
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__x[] = "x";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__y[] = "y";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__width[] = "width";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__height[] = "height";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__color[] = "color";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__color_confidence[] = "color_confidence";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__position[] = "position";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__pose_confidence[] = "pose_confidence";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__tracking_id[] = "tracking_id";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__tracking_state[] = "tracking_state";
static char fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__missing_frams[] = "missing_frams";

static rosidl_runtime_c__type_description__Field fsd_common_msgs__msg__YoloConeTrack__FIELDS[] = {
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__width, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__height, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__String__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__color_confidence, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__pose_confidence, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__tracking_id, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__UInt8__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__tracking_state, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__String__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__YoloConeTrack__FIELD_NAME__missing_frams, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__UInt8__TYPE_NAME, 18, 18},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fsd_common_msgs__msg__YoloConeTrack__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__UInt8__TYPE_NAME, 18, 18},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fsd_common_msgs__msg__YoloConeTrack__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fsd_common_msgs__msg__YoloConeTrack__TYPE_NAME, 33, 33},
      {fsd_common_msgs__msg__YoloConeTrack__FIELDS, 11, 11},
    },
    {fsd_common_msgs__msg__YoloConeTrack__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Float32__EXPECTED_HASH, std_msgs__msg__Float32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Float32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__UInt8__EXPECTED_HASH, std_msgs__msg__UInt8__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = std_msgs__msg__UInt8__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Float32 x                  # center x\n"
  "std_msgs/Float32 y                  # center y\n"
  "std_msgs/Float32 width              # width\n"
  "std_msgs/Float32 height             # height\n"
  "\n"
  "std_msgs/String color                 # color of cone, 'r' = red, 'b' = blue, 'y' = yellow\n"
  "std_msgs/Float32 color_confidence         # confidence of cone detect\n"
  "\n"
  "geometry_msgs/Point position # 3d position with (x,y,z)\n"
  "std_msgs/Float32 pose_confidence\n"
  "\n"
  "std_msgs/UInt8 tracking_id\n"
  "std_msgs/String tracking_state # OFF, OK, SEARCHING, TERMINATE\n"
  "std_msgs/UInt8 missing_frams";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fsd_common_msgs__msg__YoloConeTrack__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fsd_common_msgs__msg__YoloConeTrack__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 555, 555},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fsd_common_msgs__msg__YoloConeTrack__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fsd_common_msgs__msg__YoloConeTrack__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Float32__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    sources[4] = *std_msgs__msg__UInt8__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
