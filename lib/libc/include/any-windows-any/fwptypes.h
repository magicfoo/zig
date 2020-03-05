/*** Autogenerated by WIDL 4.12.1 from include/fwptypes.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __fwptypes_h__
#define __fwptypes_h__

/* Forward declarations */

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define FWP_BYTE_ARRAY6_SIZE 6
#define FWP_V6_ADDR_SIZE (16)
#define FWP_ACTRL_MATCH_FILTER (1)

#define FWP_OPTION_VALUE_ALLOW_MULTICAST_STATE (0)
#define FWP_OPTION_VALUE_DENY_MULTICAST_STATE  (1)
#define FWP_OPTION_VALUE_ALLOW_GLOBAL_MULTICAST_STATE (2)

#define FWP_OPTION_VALUE_DISABLE_LOOSE_SOURCE (0)
#define FWP_OPTION_VALUE_ENABLE_LOOSE_SOURCE  (1)

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define FWP_OPTION_VALUE_DISABLE_LOCAL_ONLY_MAPPING (0)
#define FWP_OPTION_VALUE_ENABLE_LOCAL_ONLY_MAPPING  (1)
#endif

#define FWP_ACTION_FLAG_TERMINATING     (0x00001000)
#define FWP_ACTION_FLAG_NON_TERMINATING (0x00002000)
#define FWP_ACTION_FLAG_CALLOUT         (0x00004000)

#define FWP_ACTION_BLOCK  (0x1 | FWP_ACTION_FLAG_TERMINATING)
#define FWP_ACTION_PERMIT (0x2 | FWP_ACTION_FLAG_TERMINATING)
#define FWP_ACTION_CALLOUT_TERMINATING (0x3 | FWP_ACTION_FLAG_CALLOUT | FWP_ACTION_FLAG_TERMINATING)
#define FWP_ACTION_CALLOUT_INSPECTION (0x4 | FWP_ACTION_FLAG_CALLOUT | FWP_ACTION_FLAG_NON_TERMINATING)
#define FWP_ACTION_CALLOUT_UNKNOWN (0x5 | FWP_ACTION_FLAG_CALLOUT)
#define FWP_ACTION_CONTINUE (0x6 | FWP_ACTION_FLAG_NON_TERMINATING)
#define FWP_ACTION_NONE (0x7)
#define FWP_ACTION_NONE_NO_MATCH (0x8)

#define FWP_CONDITION_FLAG_IS_LOOPBACK              (0x00000001)
#define FWP_CONDITION_FLAG_IS_IPSEC_SECURED         (0x00000002)
#define FWP_CONDITION_FLAG_IS_REAUTHORIZE           (0x00000004)
#define FWP_CONDITION_FLAG_IS_WILDCARD_BIND         (0x00000008)
#define FWP_CONDITION_FLAG_IS_RAW_ENDPOINT          (0x00000010)
#define FWP_CONDITION_FLAG_IS_FRAGMENT              (0x00000020)
#define FWP_CONDITION_FLAG_IS_FRAGMENT_GROUP        (0x00000040)
#define FWP_CONDITION_FLAG_IS_IPSEC_NATT_RECLASSIFY (0x00000080)
#define FWP_CONDITION_FLAG_REQUIRES_ALE_CLASSIFY    (0x00000100)
#define FWP_CONDITION_FLAG_IS_IMPLICIT_BIND         (0x00000200)
#if (NTDDI_VERSION >= NTDDI_WIN6SP1)
#define FWP_CONDITION_FLAG_IS_REASSEMBLED           (0x00000400)
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define FWP_CONDITION_FLAG_IS_NAME_APP_SPECIFIED    (0x00004000)
#define FWP_CONDITION_FLAG_IS_PROMISCUOUS           (0x00008000)
#define FWP_CONDITION_FLAG_IS_AUTH_FW               (0x00010000)
#define FWP_CONDITION_FLAG_IS_RECLASSIFY            (0x00020000)
#define FWP_CONDITION_FLAG_IS_OUTBOUND_PASS_THRU    (0x00040000)
#define FWP_CONDITION_FLAG_IS_INBOUND_PASS_THRU     (0x00080000)
#define FWP_CONDITION_FLAG_IS_CONNECTION_REDIRECTED (0x00100000)
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define FWP_CONDITION_FLAG_IS_PROXY_CONNECTION      (0x00200000)
#define FWP_CONDITION_FLAG_IS_APPCONTAINER_LOOPBACK (0x00400000)
#define FWP_CONDITION_FLAG_IS_NON_APPCONTAINER_LOOPBACK (0x00800000)
#define FWP_CONDITION_FLAG_IS_RESERVED              (0x01000000)
#define FWP_CONDITION_FLAG_IS_HONORING_POLICY_AUTHORIZE (0x02000000)
#endif

