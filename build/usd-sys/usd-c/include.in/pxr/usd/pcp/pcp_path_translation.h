#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____PcpMapFunction_t_s pxrInternal_v0_21__pxrReserved____PcpMapFunction_t;
typedef pxrInternal_v0_21__pxrReserved____PcpMapFunction_t pxr_PcpMapFunction_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_t_s pxrInternal_v0_21__pxrReserved____PcpNodeRef_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef_t pxr_PcpNodeRef_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** Translates \p pathInNodeNamespace from the namespace of the prim index node
\p sourceNode to the namespace of the prim index's root node. This applies 
all necessary namespace translations.

If the path is successfully translated and \p pathWasTranslated is supplied,
it will be set to \c true. In some cases, paths may fail to translate 
because they fall outside the set of paths that are allowed by nodes in the 
prim index. For instance, for a referenced model, paths referring to 
locations outside that model will not be translated. In these cases, this 
function will return an empty SdfPath and \p pathWasTranslated will be set
to \c false.

In Sd/Csd terminology, this is forward path translation from the 
namespace of the prim spec represented by \p sourceNode to the composed 
scene namespace. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRoot(
    pxr_SdfPath_t * * return_
    , pxr_PcpNodeRef_t const * sourceNode
    , pxr_SdfPath_t const * pathInNodeNamespace
    , _Bool * pathWasTranslated);
#define pxr_PcpTranslatePathFromNodeToRoot pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRoot


/** Translates \p pathInRootNamespace from the namespace of the root of the
prim index that \p destNode belongs to to the namespace of \p destNode 
itself. This applies all necessary namespace translations.

If the path is successfully translated and \p pathWasTranslated is supplied,
it will be set to \c true. In some cases, paths may fail to translate 
because they fall outside the set of paths that are allowed by nodes in the 
prim index. For instance, for a referenced model, paths referring to 
locations outside that model will not be translated. In these cases, this 
function will return an empty SdfPath and \p pathWasTranslated will be set
to \c false.

In Sd/Csd terminology, this is reverse path translation from the
namespace of the composed scene to the namespace of the prim spec 
represented by \p destNode. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNode(
    pxr_SdfPath_t * * return_
    , pxr_PcpNodeRef_t const * destNode
    , pxr_SdfPath_t const * pathInRootNamespace
    , _Bool * pathWasTranslated);
#define pxr_PcpTranslatePathFromRootToNode pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNode


/** Same as \a PcpTranslatePathFromRootToNode, but explicitly for use when
translating paths intended for use as attribute connections or relationship
targets. The primary difference is that variant selections will never 
be included in the translated path. This is functionally equivalent to
calling StripAllVariantSelections() on the result of the referenced
function, but is more efficient. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslateTargetPathFromRootToNode(
    pxr_SdfPath_t * * return_
    , pxr_PcpNodeRef_t const * destNode
    , pxr_SdfPath_t const * pathInRootNamespace
    , _Bool * pathWasTranslated);
#define pxr_PcpTranslateTargetPathFromRootToNode pxrInternal_v0_21__pxrReserved___PcpTranslateTargetPathFromRootToNode


/** Convenience function like \a PcpTranslatePathFromRootToNode, but
takes a function rather than a node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNodeUsingFunction(
    pxr_SdfPath_t * * return_
    , pxr_PcpMapFunction_t const * mapToRoot
    , pxr_SdfPath_t const * pathInRootNamespace
    , _Bool * pathWasTranslated);
#define pxr_PcpTranslatePathFromRootToNodeUsingFunction pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromRootToNodeUsingFunction


/** Convenience function like \a PcpTranslatePathFromNodeToRoot, but
takes a function rather than a node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRootUsingFunction(
    pxr_SdfPath_t * * return_
    , pxr_PcpMapFunction_t const * mapToRoot
    , pxr_SdfPath_t const * pathInNodeNamespace
    , _Bool * pathWasTranslated);
#define pxr_PcpTranslatePathFromNodeToRootUsingFunction pxrInternal_v0_21__pxrReserved___PcpTranslatePathFromNodeToRootUsingFunction


#ifdef __cplusplus
}
#endif
