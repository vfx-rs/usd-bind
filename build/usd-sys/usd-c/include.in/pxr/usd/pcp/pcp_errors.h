#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \enum PcpErrorType

Enum to indicate the type represented by a Pcp error. */
enum pxrInternal_v0_21__pxrReserved____PcpErrorType_e {
    pxr_PcpErrorType_PcpErrorType_ArcCycle = 0,
    pxr_PcpErrorType_PcpErrorType_ArcPermissionDenied = 1,
    pxr_PcpErrorType_PcpErrorType_IndexCapacityExceeded = 2,
    pxr_PcpErrorType_PcpErrorType_ArcCapacityExceeded = 3,
    pxr_PcpErrorType_PcpErrorType_ArcNamespaceDepthCapacityExceeded = 4,
    pxr_PcpErrorType_PcpErrorType_InconsistentPropertyType = 5,
    pxr_PcpErrorType_PcpErrorType_InconsistentAttributeType = 6,
    pxr_PcpErrorType_PcpErrorType_InconsistentAttributeVariability = 7,
    pxr_PcpErrorType_PcpErrorType_InternalAssetPath = 8,
    pxr_PcpErrorType_PcpErrorType_InvalidPrimPath = 9,
    pxr_PcpErrorType_PcpErrorType_InvalidAssetPath = 10,
    pxr_PcpErrorType_PcpErrorType_InvalidInstanceTargetPath = 11,
    pxr_PcpErrorType_PcpErrorType_InvalidExternalTargetPath = 12,
    pxr_PcpErrorType_PcpErrorType_InvalidTargetPath = 13,
    pxr_PcpErrorType_PcpErrorType_InvalidReferenceOffset = 14,
    pxr_PcpErrorType_PcpErrorType_InvalidSublayerOffset = 15,
    pxr_PcpErrorType_PcpErrorType_InvalidSublayerOwnership = 16,
    pxr_PcpErrorType_PcpErrorType_InvalidSublayerPath = 17,
    pxr_PcpErrorType_PcpErrorType_InvalidVariantSelection = 18,
    pxr_PcpErrorType_PcpErrorType_MutedAssetPath = 19,
    pxr_PcpErrorType_PcpErrorType_OpinionAtRelocationSource = 20,
    pxr_PcpErrorType_PcpErrorType_PrimPermissionDenied = 21,
    pxr_PcpErrorType_PcpErrorType_PropertyPermissionDenied = 22,
    pxr_PcpErrorType_PcpErrorType_SublayerCycle = 23,
    pxr_PcpErrorType_PcpErrorType_TargetPermissionDenied = 24,
    pxr_PcpErrorType_PcpErrorType_UnresolvedPrimPath = 25,
};
typedef unsigned int pxr_PcpErrorType;

/** \class PcpErrorBase

Base class for all error types. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorBase_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorBase_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorBase_t pxr_PcpErrorBase_t;

/** \class PcpErrorArcCycle

Arcs between PcpNodes that form a cycle. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_t pxr_PcpErrorArcCycle_t;

/** \class PcpErrorArcPermissionDenied

Arcs that were not made between PcpNodes because of permission
restrictions. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_t pxr_PcpErrorArcPermissionDenied_t;

/** \class PcpErrorCapacityExceeded

Exceeded the capacity for composition arcs at a single site. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_t pxr_PcpErrorCapacityExceeded_t;

/** //////////////////////////////////////////////////////////////////////////// */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_t pxr_PcpErrorInconsistentPropertyBase_t;

