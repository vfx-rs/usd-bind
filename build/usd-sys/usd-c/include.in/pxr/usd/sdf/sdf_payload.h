#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class SdfPayload

Represents a payload and all its meta data.

A payload represents a prim reference to an external layer.  A payload
is similar to a prim reference (see SdfReference) with the major
difference that payloads are explicitly loaded by the user.

Unloaded payloads represent a boundary that lazy composition and
system behaviors will not traverse across, providing a user-visible
way to manage the working set of the scene. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfPayload_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfPayload_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPayload_t pxr_SdfPayload_t;


#ifdef __cplusplus
}
#endif
