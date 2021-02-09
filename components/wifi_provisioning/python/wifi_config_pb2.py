# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: wifi_config.proto

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import constants_pb2 as constants__pb2
import wifi_constants_pb2 as wifi__constants__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='wifi_config.proto',
  package='',
  syntax='proto3',
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x11wifi_config.proto\x1a\x0f\x63onstants.proto\x1a\x14wifi_constants.proto\"\x0e\n\x0c\x43mdGetStatus\"\xb2\x01\n\rRespGetStatus\x12\x17\n\x06status\x18\x01 \x01(\x0e\x32\x07.Status\x12$\n\tsta_state\x18\x02 \x01(\x0e\x32\x11.WifiStationState\x12/\n\x0b\x66\x61il_reason\x18\n \x01(\x0e\x32\x18.WifiConnectFailedReasonH\x00\x12(\n\tconnected\x18\x0b \x01(\x0b\x32\x13.WifiConnectedStateH\x00\x42\x07\n\x05state\"P\n\x0c\x43mdSetConfig\x12\x0c\n\x04ssid\x18\x01 \x01(\x0c\x12\x12\n\npassphrase\x18\x02 \x01(\x0c\x12\r\n\x05\x62ssid\x18\x03 \x01(\x0c\x12\x0f\n\x07\x63hannel\x18\x04 \x01(\x05\"(\n\rRespSetConfig\x12\x17\n\x06status\x18\x01 \x01(\x0e\x32\x07.Status\"\x10\n\x0e\x43mdApplyConfig\"*\n\x0fRespApplyConfig\x12\x17\n\x06status\x18\x01 \x01(\x0e\x32\x07.Status\"\xd7\x02\n\x11WiFiConfigPayload\x12\x1f\n\x03msg\x18\x01 \x01(\x0e\x32\x12.WiFiConfigMsgType\x12\x12\n\nauth_token\x18\t \x01(\x0c\x12\'\n\x0e\x63md_get_status\x18\n \x01(\x0b\x32\r.CmdGetStatusH\x00\x12)\n\x0fresp_get_status\x18\x0b \x01(\x0b\x32\x0e.RespGetStatusH\x00\x12\'\n\x0e\x63md_set_config\x18\x0c \x01(\x0b\x32\r.CmdSetConfigH\x00\x12)\n\x0fresp_set_config\x18\r \x01(\x0b\x32\x0e.RespSetConfigH\x00\x12+\n\x10\x63md_apply_config\x18\x0e \x01(\x0b\x32\x0f.CmdApplyConfigH\x00\x12-\n\x11resp_apply_config\x18\x0f \x01(\x0b\x32\x10.RespApplyConfigH\x00\x42\t\n\x07payload*\x9e\x01\n\x11WiFiConfigMsgType\x12\x14\n\x10TypeCmdGetStatus\x10\x00\x12\x15\n\x11TypeRespGetStatus\x10\x01\x12\x14\n\x10TypeCmdSetConfig\x10\x02\x12\x15\n\x11TypeRespSetConfig\x10\x03\x12\x16\n\x12TypeCmdApplyConfig\x10\x04\x12\x17\n\x13TypeRespApplyConfig\x10\x05\x62\x06proto3'
  ,
  dependencies=[constants__pb2.DESCRIPTOR,wifi__constants__pb2.DESCRIPTOR,])

_WIFICONFIGMSGTYPE = _descriptor.EnumDescriptor(
  name='WiFiConfigMsgType',
  full_name='WiFiConfigMsgType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='TypeCmdGetStatus', index=0, number=0,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TypeRespGetStatus', index=1, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TypeCmdSetConfig', index=2, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TypeRespSetConfig', index=3, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TypeCmdApplyConfig', index=4, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TypeRespApplyConfig', index=5, number=5,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=790,
  serialized_end=948,
)
_sym_db.RegisterEnumDescriptor(_WIFICONFIGMSGTYPE)

WiFiConfigMsgType = enum_type_wrapper.EnumTypeWrapper(_WIFICONFIGMSGTYPE)
TypeCmdGetStatus = 0
TypeRespGetStatus = 1
TypeCmdSetConfig = 2
TypeRespSetConfig = 3
TypeCmdApplyConfig = 4
TypeRespApplyConfig = 5



_CMDGETSTATUS = _descriptor.Descriptor(
  name='CmdGetStatus',
  full_name='CmdGetStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=60,
  serialized_end=74,
)


_RESPGETSTATUS = _descriptor.Descriptor(
  name='RespGetStatus',
  full_name='RespGetStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='RespGetStatus.status', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='sta_state', full_name='RespGetStatus.sta_state', index=1,
      number=2, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='fail_reason', full_name='RespGetStatus.fail_reason', index=2,
      number=10, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='connected', full_name='RespGetStatus.connected', index=3,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='state', full_name='RespGetStatus.state',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=77,
  serialized_end=255,
)


