#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct std__vector_pxr__SdfPath__t_s std__vector_pxr__SdfPath__t;
typedef std__vector_pxr__SdfPath__t std_SdfPathVector_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_t_s pxrInternal_v0_21__pxrReserved____PcpNodeRef_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef_t pxr_PcpNodeRef_t;

/** \struct PcpSourceArcInfo

Information about the source of the target of an arc.
All arcs have a layer that the arc comes from. References and payloads
have a resolved layer offset and authored asset path as well. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_t;
typedef pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_t pxr_PcpSourceArcInfo_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_copy(
    pxr_PcpSourceArcInfo_t * * this_
    , pxr_PcpSourceArcInfo_t const * rhs);
#define pxr_PcpSourceArcInfo_copy pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo__assign(
    pxr_PcpSourceArcInfo_t * this_
    , pxr_PcpSourceArcInfo_t * * return_
    , pxr_PcpSourceArcInfo_t const * rhs);
#define pxr_PcpSourceArcInfo__assign pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_dtor(
    pxr_PcpSourceArcInfo_t * this_);
#define pxr_PcpSourceArcInfo_dtor pxrInternal_v0_21__pxrReserved____PcpSourceArcInfo_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteHasPrimSpecs(
    _Bool * return_
    , pxr_PcpNodeRef_t const * node);
#define pxr_PcpComposeSiteHasPrimSpecs pxrInternal_v0_21__pxrReserved___PcpComposeSiteHasPrimSpecs


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteHasSymmetry(
    _Bool * return_
    , pxr_PcpNodeRef_t const * node);
#define pxr_PcpComposeSiteHasSymmetry pxrInternal_v0_21__pxrReserved___PcpComposeSiteHasSymmetry


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteInherits(
    pxr_PcpNodeRef_t const * node
    , std_SdfPathVector_t * result);
#define pxr_PcpComposeSiteInherits pxrInternal_v0_21__pxrReserved___PcpComposeSiteInherits


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteSpecializes(
    pxr_PcpNodeRef_t const * node
    , std_SdfPathVector_t * result);
#define pxr_PcpComposeSiteSpecializes pxrInternal_v0_21__pxrReserved___PcpComposeSiteSpecializes


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSets(
    pxr_PcpNodeRef_t const * node
    , std_vector_string_t * result);
#define pxr_PcpComposeSiteVariantSets pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSets


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSelection(
    _Bool * return_
    , pxr_PcpNodeRef_t const * node
    , std_string_t const * vsetName
    , std_string_t * result);
#define pxr_PcpComposeSiteVariantSelection pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSelection


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSelections(
    pxr_PcpNodeRef_t const * node
    , std_map_string_string_t * result);
#define pxr_PcpComposeSiteVariantSelections pxrInternal_v0_21__pxrReserved___PcpComposeSiteVariantSelections


#ifdef __cplusplus
}
#endif