/** \class PcpErrorInconsistentPropertyType

Properties that have specs with conflicting definitions. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_t pxr_PcpErrorInconsistentPropertyType_t;

/** \class PcpErrorInconsistentAttributeType

Attributes that have specs with conflicting definitions. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_t pxr_PcpErrorInconsistentAttributeType_t;

/** \class PcpErrorInconsistentAttributeVariability

Attributes that have specs with conflicting variability. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_t pxr_PcpErrorInconsistentAttributeVariability_t;

/** \class PcpErrorInternalAssetPath

Error about an arc that is prohibited due to being internal to an asset. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_t pxr_PcpErrorInternalAssetPath_t;

/** \class PcpErrorInvalidPrimPath

Invalid prim paths used by references or payloads. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_t pxr_PcpErrorInvalidPrimPath_t;

typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_t pxr_PcpErrorInvalidAssetPathBase_t;

/** \class PcpErrorInvalidAssetPath

Invalid asset paths used by references or payloads. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_t pxr_PcpErrorInvalidAssetPath_t;

/** \class PcpErrorMutedAssetPath

Muted asset paths used by references or payloads. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_t pxr_PcpErrorMutedAssetPath_t;

/** \class PcpErrorTargetPathBase

Base class for composition errors related to target or connection paths. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_t pxr_PcpErrorTargetPathBase_t;

/** \class PcpErrorInvalidInstanceTargetPath

Invalid target or connection path authored in an inherited
class that points to an instance of that class. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_t pxr_PcpErrorInvalidInstanceTargetPath_t;

/** \class PcpErrorInvalidExternalTargetPath

Invalid target or connection path in some scope that points to
an object outside of that scope. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_t pxr_PcpErrorInvalidExternalTargetPath_t;

/** \class PcpErrorInvalidTargetPath

Invalid target or connection path. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_t pxr_PcpErrorInvalidTargetPath_t;

/** \class PcpErrorInvalidSublayerOffset

Sublayers that use invalid layer offsets. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_t pxr_PcpErrorInvalidSublayerOffset_t;

/** \class PcpErrorInvalidReferenceOffset

Sublayers that use invalid layer offsets. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_t pxr_PcpErrorInvalidReferenceOffset_t;

/** \class PcpErrorInvalidSublayerOwnership

Sibling layers that have the same owner. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_t pxr_PcpErrorInvalidSublayerOwnership_t;

/** \class PcpErrorInvalidSublayerPath

Asset paths that could not be both resolved and loaded. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_t pxr_PcpErrorInvalidSublayerPath_t;

/** \class PcpErrorInvalidVariantSelection

Invalid variant selections. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_t pxr_PcpErrorInvalidVariantSelection_t;

/** \class PcpErrorOpinionAtRelocationSource

Opinions were found at a relocation source path. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_t pxr_PcpErrorOpinionAtRelocationSource_t;

/** \class PcpErrorPrimPermissionDenied

Layers with illegal opinions about private prims. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_t pxr_PcpErrorPrimPermissionDenied_t;

/** \class PcpErrorPropertyPermissionDenied

Layers with illegal opinions about private properties. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_t pxr_PcpErrorPropertyPermissionDenied_t;

/** \class PcpErrorSublayerCycle

Layers that recursively sublayer themselves. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_t pxr_PcpErrorSublayerCycle_t;

/** \class PcpErrorTargetPermissionDenied

Paths with illegal opinions about private targets. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_t pxr_PcpErrorTargetPermissionDenied_t;

/** \class PcpErrorUnresolvedPrimPath

Asset paths that could not be both resolved and loaded. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_t;
typedef pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_t pxr_PcpErrorUnresolvedPrimPath_t;


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorBase_dtor(
    pxr_PcpErrorBase_t * this_);
#define pxr_PcpErrorBase_dtor pxrInternal_v0_21__pxrReserved____PcpErrorBase_dtor


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorBase_ToString(
    pxr_PcpErrorBase_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorBase_ToString pxrInternal_v0_21__pxrReserved____PcpErrorBase_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorBase_ShouldReportAtMostOnce(
    pxr_PcpErrorBase_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorBase_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorBase_ShouldReportAtMostOnce


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_ToString(
    pxr_PcpErrorArcCycle_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorArcCycle_ToString pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_ShouldReportAtMostOnce(
    pxr_PcpErrorArcCycle_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorArcCycle_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_dtor(
    pxr_PcpErrorArcCycle_t * this_);
#define pxr_PcpErrorArcCycle_dtor pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_copy(
    pxr_PcpErrorArcCycle_t * * this_
    , pxr_PcpErrorArcCycle_t const * rhs);
#define pxr_PcpErrorArcCycle_copy pxrInternal_v0_21__pxrReserved____PcpErrorArcCycle_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_ToString(
    pxr_PcpErrorArcPermissionDenied_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorArcPermissionDenied_ToString pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_ShouldReportAtMostOnce(
    pxr_PcpErrorArcPermissionDenied_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorArcPermissionDenied_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_dtor(
    pxr_PcpErrorArcPermissionDenied_t * this_);
#define pxr_PcpErrorArcPermissionDenied_dtor pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_copy(
    pxr_PcpErrorArcPermissionDenied_t * * this_
    , pxr_PcpErrorArcPermissionDenied_t const * rhs);
#define pxr_PcpErrorArcPermissionDenied_copy pxrInternal_v0_21__pxrReserved____PcpErrorArcPermissionDenied_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_ToString(
    pxr_PcpErrorCapacityExceeded_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorCapacityExceeded_ToString pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_ShouldReportAtMostOnce(
    pxr_PcpErrorCapacityExceeded_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorCapacityExceeded_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_dtor(
    pxr_PcpErrorCapacityExceeded_t * this_);
#define pxr_PcpErrorCapacityExceeded_dtor pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_copy(
    pxr_PcpErrorCapacityExceeded_t * * this_
    , pxr_PcpErrorCapacityExceeded_t const * rhs);
#define pxr_PcpErrorCapacityExceeded_copy pxrInternal_v0_21__pxrReserved____PcpErrorCapacityExceeded_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_ToString(
    pxr_PcpErrorInconsistentPropertyBase_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInconsistentPropertyBase_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_ShouldReportAtMostOnce(
    pxr_PcpErrorInconsistentPropertyBase_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInconsistentPropertyBase_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_dtor(
    pxr_PcpErrorInconsistentPropertyBase_t * this_);
#define pxr_PcpErrorInconsistentPropertyBase_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyBase_dtor


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_ToString(
    pxr_PcpErrorInconsistentPropertyType_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInconsistentPropertyType_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_ShouldReportAtMostOnce(
    pxr_PcpErrorInconsistentPropertyType_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInconsistentPropertyType_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_dtor(
    pxr_PcpErrorInconsistentPropertyType_t * this_);
#define pxr_PcpErrorInconsistentPropertyType_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_copy(
    pxr_PcpErrorInconsistentPropertyType_t * * this_
    , pxr_PcpErrorInconsistentPropertyType_t const * rhs);
#define pxr_PcpErrorInconsistentPropertyType_copy pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentPropertyType_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_ToString(
    pxr_PcpErrorInconsistentAttributeType_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInconsistentAttributeType_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_ShouldReportAtMostOnce(
    pxr_PcpErrorInconsistentAttributeType_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInconsistentAttributeType_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_dtor(
    pxr_PcpErrorInconsistentAttributeType_t * this_);
#define pxr_PcpErrorInconsistentAttributeType_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_copy(
    pxr_PcpErrorInconsistentAttributeType_t * * this_
    , pxr_PcpErrorInconsistentAttributeType_t const * rhs);
#define pxr_PcpErrorInconsistentAttributeType_copy pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeType_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_ToString(
    pxr_PcpErrorInconsistentAttributeVariability_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInconsistentAttributeVariability_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_ShouldReportAtMostOnce(
    pxr_PcpErrorInconsistentAttributeVariability_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInconsistentAttributeVariability_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_dtor(
    pxr_PcpErrorInconsistentAttributeVariability_t * this_);
#define pxr_PcpErrorInconsistentAttributeVariability_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_copy(
    pxr_PcpErrorInconsistentAttributeVariability_t * * this_
    , pxr_PcpErrorInconsistentAttributeVariability_t const * rhs);
#define pxr_PcpErrorInconsistentAttributeVariability_copy pxrInternal_v0_21__pxrReserved____PcpErrorInconsistentAttributeVariability_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_ToString(
    pxr_PcpErrorInternalAssetPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInternalAssetPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_ShouldReportAtMostOnce(
    pxr_PcpErrorInternalAssetPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInternalAssetPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_dtor(
    pxr_PcpErrorInternalAssetPath_t * this_);
#define pxr_PcpErrorInternalAssetPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_copy(
    pxr_PcpErrorInternalAssetPath_t * * this_
    , pxr_PcpErrorInternalAssetPath_t const * rhs);
#define pxr_PcpErrorInternalAssetPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorInternalAssetPath_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_ToString(
    pxr_PcpErrorInvalidPrimPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidPrimPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidPrimPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidPrimPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_dtor(
    pxr_PcpErrorInvalidPrimPath_t * this_);
#define pxr_PcpErrorInvalidPrimPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_copy(
    pxr_PcpErrorInvalidPrimPath_t * * this_
    , pxr_PcpErrorInvalidPrimPath_t const * rhs);
#define pxr_PcpErrorInvalidPrimPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidPrimPath_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_ToString(
    pxr_PcpErrorInvalidAssetPathBase_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidAssetPathBase_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidAssetPathBase_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidAssetPathBase_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_dtor(
    pxr_PcpErrorInvalidAssetPathBase_t * this_);
#define pxr_PcpErrorInvalidAssetPathBase_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPathBase_dtor


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_ToString(
    pxr_PcpErrorInvalidAssetPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidAssetPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidAssetPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidAssetPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_dtor(
    pxr_PcpErrorInvalidAssetPath_t * this_);
#define pxr_PcpErrorInvalidAssetPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_copy(
    pxr_PcpErrorInvalidAssetPath_t * * this_
    , pxr_PcpErrorInvalidAssetPath_t const * rhs);
#define pxr_PcpErrorInvalidAssetPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidAssetPath_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_ToString(
    pxr_PcpErrorMutedAssetPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorMutedAssetPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_ShouldReportAtMostOnce(
    pxr_PcpErrorMutedAssetPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorMutedAssetPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_dtor(
    pxr_PcpErrorMutedAssetPath_t * this_);
#define pxr_PcpErrorMutedAssetPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_copy(
    pxr_PcpErrorMutedAssetPath_t * * this_
    , pxr_PcpErrorMutedAssetPath_t const * rhs);
#define pxr_PcpErrorMutedAssetPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorMutedAssetPath_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_ToString(
    pxr_PcpErrorTargetPathBase_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorTargetPathBase_ToString pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_ShouldReportAtMostOnce(
    pxr_PcpErrorTargetPathBase_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorTargetPathBase_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_dtor(
    pxr_PcpErrorTargetPathBase_t * this_);
#define pxr_PcpErrorTargetPathBase_dtor pxrInternal_v0_21__pxrReserved____PcpErrorTargetPathBase_dtor


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_ToString(
    pxr_PcpErrorInvalidInstanceTargetPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidInstanceTargetPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidInstanceTargetPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidInstanceTargetPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_dtor(
    pxr_PcpErrorInvalidInstanceTargetPath_t * this_);
#define pxr_PcpErrorInvalidInstanceTargetPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_copy(
    pxr_PcpErrorInvalidInstanceTargetPath_t * * this_
    , pxr_PcpErrorInvalidInstanceTargetPath_t const * rhs);
#define pxr_PcpErrorInvalidInstanceTargetPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidInstanceTargetPath_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_ToString(
    pxr_PcpErrorInvalidExternalTargetPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidExternalTargetPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidExternalTargetPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidExternalTargetPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_dtor(
    pxr_PcpErrorInvalidExternalTargetPath_t * this_);
#define pxr_PcpErrorInvalidExternalTargetPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_copy(
    pxr_PcpErrorInvalidExternalTargetPath_t * * this_
    , pxr_PcpErrorInvalidExternalTargetPath_t const * rhs);
#define pxr_PcpErrorInvalidExternalTargetPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidExternalTargetPath_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_ToString(
    pxr_PcpErrorInvalidTargetPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidTargetPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidTargetPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidTargetPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_dtor(
    pxr_PcpErrorInvalidTargetPath_t * this_);
#define pxr_PcpErrorInvalidTargetPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_copy(
    pxr_PcpErrorInvalidTargetPath_t * * this_
    , pxr_PcpErrorInvalidTargetPath_t const * rhs);
#define pxr_PcpErrorInvalidTargetPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidTargetPath_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_ToString(
    pxr_PcpErrorInvalidSublayerOffset_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidSublayerOffset_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidSublayerOffset_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidSublayerOffset_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_dtor(
    pxr_PcpErrorInvalidSublayerOffset_t * this_);
#define pxr_PcpErrorInvalidSublayerOffset_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_copy(
    pxr_PcpErrorInvalidSublayerOffset_t * * this_
    , pxr_PcpErrorInvalidSublayerOffset_t const * rhs);
#define pxr_PcpErrorInvalidSublayerOffset_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOffset_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_ToString(
    pxr_PcpErrorInvalidReferenceOffset_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidReferenceOffset_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidReferenceOffset_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidReferenceOffset_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_dtor(
    pxr_PcpErrorInvalidReferenceOffset_t * this_);
#define pxr_PcpErrorInvalidReferenceOffset_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_copy(
    pxr_PcpErrorInvalidReferenceOffset_t * * this_
    , pxr_PcpErrorInvalidReferenceOffset_t const * rhs);
#define pxr_PcpErrorInvalidReferenceOffset_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidReferenceOffset_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_ToString(
    pxr_PcpErrorInvalidSublayerOwnership_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidSublayerOwnership_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidSublayerOwnership_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidSublayerOwnership_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_dtor(
    pxr_PcpErrorInvalidSublayerOwnership_t * this_);
#define pxr_PcpErrorInvalidSublayerOwnership_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_copy(
    pxr_PcpErrorInvalidSublayerOwnership_t * * this_
    , pxr_PcpErrorInvalidSublayerOwnership_t const * rhs);
#define pxr_PcpErrorInvalidSublayerOwnership_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerOwnership_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_ToString(
    pxr_PcpErrorInvalidSublayerPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidSublayerPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidSublayerPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidSublayerPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_dtor(
    pxr_PcpErrorInvalidSublayerPath_t * this_);
#define pxr_PcpErrorInvalidSublayerPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_copy(
    pxr_PcpErrorInvalidSublayerPath_t * * this_
    , pxr_PcpErrorInvalidSublayerPath_t const * rhs);
#define pxr_PcpErrorInvalidSublayerPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidSublayerPath_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_ToString(
    pxr_PcpErrorInvalidVariantSelection_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorInvalidVariantSelection_ToString pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_ShouldReportAtMostOnce(
    pxr_PcpErrorInvalidVariantSelection_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorInvalidVariantSelection_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_dtor(
    pxr_PcpErrorInvalidVariantSelection_t * this_);
#define pxr_PcpErrorInvalidVariantSelection_dtor pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_copy(
    pxr_PcpErrorInvalidVariantSelection_t * * this_
    , pxr_PcpErrorInvalidVariantSelection_t const * rhs);
#define pxr_PcpErrorInvalidVariantSelection_copy pxrInternal_v0_21__pxrReserved____PcpErrorInvalidVariantSelection_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_ToString(
    pxr_PcpErrorOpinionAtRelocationSource_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorOpinionAtRelocationSource_ToString pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_ShouldReportAtMostOnce(
    pxr_PcpErrorOpinionAtRelocationSource_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorOpinionAtRelocationSource_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_dtor(
    pxr_PcpErrorOpinionAtRelocationSource_t * this_);
#define pxr_PcpErrorOpinionAtRelocationSource_dtor pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_copy(
    pxr_PcpErrorOpinionAtRelocationSource_t * * this_
    , pxr_PcpErrorOpinionAtRelocationSource_t const * rhs);
#define pxr_PcpErrorOpinionAtRelocationSource_copy pxrInternal_v0_21__pxrReserved____PcpErrorOpinionAtRelocationSource_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_ToString(
    pxr_PcpErrorPrimPermissionDenied_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorPrimPermissionDenied_ToString pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_ShouldReportAtMostOnce(
    pxr_PcpErrorPrimPermissionDenied_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorPrimPermissionDenied_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_dtor(
    pxr_PcpErrorPrimPermissionDenied_t * this_);
#define pxr_PcpErrorPrimPermissionDenied_dtor pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_copy(
    pxr_PcpErrorPrimPermissionDenied_t * * this_
    , pxr_PcpErrorPrimPermissionDenied_t const * rhs);
#define pxr_PcpErrorPrimPermissionDenied_copy pxrInternal_v0_21__pxrReserved____PcpErrorPrimPermissionDenied_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_ToString(
    pxr_PcpErrorPropertyPermissionDenied_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorPropertyPermissionDenied_ToString pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_ShouldReportAtMostOnce(
    pxr_PcpErrorPropertyPermissionDenied_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorPropertyPermissionDenied_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_dtor(
    pxr_PcpErrorPropertyPermissionDenied_t * this_);
#define pxr_PcpErrorPropertyPermissionDenied_dtor pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_copy(
    pxr_PcpErrorPropertyPermissionDenied_t * * this_
    , pxr_PcpErrorPropertyPermissionDenied_t const * rhs);
#define pxr_PcpErrorPropertyPermissionDenied_copy pxrInternal_v0_21__pxrReserved____PcpErrorPropertyPermissionDenied_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_ToString(
    pxr_PcpErrorSublayerCycle_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorSublayerCycle_ToString pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_ShouldReportAtMostOnce(
    pxr_PcpErrorSublayerCycle_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorSublayerCycle_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_dtor(
    pxr_PcpErrorSublayerCycle_t * this_);
#define pxr_PcpErrorSublayerCycle_dtor pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_copy(
    pxr_PcpErrorSublayerCycle_t * * this_
    , pxr_PcpErrorSublayerCycle_t const * rhs);
#define pxr_PcpErrorSublayerCycle_copy pxrInternal_v0_21__pxrReserved____PcpErrorSublayerCycle_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_ToString(
    pxr_PcpErrorTargetPermissionDenied_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorTargetPermissionDenied_ToString pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_ShouldReportAtMostOnce(
    pxr_PcpErrorTargetPermissionDenied_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorTargetPermissionDenied_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_dtor(
    pxr_PcpErrorTargetPermissionDenied_t * this_);
#define pxr_PcpErrorTargetPermissionDenied_dtor pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_copy(
    pxr_PcpErrorTargetPermissionDenied_t * * this_
    , pxr_PcpErrorTargetPermissionDenied_t const * rhs);
#define pxr_PcpErrorTargetPermissionDenied_copy pxrInternal_v0_21__pxrReserved____PcpErrorTargetPermissionDenied_copy


/** Converts error to string message. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_ToString(
    pxr_PcpErrorUnresolvedPrimPath_t const * this_
    , std_string_t * * return_);
#define pxr_PcpErrorUnresolvedPrimPath_ToString pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_ToString


/** Return true if this type of error should be reported at most
once for a given prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_ShouldReportAtMostOnce(
    pxr_PcpErrorUnresolvedPrimPath_t const * this_
    , _Bool * return_);
#define pxr_PcpErrorUnresolvedPrimPath_ShouldReportAtMostOnce pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_ShouldReportAtMostOnce


/** Destructor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_dtor(
    pxr_PcpErrorUnresolvedPrimPath_t * this_);
#define pxr_PcpErrorUnresolvedPrimPath_dtor pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_copy(
    pxr_PcpErrorUnresolvedPrimPath_t * * this_
    , pxr_PcpErrorUnresolvedPrimPath_t const * rhs);
#define pxr_PcpErrorUnresolvedPrimPath_copy pxrInternal_v0_21__pxrReserved____PcpErrorUnresolvedPrimPath_copy


#ifdef __cplusplus
}
#endif