#define FWP_CONDITION_REAUTHORIZE_REASON_POLICY_CHANGE             (0x00000001)
#define FWP_CONDITION_REAUTHORIZE_REASON_NEW_ARRIVAL_INTERFACE     (0x00000002)
#define FWP_CONDITION_REAUTHORIZE_REASON_NEW_NEXTHOP_INTERFACE     (0x00000004)
#define FWP_CONDITION_REAUTHORIZE_REASON_PROFILE_CROSSING          (0x00000008)
#define FWP_CONDITION_REAUTHORIZE_REASON_CLASSIFY_COMPLETION       (0x00000010)
#define FWP_CONDITION_REAUTHORIZE_REASON_IPSEC_PROPERTIES_CHANGED  (0x00000020)
#define FWP_CONDITION_REAUTHORIZE_REASON_MID_STREAM_INSPECTION     (0x00000040)
#define FWP_CONDITION_REAUTHORIZE_REASON_SOCKET_PROPERTY_CHANGED   (0x00000080)
#define FWP_CONDITION_REAUTHORIZE_REASON_NEW_INBOUND_MCAST_BCAST_PACKET (0x00000100)

#define FWP_CONDITION_SOCKET_PROPERTY_FLAG_IS_SYSTEM_PORT_RPC      (0x00000001)
#define FWP_CONDITION_SOCKET_PROPERTY_FLAG_ALLOW_EDGE_TRAFFIC      (0x00000002)
#define FWP_CONDITION_SOCKET_PROPERTY_FLAG_DENY_EDGE_TRAFFIC       (0x00000004)

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define FWP_CONDITION_L2_IS_NATIVE_ETHERNET	 (0x00000001)
#define FWP_CONDITION_L2_IS_WIFI	         (0x00000002)
#define FWP_CONDITION_L2_IS_MOBILE_BROADBAND	 (0x00000004)
#define FWP_CONDITION_L2_IS_WIFI_DIRECT_DATA	 (0x00000008)
#define FWP_CONDITION_L2_IS_VM2VM	         (0x00000010)
#define FWP_CONDITION_L2_IS_MALFORMED_PACKET	 (0x00000020)
#define FWP_CONDITION_L2_IS_IP_FRAGMENT_GROUP (0x00000040)
#define FWP_CONDITION_L2_IF_CONNECTOR_PRESENT (0x00000080)
#endif
#endif
#endif

#define FWP_FILTER_ENUM_FLAG_BEST_TERMINATING_MATCH (0x00000001)
#define FWP_FILTER_ENUM_FLAG_SORTED                 (0x00000002)
#define FWP_FILTER_ENUM_FLAG_BOOTTIME_ONLY          (0x00000004)
#define FWP_FILTER_ENUM_FLAG_INCLUDE_BOOTTIME       (0x00000008)
#define FWP_FILTER_ENUM_FLAG_INCLUDE_DISABLED       (0x00000010)

#define FWP_FILTER_ENUM_VALID_FLAGS (FWP_FILTER_ENUM_FLAG_BEST_TERMINATING_MATCH | FWP_FILTER_ENUM_FLAG_SORTED)
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define FWP_FILTER_ENUM_FLAG_RESERVED1              (0x00000020)
#endif

#define FWP_CALLOUT_FLAG_CONDITIONAL_ON_FLOW        	(0x00000001)
#define FWP_CALLOUT_FLAG_ALLOW_OFFLOAD               (0x00000002)
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define FWP_CALLOUT_FLAG_ENABLE_COMMIT_ADD_NOTIFY    (0x00000004)
#define FWP_CALLOUT_FLAG_ALLOW_MID_STREAM_INSPECTION (0x00000008)
#define FWP_CALLOUT_FLAG_ALLOW_RECLASSIFY            (0x00000010)
#if (NTDDI_VERSION >= NTDDI_WIN8)
#define FWP_CALLOUT_FLAG_RESERVED1                   (0x00000020)
#define FWP_CALLOUT_FLAG_ALLOW_RSC                   (0x00000040)
#define FWP_CALLOUT_FLAG_ALLOW_L2_BATCH_CLASSIFY     (0x00000080)
#endif
#endif
#ifdef __midl
typedef struct _LUID {
    DWORD LowPart;
    LONG HighPart;
} LUID;
typedef struct _LUID *PLUID;
#endif

