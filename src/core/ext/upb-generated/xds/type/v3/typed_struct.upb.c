/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/type/v3/typed_struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "xds/type/v3/typed_struct.upb.h"
#include "validate/validate.upb.h"
#include "google/protobuf/struct.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const xds_type_v3_TypedStruct_submsgs[1] = {
  &google_protobuf_Struct_msginit,
};

static const upb_msglayout_field xds_type_v3_TypedStruct__fields[2] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(12, 24), 1, 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout xds_type_v3_TypedStruct_msginit = {
  &xds_type_v3_TypedStruct_submsgs[0],
  &xds_type_v3_TypedStruct__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

#include "upb/port_undef.inc"
