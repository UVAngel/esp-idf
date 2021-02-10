/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: wifi_config.proto */

#ifndef PROTOBUF_C_wifi_5fconfig_2eproto__INCLUDED
#define PROTOBUF_C_wifi_5fconfig_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004000 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "constants.pb-c.h"
#include "wifi_constants.pb-c.h"

typedef struct CmdGetStatus CmdGetStatus;
typedef struct RespGetStatus RespGetStatus;
typedef struct CmdSetConfig CmdSetConfig;
typedef struct RespSetConfig RespSetConfig;
typedef struct CmdApplyConfig CmdApplyConfig;
typedef struct RespApplyConfig RespApplyConfig;
typedef struct WiFiConfigPayload WiFiConfigPayload;


/* --- enums --- */

typedef enum _WiFiConfigMsgType {
  WI_FI_CONFIG_MSG_TYPE__TypeCmdGetStatus = 0,
  WI_FI_CONFIG_MSG_TYPE__TypeRespGetStatus = 1,
  WI_FI_CONFIG_MSG_TYPE__TypeCmdSetConfig = 2,
  WI_FI_CONFIG_MSG_TYPE__TypeRespSetConfig = 3,
  WI_FI_CONFIG_MSG_TYPE__TypeCmdApplyConfig = 4,
  WI_FI_CONFIG_MSG_TYPE__TypeRespApplyConfig = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(WI_FI_CONFIG_MSG_TYPE)
} WiFiConfigMsgType;

/* --- messages --- */

struct  CmdGetStatus
{
  ProtobufCMessage base;
};
#define CMD_GET_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmd_get_status__descriptor) \
     }


typedef enum {
  RESP_GET_STATUS__STATE__NOT_SET = 0,
  RESP_GET_STATUS__STATE_FAIL_REASON = 10,
  RESP_GET_STATUS__STATE_CONNECTED = 11
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(RESP_GET_STATUS__STATE__CASE)
} RespGetStatus__StateCase;

struct  RespGetStatus
{
  ProtobufCMessage base;
  Status status;
  WifiStationState sta_state;
  RespGetStatus__StateCase state_case;
  union {
    WifiConnectFailedReason fail_reason;
    WifiConnectedState *connected;
  };
};
#define RESP_GET_STATUS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&resp_get_status__descriptor) \
    , STATUS__Success, WIFI_STATION_STATE__Connected, RESP_GET_STATUS__STATE__NOT_SET, {0} }


struct  CmdSetConfig
{
  ProtobufCMessage base;
  ProtobufCBinaryData ssid;
  ProtobufCBinaryData passphrase;
  ProtobufCBinaryData bssid;
  int32_t channel;
};
#define CMD_SET_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmd_set_config__descriptor) \
    , {0,NULL}, {0,NULL}, {0,NULL}, 0 }


struct  RespSetConfig
{
  ProtobufCMessage base;
  Status status;
};
#define RESP_SET_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&resp_set_config__descriptor) \
    , STATUS__Success }


struct  CmdApplyConfig
{
  ProtobufCMessage base;
};
#define CMD_APPLY_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&cmd_apply_config__descriptor) \
     }


struct  RespApplyConfig
{
  ProtobufCMessage base;
  Status status;
};
#define RESP_APPLY_CONFIG__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&resp_apply_config__descriptor) \
    , STATUS__Success }


typedef enum {
  WI_FI_CONFIG_PAYLOAD__PAYLOAD__NOT_SET = 0,
  WI_FI_CONFIG_PAYLOAD__PAYLOAD_CMD_GET_STATUS = 10,
  WI_FI_CONFIG_PAYLOAD__PAYLOAD_RESP_GET_STATUS = 11,
  WI_FI_CONFIG_PAYLOAD__PAYLOAD_CMD_SET_CONFIG = 12,
  WI_FI_CONFIG_PAYLOAD__PAYLOAD_RESP_SET_CONFIG = 13,
  WI_FI_CONFIG_PAYLOAD__PAYLOAD_CMD_APPLY_CONFIG = 14,
  WI_FI_CONFIG_PAYLOAD__PAYLOAD_RESP_APPLY_CONFIG = 15
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(WI_FI_CONFIG_PAYLOAD__PAYLOAD__CASE)
} WiFiConfigPayload__PayloadCase;

struct  WiFiConfigPayload
{
  ProtobufCMessage base;
  WiFiConfigMsgType msg;
  ProtobufCBinaryData auth_token;
  WiFiConfigPayload__PayloadCase payload_case;
  union {
    CmdGetStatus *cmd_get_status;
    RespGetStatus *resp_get_status;
    CmdSetConfig *cmd_set_config;
    RespSetConfig *resp_set_config;
    CmdApplyConfig *cmd_apply_config;
    RespApplyConfig *resp_apply_config;
  };
};
#define WI_FI_CONFIG_PAYLOAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&wi_fi_config_payload__descriptor) \
    , WI_FI_CONFIG_MSG_TYPE__TypeCmdGetStatus, {0,NULL}, WI_FI_CONFIG_PAYLOAD__PAYLOAD__NOT_SET, {0} }


/* CmdGetStatus methods */
void   cmd_get_status__init
                     (CmdGetStatus         *message);
size_t cmd_get_status__get_packed_size
                     (const CmdGetStatus   *message);
size_t cmd_get_status__pack
                     (const CmdGetStatus   *message,
                      uint8_t             *out);
