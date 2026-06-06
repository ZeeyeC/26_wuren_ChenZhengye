// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fsd_common_msgs:msg/AsensingMessage.idl
// generated code does not contain a copyright notice

#include "fsd_common_msgs/msg/detail/asensing_message__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fsd_common_msgs
const rosidl_type_hash_t *
fsd_common_msgs__msg__AsensingMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x52, 0xd2, 0x5a, 0x31, 0x9a, 0xcc, 0xac,
      0x54, 0x1d, 0xa1, 0xdf, 0x89, 0x0e, 0x44, 0x5d,
      0x0b, 0x89, 0xb7, 0x74, 0xcc, 0x55, 0x51, 0xe2,
      0xd5, 0x61, 0x99, 0x0f, 0x0f, 0x72, 0x38, 0x6c,
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

static char fsd_common_msgs__msg__AsensingMessage__TYPE_NAME[] = "fsd_common_msgs/msg/AsensingMessage";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__header[] = "header";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__frame_id_num[] = "frame_id_num";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__lat[] = "lat";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__lon[] = "lon";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__h[] = "h";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__vn[] = "vn";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__ve[] = "ve";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__vh[] = "vh";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__roll[] = "roll";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__pitch[] = "pitch";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__heading_angle[] = "heading_angle";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gyro_x[] = "gyro_x";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gyro_y[] = "gyro_y";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gyro_z[] = "gyro_z";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__acc_x[] = "acc_x";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__acc_y[] = "acc_y";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__acc_z[] = "acc_z";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__std_lat[] = "std_lat";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__std_lon[] = "std_lon";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__std_local_height[] = "std_local_height";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__north_velocity_std[] = "north_velocity_std";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__east_velocity_std[] = "east_velocity_std";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__ground_velocity_std[] = "ground_velocity_std";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__roll_std[] = "roll_std";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__pitch_std[] = "pitch_std";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__std_heading[] = "std_heading";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__status[] = "status";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gps_flag_pos[] = "gps_flag_pos";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gps_week_number[] = "gps_week_number";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__ull_timestamp[] = "ull_timestamp";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__temperature[] = "temperature";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__car_status[] = "car_status";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gps_flag_heading[] = "gps_flag_heading";
static char fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__num_sv[] = "num_sv";

static rosidl_runtime_c__type_description__Field fsd_common_msgs__msg__AsensingMessage__FIELDS[] = {
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__frame_id_num, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__h, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__vn, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__ve, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__vh, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__heading_angle, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gyro_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gyro_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gyro_z, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__acc_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__acc_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__acc_z, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__std_lat, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__std_lon, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__std_local_height, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__north_velocity_std, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__east_velocity_std, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__ground_velocity_std, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__roll_std, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__pitch_std, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__std_heading, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__status, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gps_flag_pos, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gps_week_number, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__ull_timestamp, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__car_status, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__gps_flag_heading, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fsd_common_msgs__msg__AsensingMessage__FIELD_NAME__num_sv, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fsd_common_msgs__msg__AsensingMessage__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
fsd_common_msgs__msg__AsensingMessage__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fsd_common_msgs__msg__AsensingMessage__TYPE_NAME, 35, 35},
      {fsd_common_msgs__msg__AsensingMessage__FIELDS, 34, 34},
    },
    {fsd_common_msgs__msg__AsensingMessage__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# # message of Asensing perception result.It is INS data. \n"
  "# Header header         # standard ROS message header\n"
  "# uint64 frame_id_num  \n"
  "# float32 acc_x\n"
  "# float32 acc_y\n"
  "# float32 acc_z\n"
  "# float32 gyro_x\n"
  "# float32 gyro_y\n"
  "# float32 gyro_z\n"
  "# float32 pitch\n"
  "# float32 roll\n"
  "# float32 heading_angle\n"
  "# float32 h\n"
  "# uint64 ull_timestamp\n"
  "# float64 lat\n"
  "# float64 lon\n"
  "# float32 vn\n"
  "# float32 ve\n"
  "# float32 vh\n"
  "# uint32 gps_flag_pos\n"
  "# uint32 num_sv\n"
  "# uint32 gps_flag_heading\n"
  "# uint64 gps_age\n"
  "# uint32 car_status\n"
  "# uint32 status\n"
  "# float32 std_lat\n"
  "# float32 std_lon\n"
  "# float32 std_local_height\n"
  "# float32 std_heading\n"
  "# float32 utc_year\n"
  "# float32 utc_month\n"
  "# float32 utc_day\n"
  "# float32 utc_hour\n"
  "# float32 utc_min\n"
  "# float32 utc_sec\n"
  "# float64 utc_msec\n"
  "\n"
  "\n"
  "# message of Asensing perception result.It is INS data. \n"
  "std_msgs/Header header         # standard ROS message header\n"
  "uint64 frame_id_num  \n"
  "float64 lat\n"
  "float64 lon\n"
  "float64 h\n"
  "\n"
  "float64 vn\n"
  "float64 ve\n"
  "float64 vh\n"
  "\n"
  "float64 roll\n"
  "float64 pitch\n"
  "float64 heading_angle\n"
  "\n"
  "float64 gyro_x\n"
  "float64 gyro_y\n"
  "float64 gyro_z\n"
  "\n"
  "float64 acc_x\n"
  "float64 acc_y\n"
  "float64 acc_z\n"
  "\n"
  "float32 std_lat\n"
  "float32 std_lon\n"
  "float32 std_local_height\n"
  "\n"
  "float32 north_velocity_std\n"
  "float32 east_velocity_std\n"
  "float32 ground_velocity_std\n"
  "\n"
  "\n"
  "float32 roll_std\n"
  "float32 pitch_std\n"
  "float32 std_heading \n"
  "\n"
  "\n"
  "uint32 status\n"
  "uint32 gps_flag_pos\n"
  "\n"
  "float64 gps_week_number\n"
  "\n"
  "float64 ull_timestamp\n"
  "\n"
  "float32 temperature\n"
  "\n"
  "uint32 car_status\n"
  "\n"
  "\n"
  "\n"
  "uint32 gps_flag_heading\n"
  "uint32 num_sv";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fsd_common_msgs__msg__AsensingMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fsd_common_msgs__msg__AsensingMessage__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1438, 1438},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fsd_common_msgs__msg__AsensingMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fsd_common_msgs__msg__AsensingMessage__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
