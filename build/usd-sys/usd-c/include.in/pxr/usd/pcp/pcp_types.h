#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \enum PcpArcType

Describes the type of arc connecting two nodes in the prim index. */
enum pxrInternal_v0_21__pxrReserved____PcpArcType_e {
    pxr_PcpArcType_PcpArcTypeRoot = 0,
    pxr_PcpArcType_PcpArcTypeInherit = 1,
    pxr_PcpArcType_PcpArcTypeVariant = 2,
    pxr_PcpArcType_PcpArcTypeRelocate = 3,
    pxr_PcpArcType_PcpArcTypeReference = 4,
    pxr_PcpArcType_PcpArcTypePayload = 5,
    pxr_PcpArcType_PcpArcTypeSpecialize = 6,
    pxr_PcpArcType_PcpNumArcTypes = 7,
};
typedef unsigned int pxr_PcpArcType;
/** \enum PcpRangeType */
enum pxrInternal_v0_21__pxrReserved____PcpRangeType_e {
    pxr_PcpRangeType_PcpRangeTypeRoot = 0,
    pxr_PcpRangeType_PcpRangeTypeInherit = 1,
    pxr_PcpRangeType_PcpRangeTypeVariant = 2,
    pxr_PcpRangeType_PcpRangeTypeReference = 3,
    pxr_PcpRangeType_PcpRangeTypePayload = 4,
    pxr_PcpRangeType_PcpRangeTypeSpecialize = 5,
    pxr_PcpRangeType_PcpRangeTypeAll = 6,
    pxr_PcpRangeType_PcpRangeTypeWeakerThanRoot = 7,
    pxr_PcpRangeType_PcpRangeTypeStrongerThanPayload = 8,
    pxr_PcpRangeType_PcpRangeTypeInvalid = 9,
};
typedef unsigned int pxr_PcpRangeType;

/** \struct PcpSiteTrackerSegment

Used to keep track of which sites have been visited and through
what type of arcs.  */
typedef struct pxrInternal_v0_21__pxrReserved____PcpSiteTrackerSegment_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpSiteTrackerSegment_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSiteTrackerSegment_t pxr_PcpSiteTrackerSegment_t;

typedef struct pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef_t;
typedef pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef_t pxr_Pcp_SdSiteRef_t;

typedef struct pxrInternal_v0_21__pxrReserved____Pcp_CompressedSdSite_t_s {
    char _unused;
} USD_CPPMM_ALIGN(2) pxrInternal_v0_21__pxrReserved____Pcp_CompressedSdSite_t;
typedef pxrInternal_v0_21__pxrReserved____Pcp_CompressedSdSite_t pxr_Pcp_CompressedSdSite_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef__eq(
    pxr_Pcp_SdSiteRef_t const * this_
    , _Bool * return_
    , pxr_Pcp_SdSiteRef_t const * other);
#define pxr_Pcp_SdSiteRef__eq pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef_operator_(
    pxr_Pcp_SdSiteRef_t const * this_
    , _Bool * return_
    , pxr_Pcp_SdSiteRef_t const * other);
#define pxr_Pcp_SdSiteRef_operator_ pxrInternal_v0_21__pxrReserved____Pcp_SdSiteRef_operator_


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Pcp_CompressedSdSite_ctor(
    pxr_Pcp_CompressedSdSite_t * * this_
    , size_t nodeIndex_
    , size_t layerIndex_);
#define pxr_Pcp_CompressedSdSite_ctor pxrInternal_v0_21__pxrReserved____Pcp_CompressedSdSite_ctor


/** Returns true if \p arcType represents an inherit arc, false
otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsInheritArc(
    _Bool * return_
    , pxr_PcpArcType arcType);
#define pxr_PcpIsInheritArc pxrInternal_v0_21__pxrReserved___PcpIsInheritArc


/** Returns true if \p arcType represents a specialize arc, false
otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsSpecializeArc(
    _Bool * return_
    , pxr_PcpArcType arcType);
#define pxr_PcpIsSpecializeArc pxrInternal_v0_21__pxrReserved___PcpIsSpecializeArc


/** Returns true if \p arcType represents a class-based 
composition arc, false otherwise.

The key characteristic of these arcs is that they imply 
additional sources of opinions outside of the site where 
the arc is introduced. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsClassBasedArc(
    _Bool * return_
    , pxr_PcpArcType arcType);
#define pxr_PcpIsClassBasedArc pxrInternal_v0_21__pxrReserved___PcpIsClassBasedArc


#ifdef __cplusplus
}
#endif