size_t cmd_get_status__pack_to_buffer
                     (const CmdGetStatus   *message,
                      ProtobufCBuffer     *buffer);
CmdGetStatus *
       cmd_get_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmd_get_status__free_unpacked
                     (CmdGetStatus *message,
                      ProtobufCAllocator *allocator);
/* RespGetStatus methods */
void   resp_get_status__init
                     (RespGetStatus         *message);
size_t resp_get_status__get_packed_size
                     (const RespGetStatus   *message);
size_t resp_get_status__pack
                     (const RespGetStatus   *message,
                      uint8_t             *out);
size_t resp_get_status__pack_to_buffer
                     (const RespGetStatus   *message,
                      ProtobufCBuffer     *buffer);
RespGetStatus *
       resp_get_status__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   resp_get_status__free_unpacked
                     (RespGetStatus *message,
                      ProtobufCAllocator *allocator);
/* CmdSetConfig methods */
void   cmd_set_config__init
                     (CmdSetConfig         *message);
size_t cmd_set_config__get_packed_size
                     (const CmdSetConfig   *message);
size_t cmd_set_config__pack
                     (const CmdSetConfig   *message,
                      uint8_t             *out);
size_t cmd_set_config__pack_to_buffer
                     (const CmdSetConfig   *message,
                      ProtobufCBuffer     *buffer);
CmdSetConfig *
       cmd_set_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmd_set_config__free_unpacked
                     (CmdSetConfig *message,
                      ProtobufCAllocator *allocator);
/* RespSetConfig methods */
void   resp_set_config__init
                     (RespSetConfig         *message);
size_t resp_set_config__get_packed_size
                     (const RespSetConfig   *message);
size_t resp_set_config__pack
                     (const RespSetConfig   *message,
                      uint8_t             *out);
size_t resp_set_config__pack_to_buffer
                     (const RespSetConfig   *message,
                      ProtobufCBuffer     *buffer);
RespSetConfig *
       resp_set_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   resp_set_config__free_unpacked
                     (RespSetConfig *message,
                      ProtobufCAllocator *allocator);
/* CmdApplyConfig methods */
void   cmd_apply_config__init
                     (CmdApplyConfig         *message);
size_t cmd_apply_config__get_packed_size
                     (const CmdApplyConfig   *message);
size_t cmd_apply_config__pack
                     (const CmdApplyConfig   *message,
                      uint8_t             *out);
size_t cmd_apply_config__pack_to_buffer
                     (const CmdApplyConfig   *message,
                      ProtobufCBuffer     *buffer);
CmdApplyConfig *
       cmd_apply_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   cmd_apply_config__free_unpacked
                     (CmdApplyConfig *message,
                      ProtobufCAllocator *allocator);
/* RespApplyConfig methods */
void   resp_apply_config__init
                     (RespApplyConfig         *message);
size_t resp_apply_config__get_packed_size
                     (const RespApplyConfig   *message);
size_t resp_apply_config__pack
                     (const RespApplyConfig   *message,
                      uint8_t             *out);
size_t resp_apply_config__pack_to_buffer
                     (const RespApplyConfig   *message,
                      ProtobufCBuffer     *buffer);
RespApplyConfig *
       resp_apply_config__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   resp_apply_config__free_unpacked
                     (RespApplyConfig *message,
                      ProtobufCAllocator *allocator);
/* WiFiConfigPayload methods */
void   wi_fi_config_payload__init
                     (WiFiConfigPayload         *message);
size_t wi_fi_config_payload__get_packed_size
                     (const WiFiConfigPayload   *message);
size_t wi_fi_config_payload__pack
                     (const WiFiConfigPayload   *message,
                      uint8_t             *out);
size_t wi_fi_config_payload__pack_to_buffer
                     (const WiFiConfigPayload   *message,
                      ProtobufCBuffer     *buffer);
WiFiConfigPayload *
       wi_fi_config_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   wi_fi_config_payload__free_unpacked
                     (WiFiConfigPayload *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*CmdGetStatus_Closure)
                 (const CmdGetStatus *message,
                  void *closure_data);
typedef void (*RespGetStatus_Closure)
                 (const RespGetStatus *message,
                  void *closure_data);
typedef void (*CmdSetConfig_Closure)
                 (const CmdSetConfig *message,
                  void *closure_data);
typedef void (*RespSetConfig_Closure)
                 (const RespSetConfig *message,
                  void *closure_data);
typedef void (*CmdApplyConfig_Closure)
                 (const CmdApplyConfig *message,
                  void *closure_data);
typedef void (*RespApplyConfig_Closure)
                 (const RespApplyConfig *message,
                  void *closure_data);
typedef void (*WiFiConfigPayload_Closure)
                 (const WiFiConfigPayload *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    wi_fi_config_msg_type__descriptor;
extern const ProtobufCMessageDescriptor cmd_get_status__descriptor;
extern const ProtobufCMessageDescriptor resp_get_status__descriptor;
extern const ProtobufCMessageDescriptor cmd_set_config__descriptor;
extern const ProtobufCMessageDescriptor resp_set_config__descriptor;
extern const ProtobufCMessageDescriptor cmd_apply_config__descriptor;
extern const ProtobufCMessageDescriptor resp_apply_config__descriptor;
extern const ProtobufCMessageDescriptor wi_fi_config_payload__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_wifi_5fconfig_2eproto__INCLUDED */