typedef UINT32 FWP_ACTION_TYPE;


typedef enum FWP_DIRECTION_ {
    FWP_DIRECTION_OUTBOUND = 0,
    FWP_DIRECTION_INBOUND = 1,
    FWP_DIRECTION_MAX = 2
} FWP_DIRECTION;

typedef enum FWP_IP_VERSION_ {
    FWP_IP_VERSION_V4 = 0,
    FWP_IP_VERSION_V6 = 1,
    FWP_IP_VERSION_NONE = 2,
    FWP_IP_VERSION_MAX = 3
} FWP_IP_VERSION;

typedef enum FWP_NE_FAMILY_ {
    FWP_AF_INET = FWP_IP_VERSION_V4,
    FWP_AF_INET6 = FWP_IP_VERSION_V6,
    FWP_AF_ETHER = FWP_IP_VERSION_NONE,
    FWP_AF_NONE = 3
} FWP_AF;

typedef enum FWP_ETHER_ENCAP_METHOD_ {
    FWP_ETHER_ENCAP_METHOD_ETHER_V2 = 0,
    FWP_ETHER_ENCAP_METHOD_SNAP = 1,
    FWP_ETHER_ENCAP_METHOD_SNAP_W_OUI_ZERO = 3
} FWP_ETHER_ENCAP_METHOD;

typedef enum FWP_DATA_TYPE_ {
    FWP_EMPTY = 0,
    FWP_UINT8 = 1,
    FWP_UINT16 = 2,
    FWP_UINT32 = 3,
    FWP_UINT64 = 4,
    FWP_INT8 = 5,
    FWP_INT16 = 6,
    FWP_INT32 = 7,
    FWP_INT64 = 8,
    FWP_FLOAT = 9,
    FWP_DOUBLE = 10,
    FWP_BYTE_ARRAY16_TYPE = 11,
    FWP_BYTE_BLOB_TYPE = 12,
    FWP_SID = 13,
    FWP_SECURITY_DESCRIPTOR_TYPE = 14,
    FWP_TOKEN_INFORMATION_TYPE = 15,
    FWP_TOKEN_ACCESS_INFORMATION_TYPE = 16,
    FWP_UNICODE_STRING_TYPE = 17,
    FWP_BYTE_ARRAY6_TYPE = 18,
    FWP_SINGLE_DATA_TYPE_MAX = 0xff,
    FWP_V4_ADDR_MASK = 0x100,
    FWP_V6_ADDR_MASK = 0x101,
    FWP_RANGE_TYPE = 0x102,
    FWP_DATA_TYPE_MAX = 0x103
} FWP_DATA_TYPE;

typedef enum FWP_MATCH_TYPE_ {
    FWP_MATCH_EQUAL = 0,
    FWP_MATCH_GREATER = 1,
    FWP_MATCH_LESS = 2,
    FWP_MATCH_GREATER_OR_EQUAL = 3,
    FWP_MATCH_LESS_OR_EQUAL = 4,
    FWP_MATCH_RANGE = 5,
    FWP_MATCH_FLAGS_ALL_SET = 6,
    FWP_MATCH_FLAGS_ANY_SET = 7,
    FWP_MATCH_FLAGS_NONE_SET = 8,
    FWP_MATCH_EQUAL_CASE_INSENSITIVE = 9,
    FWP_MATCH_NOT_EQUAL = 10,
    FWP_MATCH_TYPE_MAX = 11
} FWP_MATCH_TYPE;

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef enum FWP_VSWITCH_NETWORK_TYPE_ {
    FWP_VSWITCH_NETWORK_TYPE_UNKNOWN = 0,
    FWP_VSWITCH_NETWORK_TYPE_PRIVATE = 1,
    FWP_VSWITCH_NETWORK_TYPE_INTERNAL = 2,
    FWP_VSWITCH_NETWORK_TYPE_EXTERNAL = 3
} FWP_VSWITCH_NETWORK_TYPE;
#endif

