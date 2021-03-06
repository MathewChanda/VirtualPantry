/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/listener.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/listener.upb.h"
#else
  #include  "envoy/api/v2/listener.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/core/address.upb.h"
#else
  #include  "envoy/api/v2/core/address.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/core/base.upb.h"
#else
  #include  "envoy/api/v2/core/base.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/listener/listener_components.upb.h"
#else
  #include  "envoy/api/v2/listener/listener_components.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/listener/udp_listener_config.upb.h"
#else
  #include  "envoy/api/v2/listener/udp_listener_config.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/listener/v2/api_listener.upb.h"
#else
  #include  "envoy/config/listener/v2/api_listener.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/api/annotations.upb.h"
#else
  #include  "google/api/annotations.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/duration.upb.h"
#else
  #include  "google/protobuf/duration.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/wrappers.upb.h"
#else
  #include  "google/protobuf/wrappers.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/migrate.upb.h"
#else
  #include  "udpa/annotations/migrate.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_api_v2_Listener_submsgs[15] = {
  &envoy_api_v2_Listener_ConnectionBalanceConfig_msginit,
  &envoy_api_v2_Listener_DeprecatedV1_msginit,
  &envoy_api_v2_core_Address_msginit,
  &envoy_api_v2_core_Metadata_msginit,
  &envoy_api_v2_core_SocketOption_msginit,
  &envoy_api_v2_listener_FilterChain_msginit,
  &envoy_api_v2_listener_ListenerFilter_msginit,
  &envoy_api_v2_listener_UdpListenerConfig_msginit,
  &envoy_config_listener_v2_ApiListener_msginit,
  &google_protobuf_BoolValue_msginit,
  &google_protobuf_Duration_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_Listener__fields[20] = {
  {1, UPB_SIZE(20, 24), 0, 0, 9, 1},
  {2, UPB_SIZE(28, 40), 0, 2, 11, 1},
  {3, UPB_SIZE(76, 136), 0, 5, 11, 3},
  {4, UPB_SIZE(32, 48), 0, 9, 11, 1},
  {5, UPB_SIZE(36, 56), 0, 11, 11, 1},
  {6, UPB_SIZE(40, 64), 0, 3, 11, 1},
  {7, UPB_SIZE(44, 72), 0, 1, 11, 1},
  {8, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {9, UPB_SIZE(80, 144), 0, 6, 11, 3},
  {10, UPB_SIZE(48, 80), 0, 9, 11, 1},
  {11, UPB_SIZE(52, 88), 0, 9, 11, 1},
  {12, UPB_SIZE(56, 96), 0, 11, 11, 1},
  {13, UPB_SIZE(84, 152), 0, 4, 11, 3},
  {15, UPB_SIZE(60, 104), 0, 10, 11, 1},
  {16, UPB_SIZE(8, 8), 0, 0, 14, 1},
  {17, UPB_SIZE(16, 16), 0, 0, 8, 1},
  {18, UPB_SIZE(64, 112), 0, 7, 11, 1},
  {19, UPB_SIZE(68, 120), 0, 8, 11, 1},
  {20, UPB_SIZE(72, 128), 0, 0, 11, 1},
  {21, UPB_SIZE(17, 17), 0, 0, 8, 1},
};

const upb_msglayout envoy_api_v2_Listener_msginit = {
  &envoy_api_v2_Listener_submsgs[0],
  &envoy_api_v2_Listener__fields[0],
  UPB_SIZE(88, 160), 20, false,
};

static const upb_msglayout *const envoy_api_v2_Listener_DeprecatedV1_submsgs[1] = {
  &google_protobuf_BoolValue_msginit,
};

static const upb_msglayout_field envoy_api_v2_Listener_DeprecatedV1__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Listener_DeprecatedV1_msginit = {
  &envoy_api_v2_Listener_DeprecatedV1_submsgs[0],
  &envoy_api_v2_Listener_DeprecatedV1__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_api_v2_Listener_ConnectionBalanceConfig_submsgs[1] = {
  &envoy_api_v2_Listener_ConnectionBalanceConfig_ExactBalance_msginit,
};

static const upb_msglayout_field envoy_api_v2_Listener_ConnectionBalanceConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
};

const upb_msglayout envoy_api_v2_Listener_ConnectionBalanceConfig_msginit = {
  &envoy_api_v2_Listener_ConnectionBalanceConfig_submsgs[0],
  &envoy_api_v2_Listener_ConnectionBalanceConfig__fields[0],
  UPB_SIZE(8, 16), 1, false,
};

const upb_msglayout envoy_api_v2_Listener_ConnectionBalanceConfig_ExactBalance_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

