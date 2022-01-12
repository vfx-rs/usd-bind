#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class NdrProperty

Represents a property (input or output) that is part of a `NdrNode`
instance.

A property must have a name and type, but may also specify a host of
additional metadata. Instances can also be queried to determine if another
`NdrProperty` instance can be connected to it.

In almost all cases, this class will not be used directly. More specialized
properties can be created that derive from `NdrProperty`; those specialized
properties can add their own domain-specific data and methods. */
typedef struct pxrInternal_v0_21__pxrReserved____NdrProperty_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____NdrProperty_t;
typedef pxrInternal_v0_21__pxrReserved____NdrProperty_t pxr_NdrProperty_t;


#ifdef __cplusplus
}
#endif