_CMDSETCONFIG = _descriptor.Descriptor(
  name='CmdSetConfig',
  full_name='CmdSetConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='ssid', full_name='CmdSetConfig.ssid', index=0,
      number=1, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='passphrase', full_name='CmdSetConfig.passphrase', index=1,
      number=2, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='bssid', full_name='CmdSetConfig.bssid', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='channel', full_name='CmdSetConfig.channel', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=257,
  serialized_end=337,
)


_RESPSETCONFIG = _descriptor.Descriptor(
  name='RespSetConfig',
  full_name='RespSetConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='RespSetConfig.status', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=339,
  serialized_end=379,
)


_CMDAPPLYCONFIG = _descriptor.Descriptor(
  name='CmdApplyConfig',
  full_name='CmdApplyConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=381,
  serialized_end=397,
)


_RESPAPPLYCONFIG = _descriptor.Descriptor(
  name='RespApplyConfig',
  full_name='RespApplyConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='status', full_name='RespApplyConfig.status', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=399,
  serialized_end=441,
)


_WIFICONFIGPAYLOAD = _descriptor.Descriptor(
  name='WiFiConfigPayload',
  full_name='WiFiConfigPayload',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='msg', full_name='WiFiConfigPayload.msg', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='auth_token', full_name='WiFiConfigPayload.auth_token', index=1,
      number=9, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=b"",
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='cmd_get_status', full_name='WiFiConfigPayload.cmd_get_status', index=2,
      number=10, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='resp_get_status', full_name='WiFiConfigPayload.resp_get_status', index=3,
      number=11, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='cmd_set_config', full_name='WiFiConfigPayload.cmd_set_config', index=4,
      number=12, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='resp_set_config', full_name='WiFiConfigPayload.resp_set_config', index=5,
      number=13, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='cmd_apply_config', full_name='WiFiConfigPayload.cmd_apply_config', index=6,
      number=14, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
    _descriptor.FieldDescriptor(
      name='resp_apply_config', full_name='WiFiConfigPayload.resp_apply_config', index=7,
      number=15, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='payload', full_name='WiFiConfigPayload.payload',
      index=0, containing_type=None,
      create_key=_descriptor._internal_create_key,
    fields=[]),
  ],
  serialized_start=444,
  serialized_end=787,
)

_RESPGETSTATUS.fields_by_name['status'].enum_type = constants__pb2._STATUS
_RESPGETSTATUS.fields_by_name['sta_state'].enum_type = wifi__constants__pb2._WIFISTATIONSTATE
_RESPGETSTATUS.fields_by_name['fail_reason'].enum_type = wifi__constants__pb2._WIFICONNECTFAILEDREASON
_RESPGETSTATUS.fields_by_name['connected'].message_type = wifi__constants__pb2._WIFICONNECTEDSTATE
_RESPGETSTATUS.oneofs_by_name['state'].fields.append(
  _RESPGETSTATUS.fields_by_name['fail_reason'])
_RESPGETSTATUS.fields_by_name['fail_reason'].containing_oneof = _RESPGETSTATUS.oneofs_by_name['state']
_RESPGETSTATUS.oneofs_by_name['state'].fields.append(
  _RESPGETSTATUS.fields_by_name['connected'])
_RESPGETSTATUS.fields_by_name['connected'].containing_oneof = _RESPGETSTATUS.oneofs_by_name['state']
_RESPSETCONFIG.fields_by_name['status'].enum_type = constants__pb2._STATUS
_RESPAPPLYCONFIG.fields_by_name['status'].enum_type = constants__pb2._STATUS
_WIFICONFIGPAYLOAD.fields_by_name['msg'].enum_type = _WIFICONFIGMSGTYPE
_WIFICONFIGPAYLOAD.fields_by_name['cmd_get_status'].message_type = _CMDGETSTATUS
_WIFICONFIGPAYLOAD.fields_by_name['resp_get_status'].message_type = _RESPGETSTATUS
_WIFICONFIGPAYLOAD.fields_by_name['cmd_set_config'].message_type = _CMDSETCONFIG
_WIFICONFIGPAYLOAD.fields_by_name['resp_set_config'].message_type = _RESPSETCONFIG
_WIFICONFIGPAYLOAD.fields_by_name['cmd_apply_config'].message_type = _CMDAPPLYCONFIG
_WIFICONFIGPAYLOAD.fields_by_name['resp_apply_config'].message_type = _RESPAPPLYCONFIG
_WIFICONFIGPAYLOAD.oneofs_by_name['payload'].fields.append(
  _WIFICONFIGPAYLOAD.fields_by_name['cmd_get_status'])
_WIFICONFIGPAYLOAD.fields_by_name['cmd_get_status'].containing_oneof = _WIFICONFIGPAYLOAD.oneofs_by_name['payload']
_WIFICONFIGPAYLOAD.oneofs_by_name['payload'].fields.append(
  _WIFICONFIGPAYLOAD.fields_by_name['resp_get_status'])