typedef enum FWP_CLASSIFY_OPTION_TYPE_ {
    FWP_CLASSIFY_OPTION_MULTICAST_STATE = 0,
    FWP_CLASSIFY_OPTION_LOOSE_SOURCE_MAPPING = 1,
    FWP_CLASSIFY_OPTION_UNICAST_LIFETIME = 2,
    FWP_CLASSIFY_OPTION_MCAST_BCAST_LIFETIME = 3,
    FWP_CLASSIFY_OPTION_SECURE_SOCKET_SECURITY_FLAGS = 4,
    FWP_CLASSIFY_OPTION_SECURE_SOCKET_AUTHIP_MM_POLICY_KEY = 5,
    FWP_CLASSIFY_OPTION_SECURE_SOCKET_AUTHIP_QM_POLICY_KEY = 6,
    FWP_CLASSIFY_OPTION_LOCAL_ONLY_MAPPING = 7,
    FWP_CLASSIFY_OPTION_MAX = 8
} FWP_CLASSIFY_OPTION_TYPE;

typedef enum FWP_FILTER_ENUM_TYPE_ {
    FWP_FILTER_ENUM_FULLY_CONTAINED = 0,
    FWP_FILTER_ENUM_OVERLAPPING = 1,
    FWP_FILTER_ENUM_TYPE_MAX = 2
} FWP_FILTER_ENUM_TYPE;

typedef struct FWP_BYTE_ARRAY6_ {
    UINT8 byteArray6[6];
} FWP_BYTE_ARRAY6;

typedef struct FWP_BYTE_ARRAY16_ {
    UINT8 byteArray16[16];
} FWP_BYTE_ARRAY16;

typedef struct FWP_BYTE_BLOB_ {
    UINT32 size;
    UINT8 *data;
} FWP_BYTE_BLOB;

typedef struct FWP_TOKEN_INFORMATION_ {
    ULONG sidCount;
    PSID_AND_ATTRIBUTES sids;
    ULONG restrictedSidCount;
    PSID_AND_ATTRIBUTES restrictedSids;
} FWP_TOKEN_INFORMATION;

typedef struct FWP_VALUE0_ {
    FWP_DATA_TYPE type;
    __C89_NAMELESS union {
        UINT8 uint8;
        UINT16 uint16;
        UINT32 uint32;
        UINT64 *uint64;
        INT8 int8;
        INT16 int16;
        INT32 int32;
        INT64 *int64;
        float float32;
        double *double64;
        FWP_BYTE_ARRAY16 *byteArray16;
        FWP_BYTE_BLOB *byteBlob;
        SID *sid;
        FWP_BYTE_BLOB *sd;
        FWP_TOKEN_INFORMATION *tokenInformation;
        FWP_BYTE_BLOB *tokenAccessInformation;
        LPWSTR unicodeString;
        FWP_BYTE_ARRAY6 *byteArray6;
    } __C89_NAMELESSUNIONNAME;
} FWP_VALUE0;

typedef struct FWP_V4_ADDR_AND_MASK_ {
    UINT32 addr;
    UINT32 mask;
} FWP_V4_ADDR_AND_MASK;

typedef struct FWP_V6_ADDR_AND_MASK_ {
    UINT8 addr[16];
    UINT8 prefixLength;
} FWP_V6_ADDR_AND_MASK;

typedef struct FWP_RANGE0_ {
    FWP_VALUE0 valueLow;
    FWP_VALUE0 valueHigh;
} FWP_RANGE0;

typedef struct FWP_CONDITION_VALUE0_ {
    FWP_DATA_TYPE type;
    __C89_NAMELESS union {
        UINT8 uint8;
        UINT16 uint16;
        UINT32 uint32;
        UINT64 *uint64;
        INT8 int8;
        INT16 int16;
        INT32 int32;
        INT64 *int64;
        float float32;
        double *double64;
        FWP_BYTE_ARRAY16 *byteArray16;
        FWP_BYTE_BLOB *byteBlob;
        SID *sid;
        FWP_BYTE_BLOB *sd;
        FWP_TOKEN_INFORMATION *tokenInformation;
        FWP_BYTE_BLOB *tokenAccessInformation;
        LPWSTR unicodeString;
        FWP_BYTE_ARRAY6 *byteArray6;
        FWP_V4_ADDR_AND_MASK *v4AddrMask;
        FWP_V6_ADDR_AND_MASK *v6AddrMask;
        FWP_RANGE0 *rangeValue;
    } __C89_NAMELESSUNIONNAME;
} FWP_CONDITION_VALUE0;

#endif /* WINAPI_PARTITION_DESKTOP. */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __fwptypes_h__ */
