/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: wifi_scan.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "wifi_scan.pb-c.h"
void   cmd_scan_start__init
                     (CmdScanStart         *message)
{
  static const CmdScanStart init_value = CMD_SCAN_START__INIT;
  *message = init_value;
}
size_t cmd_scan_start__get_packed_size
                     (const CmdScanStart *message)
{
  assert(message->base.descriptor == &cmd_scan_start__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cmd_scan_start__pack
                     (const CmdScanStart *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cmd_scan_start__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cmd_scan_start__pack_to_buffer
                     (const CmdScanStart *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cmd_scan_start__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CmdScanStart *
       cmd_scan_start__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CmdScanStart *)
     protobuf_c_message_unpack (&cmd_scan_start__descriptor,
                                allocator, len, data);
}
void   cmd_scan_start__free_unpacked
                     (CmdScanStart *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &cmd_scan_start__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   resp_scan_start__init
                     (RespScanStart         *message)
{
  static const RespScanStart init_value = RESP_SCAN_START__INIT;
  *message = init_value;
}
size_t resp_scan_start__get_packed_size
                     (const RespScanStart *message)
{
  assert(message->base.descriptor == &resp_scan_start__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t resp_scan_start__pack
                     (const RespScanStart *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &resp_scan_start__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t resp_scan_start__pack_to_buffer
                     (const RespScanStart *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &resp_scan_start__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RespScanStart *
       resp_scan_start__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RespScanStart *)
     protobuf_c_message_unpack (&resp_scan_start__descriptor,
                                allocator, len, data);
}
void   resp_scan_start__free_unpacked
                     (RespScanStart *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &resp_scan_start__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cmd_scan_status__init
                     (CmdScanStatus         *message)
{
  static const CmdScanStatus init_value = CMD_SCAN_STATUS__INIT;
  *message = init_value;
}
size_t cmd_scan_status__get_packed_size
                     (const CmdScanStatus *message)
{
  assert(message->base.descriptor == &cmd_scan_status__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cmd_scan_status__pack
                     (const CmdScanStatus *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cmd_scan_status__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cmd_scan_status__pack_to_buffer
                     (const CmdScanStatus *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cmd_scan_status__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CmdScanStatus *
       cmd_scan_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CmdScanStatus *)
     protobuf_c_message_unpack (&cmd_scan_status__descriptor,
                                allocator, len, data);
}
void   cmd_scan_status__free_unpacked
                     (CmdScanStatus *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &cmd_scan_status__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   resp_scan_status__init
                     (RespScanStatus         *message)
{
  static const RespScanStatus init_value = RESP_SCAN_STATUS__INIT;
  *message = init_value;
}
size_t resp_scan_status__get_packed_size
                     (const RespScanStatus *message)
{
  assert(message->base.descriptor == &resp_scan_status__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t resp_scan_status__pack
                     (const RespScanStatus *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &resp_scan_status__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t resp_scan_status__pack_to_buffer
                     (const RespScanStatus *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &resp_scan_status__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RespScanStatus *
       resp_scan_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RespScanStatus *)
     protobuf_c_message_unpack (&resp_scan_status__descriptor,
                                allocator, len, data);
}
void   resp_scan_status__free_unpacked
                     (RespScanStatus *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &resp_scan_status__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cmd_scan_result__init
                     (CmdScanResult         *message)
{
  static const CmdScanResult init_value = CMD_SCAN_RESULT__INIT;
  *message = init_value;
}
size_t cmd_scan_result__get_packed_size
                     (const CmdScanResult *message)
{
  assert(message->base.descriptor == &cmd_scan_result__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cmd_scan_result__pack
                     (const CmdScanResult *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cmd_scan_result__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cmd_scan_result__pack_to_buffer
                     (const CmdScanResult *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cmd_scan_result__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
CmdScanResult *
       cmd_scan_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (CmdScanResult *)
     protobuf_c_message_unpack (&cmd_scan_result__descriptor,
                                allocator, len, data);
}
void   cmd_scan_result__free_unpacked
                     (CmdScanResult *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &cmd_scan_result__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   wi_fi_scan_result__init
                     (WiFiScanResult         *message)
{
  static const WiFiScanResult init_value = WI_FI_SCAN_RESULT__INIT;
  *message = init_value;
}
size_t wi_fi_scan_result__get_packed_size
                     (const WiFiScanResult *message)
{
  assert(message->base.descriptor == &wi_fi_scan_result__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wi_fi_scan_result__pack
                     (const WiFiScanResult *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &wi_fi_scan_result__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wi_fi_scan_result__pack_to_buffer
                     (const WiFiScanResult *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &wi_fi_scan_result__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
WiFiScanResult *
       wi_fi_scan_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (WiFiScanResult *)
     protobuf_c_message_unpack (&wi_fi_scan_result__descriptor,
                                allocator, len, data);
}
void   wi_fi_scan_result__free_unpacked
                     (WiFiScanResult *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &wi_fi_scan_result__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   resp_scan_result__init
                     (RespScanResult         *message)
{
  static const RespScanResult init_value = RESP_SCAN_RESULT__INIT;
  *message = init_value;
}
size_t resp_scan_result__get_packed_size
                     (const RespScanResult *message)
{
  assert(message->base.descriptor == &resp_scan_result__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t resp_scan_result__pack
                     (const RespScanResult *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &resp_scan_result__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t resp_scan_result__pack_to_buffer
                     (const RespScanResult *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &resp_scan_result__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RespScanResult *
       resp_scan_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RespScanResult *)
     protobuf_c_message_unpack (&resp_scan_result__descriptor,
                                allocator, len, data);
}
void   resp_scan_result__free_unpacked
                     (RespScanResult *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &resp_scan_result__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   wi_fi_scan_payload__init
                     (WiFiScanPayload         *message)
{
  static const WiFiScanPayload init_value = WI_FI_SCAN_PAYLOAD__INIT;
  *message = init_value;
}
size_t wi_fi_scan_payload__get_packed_size
                     (const WiFiScanPayload *message)
{
  assert(message->base.descriptor == &wi_fi_scan_payload__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wi_fi_scan_payload__pack
                     (const WiFiScanPayload *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &wi_fi_scan_payload__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wi_fi_scan_payload__pack_to_buffer
                     (const WiFiScanPayload *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &wi_fi_scan_payload__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
WiFiScanPayload *
       wi_fi_scan_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (WiFiScanPayload *)
     protobuf_c_message_unpack (&wi_fi_scan_payload__descriptor,
                                allocator, len, data);
}
void   wi_fi_scan_payload__free_unpacked
                     (WiFiScanPayload *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &wi_fi_scan_payload__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor cmd_scan_start__field_descriptors[4] =
{
  {
    "blocking",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(CmdScanStart, blocking),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "passive",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(CmdScanStart, passive),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "group_channels",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(CmdScanStart, group_channels),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "period_ms",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(CmdScanStart, period_ms),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cmd_scan_start__field_indices_by_name[] = {
  0,   /* field[0] = blocking */
  2,   /* field[2] = group_channels */
  1,   /* field[1] = passive */
  3,   /* field[3] = period_ms */
};
static const ProtobufCIntRange cmd_scan_start__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor cmd_scan_start__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "CmdScanStart",
  "CmdScanStart",
  "CmdScanStart",
  "",
  sizeof(CmdScanStart),
  4,
  cmd_scan_start__field_descriptors,
  cmd_scan_start__field_indices_by_name,
  1,  cmd_scan_start__number_ranges,
  (ProtobufCMessageInit) cmd_scan_start__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define resp_scan_start__field_descriptors NULL
#define resp_scan_start__field_indices_by_name NULL
#define resp_scan_start__number_ranges NULL
const ProtobufCMessageDescriptor resp_scan_start__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RespScanStart",
  "RespScanStart",
  "RespScanStart",
  "",
  sizeof(RespScanStart),
  0,
  resp_scan_start__field_descriptors,
  resp_scan_start__field_indices_by_name,
  0,  resp_scan_start__number_ranges,
  (ProtobufCMessageInit) resp_scan_start__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define cmd_scan_status__field_descriptors NULL
#define cmd_scan_status__field_indices_by_name NULL
#define cmd_scan_status__number_ranges NULL
const ProtobufCMessageDescriptor cmd_scan_status__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "CmdScanStatus",
  "CmdScanStatus",
  "CmdScanStatus",
  "",
  sizeof(CmdScanStatus),
  0,
  cmd_scan_status__field_descriptors,
  cmd_scan_status__field_indices_by_name,
  0,  cmd_scan_status__number_ranges,
  (ProtobufCMessageInit) cmd_scan_status__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor resp_scan_status__field_descriptors[2] =
{
  {
    "scan_finished",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(RespScanStatus, scan_finished),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "result_count",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(RespScanStatus, result_count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned resp_scan_status__field_indices_by_name[] = {
  1,   /* field[1] = result_count */
  0,   /* field[0] = scan_finished */
};
static const ProtobufCIntRange resp_scan_status__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor resp_scan_status__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RespScanStatus",
  "RespScanStatus",
  "RespScanStatus",
  "",
  sizeof(RespScanStatus),
  2,
  resp_scan_status__field_descriptors,
  resp_scan_status__field_indices_by_name,
  1,  resp_scan_status__number_ranges,
  (ProtobufCMessageInit) resp_scan_status__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor cmd_scan_result__field_descriptors[2] =
{
  {
    "start_index",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(CmdScanResult, start_index),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "count",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(CmdScanResult, count),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cmd_scan_result__field_indices_by_name[] = {
  1,   /* field[1] = count */
  0,   /* field[0] = start_index */
};
static const ProtobufCIntRange cmd_scan_result__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor cmd_scan_result__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "CmdScanResult",
  "CmdScanResult",
  "CmdScanResult",
  "",
  sizeof(CmdScanResult),
  2,
  cmd_scan_result__field_descriptors,
  cmd_scan_result__field_indices_by_name,
  1,  cmd_scan_result__number_ranges,
  (ProtobufCMessageInit) cmd_scan_result__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor wi_fi_scan_result__field_descriptors[5] =
{
  {
    "ssid",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(WiFiScanResult, ssid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "channel",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(WiFiScanResult, channel),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rssi",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(WiFiScanResult, rssi),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "bssid",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(WiFiScanResult, bssid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "auth",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(WiFiScanResult, auth),
    &wifi_auth_mode__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wi_fi_scan_result__field_indices_by_name[] = {
  4,   /* field[4] = auth */
  3,   /* field[3] = bssid */
  1,   /* field[1] = channel */
  2,   /* field[2] = rssi */
  0,   /* field[0] = ssid */
};
static const ProtobufCIntRange wi_fi_scan_result__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor wi_fi_scan_result__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "WiFiScanResult",
  "WiFiScanResult",
  "WiFiScanResult",
  "",
  sizeof(WiFiScanResult),
  5,
  wi_fi_scan_result__field_descriptors,
  wi_fi_scan_result__field_indices_by_name,
  1,  wi_fi_scan_result__number_ranges,
  (ProtobufCMessageInit) wi_fi_scan_result__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor resp_scan_result__field_descriptors[1] =
{
  {
    "entries",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(RespScanResult, n_entries),
    offsetof(RespScanResult, entries),
    &wi_fi_scan_result__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned resp_scan_result__field_indices_by_name[] = {
  0,   /* field[0] = entries */
};
static const ProtobufCIntRange resp_scan_result__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor resp_scan_result__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "RespScanResult",
  "RespScanResult",
  "RespScanResult",
  "",
  sizeof(RespScanResult),
  1,
  resp_scan_result__field_descriptors,
  resp_scan_result__field_indices_by_name,
  1,  resp_scan_result__number_ranges,
  (ProtobufCMessageInit) resp_scan_result__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor wi_fi_scan_payload__field_descriptors[9] =
{
  {
    "msg",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(WiFiScanPayload, msg),
    &wi_fi_scan_msg_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "status",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(WiFiScanPayload, status),
    &status__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "auth_token",
    9,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(WiFiScanPayload, auth_token),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cmd_scan_start",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(WiFiScanPayload, payload_case),
    offsetof(WiFiScanPayload, cmd_scan_start),
    &cmd_scan_start__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "resp_scan_start",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(WiFiScanPayload, payload_case),
    offsetof(WiFiScanPayload, resp_scan_start),
    &resp_scan_start__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cmd_scan_status",
    12,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(WiFiScanPayload, payload_case),
    offsetof(WiFiScanPayload, cmd_scan_status),
    &cmd_scan_status__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "resp_scan_status",
    13,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(WiFiScanPayload, payload_case),
    offsetof(WiFiScanPayload, resp_scan_status),
    &resp_scan_status__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cmd_scan_result",
    14,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(WiFiScanPayload, payload_case),
    offsetof(WiFiScanPayload, cmd_scan_result),
    &cmd_scan_result__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "resp_scan_result",
    15,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(WiFiScanPayload, payload_case),
    offsetof(WiFiScanPayload, resp_scan_result),
    &resp_scan_result__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wi_fi_scan_payload__field_indices_by_name[] = {
  2,   /* field[2] = auth_token */
  7,   /* field[7] = cmd_scan_result */
  3,   /* field[3] = cmd_scan_start */
  5,   /* field[5] = cmd_scan_status */
  0,   /* field[0] = msg */
  8,   /* field[8] = resp_scan_result */
  4,   /* field[4] = resp_scan_start */
  6,   /* field[6] = resp_scan_status */
  1,   /* field[1] = status */
};
static const ProtobufCIntRange wi_fi_scan_payload__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 9, 2 },
  { 0, 9 }
};
const ProtobufCMessageDescriptor wi_fi_scan_payload__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "WiFiScanPayload",
  "WiFiScanPayload",
  "WiFiScanPayload",
  "",
  sizeof(WiFiScanPayload),
  9,
  wi_fi_scan_payload__field_descriptors,
  wi_fi_scan_payload__field_indices_by_name,
  2,  wi_fi_scan_payload__number_ranges,
  (ProtobufCMessageInit) wi_fi_scan_payload__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue wi_fi_scan_msg_type__enum_values_by_number[6] =
{
  { "TypeCmdScanStart", "WI_FI_SCAN_MSG_TYPE__TypeCmdScanStart", 0 },
  { "TypeRespScanStart", "WI_FI_SCAN_MSG_TYPE__TypeRespScanStart", 1 },
  { "TypeCmdScanStatus", "WI_FI_SCAN_MSG_TYPE__TypeCmdScanStatus", 2 },
  { "TypeRespScanStatus", "WI_FI_SCAN_MSG_TYPE__TypeRespScanStatus", 3 },
  { "TypeCmdScanResult", "WI_FI_SCAN_MSG_TYPE__TypeCmdScanResult", 4 },
  { "TypeRespScanResult", "WI_FI_SCAN_MSG_TYPE__TypeRespScanResult", 5 },
};
static const ProtobufCIntRange wi_fi_scan_msg_type__value_ranges[] = {
{0, 0},{0, 6}
};
static const ProtobufCEnumValueIndex wi_fi_scan_msg_type__enum_values_by_name[6] =
{
  { "TypeCmdScanResult", 4 },
  { "TypeCmdScanStart", 0 },
  { "TypeCmdScanStatus", 2 },
  { "TypeRespScanResult", 5 },
  { "TypeRespScanStart", 1 },
  { "TypeRespScanStatus", 3 },
};
const ProtobufCEnumDescriptor wi_fi_scan_msg_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "WiFiScanMsgType",
  "WiFiScanMsgType",
  "WiFiScanMsgType",
  "",
  6,
  wi_fi_scan_msg_type__enum_values_by_number,
  6,
  wi_fi_scan_msg_type__enum_values_by_name,
  1,
  wi_fi_scan_msg_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