_WIFICONFIGPAYLOAD.fields_by_name['resp_get_status'].containing_oneof = _WIFICONFIGPAYLOAD.oneofs_by_name['payload']
_WIFICONFIGPAYLOAD.oneofs_by_name['payload'].fields.append(
  _WIFICONFIGPAYLOAD.fields_by_name['cmd_set_config'])
_WIFICONFIGPAYLOAD.fields_by_name['cmd_set_config'].containing_oneof = _WIFICONFIGPAYLOAD.oneofs_by_name['payload']
_WIFICONFIGPAYLOAD.oneofs_by_name['payload'].fields.append(
  _WIFICONFIGPAYLOAD.fields_by_name['resp_set_config'])
_WIFICONFIGPAYLOAD.fields_by_name['resp_set_config'].containing_oneof = _WIFICONFIGPAYLOAD.oneofs_by_name['payload']
_WIFICONFIGPAYLOAD.oneofs_by_name['payload'].fields.append(
  _WIFICONFIGPAYLOAD.fields_by_name['cmd_apply_config'])
_WIFICONFIGPAYLOAD.fields_by_name['cmd_apply_config'].containing_oneof = _WIFICONFIGPAYLOAD.oneofs_by_name['payload']
_WIFICONFIGPAYLOAD.oneofs_by_name['payload'].fields.append(
  _WIFICONFIGPAYLOAD.fields_by_name['resp_apply_config'])
_WIFICONFIGPAYLOAD.fields_by_name['resp_apply_config'].containing_oneof = _WIFICONFIGPAYLOAD.oneofs_by_name['payload']
DESCRIPTOR.message_types_by_name['CmdGetStatus'] = _CMDGETSTATUS
DESCRIPTOR.message_types_by_name['RespGetStatus'] = _RESPGETSTATUS
DESCRIPTOR.message_types_by_name['CmdSetConfig'] = _CMDSETCONFIG
DESCRIPTOR.message_types_by_name['RespSetConfig'] = _RESPSETCONFIG
DESCRIPTOR.message_types_by_name['CmdApplyConfig'] = _CMDAPPLYCONFIG
DESCRIPTOR.message_types_by_name['RespApplyConfig'] = _RESPAPPLYCONFIG
DESCRIPTOR.message_types_by_name['WiFiConfigPayload'] = _WIFICONFIGPAYLOAD
DESCRIPTOR.enum_types_by_name['WiFiConfigMsgType'] = _WIFICONFIGMSGTYPE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

CmdGetStatus = _reflection.GeneratedProtocolMessageType('CmdGetStatus', (_message.Message,), {
  'DESCRIPTOR' : _CMDGETSTATUS,
  '__module__' : 'wifi_config_pb2'
  # @@protoc_insertion_point(class_scope:CmdGetStatus)
  })
_sym_db.RegisterMessage(CmdGetStatus)

RespGetStatus = _reflection.GeneratedProtocolMessageType('RespGetStatus', (_message.Message,), {
  'DESCRIPTOR' : _RESPGETSTATUS,
  '__module__' : 'wifi_config_pb2'
  # @@protoc_insertion_point(class_scope:RespGetStatus)
  })
_sym_db.RegisterMessage(RespGetStatus)

CmdSetConfig = _reflection.GeneratedProtocolMessageType('CmdSetConfig', (_message.Message,), {
  'DESCRIPTOR' : _CMDSETCONFIG,
  '__module__' : 'wifi_config_pb2'
  # @@protoc_insertion_point(class_scope:CmdSetConfig)
  })
_sym_db.RegisterMessage(CmdSetConfig)

RespSetConfig = _reflection.GeneratedProtocolMessageType('RespSetConfig', (_message.Message,), {
  'DESCRIPTOR' : _RESPSETCONFIG,
  '__module__' : 'wifi_config_pb2'
  # @@protoc_insertion_point(class_scope:RespSetConfig)
  })
_sym_db.RegisterMessage(RespSetConfig)

CmdApplyConfig = _reflection.GeneratedProtocolMessageType('CmdApplyConfig', (_message.Message,), {
  'DESCRIPTOR' : _CMDAPPLYCONFIG,
  '__module__' : 'wifi_config_pb2'
  # @@protoc_insertion_point(class_scope:CmdApplyConfig)
  })
_sym_db.RegisterMessage(CmdApplyConfig)

RespApplyConfig = _reflection.GeneratedProtocolMessageType('RespApplyConfig', (_message.Message,), {
  'DESCRIPTOR' : _RESPAPPLYCONFIG,
  '__module__' : 'wifi_config_pb2'
  # @@protoc_insertion_point(class_scope:RespApplyConfig)
  })
_sym_db.RegisterMessage(RespApplyConfig)

WiFiConfigPayload = _reflection.GeneratedProtocolMessageType('WiFiConfigPayload', (_message.Message,), {
  'DESCRIPTOR' : _WIFICONFIGPAYLOAD,
  '__module__' : 'wifi_config_pb2'
  # @@protoc_insertion_point(class_scope:WiFiConfigPayload)
  })
_sym_db.RegisterMessage(WiFiConfigPayload)


# @@protoc_insertion_point(module_scope)
