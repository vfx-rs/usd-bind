#pragma once
#include "usd-api-export.h"

#include <pxr/usd/sdf/sdf_types.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfSpec_t_s pxrInternal_v0_21__pxrReserved____SdfSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSpec_t pxr_SdfSpec_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfType_t_s pxrInternal_v0_21__pxrReserved____TfType_t;
typedef pxrInternal_v0_21__pxrReserved____TfType_t pxr_TfType_t;

/** \class SdfSpecTypeRegistration

Provides functions to register spec types with the runtime typing system
used to cast between C++ spec types. Implementations of C++ spec types
should use as follows:

For a concrete spec type that corresponds to a specific SdfSpecType:
TF_REGISTRY_FUNCTION(SdfSpecTypeRegistration) {
   SdfSpecTypeRegistration::RegisterSpecType<MyPrimSpec>();
}

For an abstract spec type that has no corresponding SdfSpecType:
TF_REGISTRY_FUNCTION(SdfSpecTypeRegistration) {
   SdfSpecTypeRegistration::RegisterAbstractSpecType<MyPropertySpec>();
} */
typedef struct pxrInternal_v0_21__pxrReserved____SdfSpecTypeRegistration_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfSpecTypeRegistration_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSpecTypeRegistration_t pxr_SdfSpecTypeRegistration_t;

typedef struct pxrInternal_v0_21__pxrReserved____Sdf_SpecType_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____Sdf_SpecType_t;
typedef pxrInternal_v0_21__pxrReserved____Sdf_SpecType_t pxr_Sdf_SpecType_t;


#ifdef __cplusplus
}
#endif
