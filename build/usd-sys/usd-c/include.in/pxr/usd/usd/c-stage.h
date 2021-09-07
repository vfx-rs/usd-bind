#pragma once
#include "usd-api-export.h"

#include <pxr/base/tf/ref_ptr.h>
#include <pxr/base/tf/weak_ptr.h>
#include <pxr/usd/usd/c-prim.h>
#include <pxr/usd/usd/prim_range.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

/** \enum InitialLoadSet

Specifies the initial set of prims to load when opening a UsdStage. */
enum pxrInternal_v0_20__pxrReserved____UsdStage__InitialLoadSet_e {
    pxr_UsdStage_InitialLoadSet_LoadAll = 0,
    pxr_UsdStage_InitialLoadSet_LoadNone = 1,
};
typedef unsigned int pxr_UsdStage_InitialLoadSet;

/** \class UsdStage

The outermost container for scene description, which owns and presents
composed prims as a scenegraph, following the composition recipe
recursively described in its associated "root layer".

USD derives its persistent-storage scalability by combining and reusing
simple compositions into richer aggregates using referencing and layering
with sparse overrides.  Ultimately, every composition (i.e. "scene") is
identifiable by its root layer, i.e. the <tt>.usd</tt> file, and a scene
is instantiated in an application on a UsdStage that presents a composed
view of the scene's root layer.  Each simple composition referenced into
a larger composition could be presented on its own UsdStage, at the same
(or not) time that it is participating in the larger composition on its
own UsdStage; all of the underlying layers will be shared by the two
stages, while each maintains its own scenegraph of composed prims.

A UsdStage has sole ownership over the UsdPrim 's with which it is populated,
and retains \em shared ownership (with other stages and direct clients of
SdfLayer's, via the Sdf_LayerRegistry that underlies all SdfLayer creation
methods) of layers.  It provides roughly five categories of API that
address different aspects of scene management:

- \ref Usd_lifetimeManagement "Stage lifetime management" methods for
constructing and initially populating a UsdStage from an existing layer
file, or one that will be created as a result, in memory or on the 
filesystem.
- \ref Usd_workingSetManagement "Load/unload working set management" methods
that allow you to specify which \ref Usd_Payloads "payloads" should be
included and excluded from the stage's composition.
- \ref Usd_variantManagement "Variant management" methods to manage
policy for which variant to use when composing prims that provide
a named variant set, but do not specify a selection.
- \ref Usd_primManagement "Prim access, creation, and mutation" methods
that allow you to find, create, or remove a prim identified by a path on
the stage.  This group also provides methods for efficiently traversing the
prims on the stage.
- \ref Usd_layerManagement "Layers and EditTargets" methods provide access
to the layers in the stage's <em>root LayerStack</em> (i.e. the root layer
and all of its recursive sublayers), and the ability to set a UsdEditTarget
into which all subsequent mutations to objects associated with the stage
(e.g. prims, properties, etc) will go.
- \ref Usd_stageSerialization "Serialization" methods for "flattening" a
composition (to varying degrees), and exporting a completely flattened
view of the stage to a string or file.  These methods can be very useful
for targetted asset optimization and debugging, though care should be 
exercized with large scenes, as flattening defeats some of the benefits of
referenced scene description, and may produce very large results, 
especially in file formats that do not support data de-duplication, like
the usda ASCII format!

\section Usd_SessionLayer Stage Session Layers

Each UsdStage can possess an optional "session layer".  The purpose of
a session layer is to hold ephemeral edits that modify a UsdStage's contents
or behavior in a way that is useful to the client, but should not be
considered as permanent mutations to be recorded upon export.  A very 
common use of session layers is to make variant selections, to pick a
specific LOD or shading variation, for example.  The session layer is
also frequently used to perform interactive vising/invsning of geometry
and assets in the scene.   A session layer, if present, contributes to a 
UsdStage's identity, for purposes of stage-caching, etc. */
typedef struct pxrInternal_v0_20__pxrReserved____UsdStage_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_20__pxrReserved____UsdStage_t;
typedef pxrInternal_v0_20__pxrReserved____UsdStage_t pxr_UsdStage_t;


/** The initial set of prims to load on the stage can be specified
using the \p load parameter. \sa UsdStage::InitialLoadSet.

Note that the \p pathResolverContext passed here will apply to all path
resolutions for this stage, regardless of what other context may be
bound at resolve time. If no context is passed in here, Usd will create
one by calling \sa ArResolver::CreateDefaultContextForAsset with the
root layer's repository path if the layer has one, otherwise its real 
path. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_CreateNew(
    pxr_UsdStageRefPtr_t * * return_
    , std_string_t const * identifier
    , pxr_UsdStage_InitialLoadSet load);
#define pxr_UsdStage_CreateNew pxrInternal_v0_20__pxrReserved____UsdStage_CreateNew


/** Attempt to find a matching existing stage in a cache if
UsdStageCacheContext objects exist on the stack. Failing that, create a
new stage and recursively compose prims defined within and referenced by
the layer at \p filePath, which must already exist.

The initial set of prims to load on the stage can be specified
using the \p load parameter. \sa UsdStage::InitialLoadSet.

Note that the \p pathResolverContext passed here will apply to all path
resolutions for this stage, regardless of what other context may be
bound at resolve time. If no context is passed in here, Usd will create
one by calling \sa ArResolver::CreateDefaultContextForAsset with the
root layer's repository path if the layer has one, otherwise its real 
path. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_Open(
    pxr_UsdStageRefPtr_t * * return_
    , std_string_t const * filePath
    , pxr_UsdStage_InitialLoadSet load);
#define pxr_UsdStage_Open pxrInternal_v0_20__pxrReserved____UsdStage_Open


/** Return the root UsdPrim on this stage whose name is the root layer's
defaultPrim metadata's value.  Return an invalid prim if there is no
such prim or if the root layer's defaultPrim metadata is unset or is not
a valid prim name.  Note that this function only examines this stage's
rootLayer.  It does not consider sublayers of the rootLayer.  See also
SdfLayer::GetDefaultPrim(). */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_GetDefaultPrim(
    pxr_UsdStage_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdStage_GetDefaultPrim pxrInternal_v0_20__pxrReserved____UsdStage_GetDefaultPrim


/** Return true if this stage's root layer has an authored opinion for the
default prim layer metadata.  This is shorthand for:
\code
stage->GetRootLayer()->HasDefaultPrim();
\endcode
Note that this function only consults the stage's root layer.  To
consult a different layer, use the SdfLayer::HasDefaultPrim() API. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_HasDefaultPrim(
    pxr_UsdStage_t const * this_
    , _Bool * return_);
#define pxr_UsdStage_HasDefaultPrim pxrInternal_v0_20__pxrReserved____UsdStage_HasDefaultPrim


/** Traverse the active, loaded, defined, non-abstract prims on this stage
depth-first.

Traverse() returns a UsdPrimRange , which allows low-latency
traversal, with the ability to prune subtrees from traversal.  It
is python iterable, so in its simplest form, one can do:

\code{.py}
for prim in stage.Traverse():
    print prim.GetPath()
\endcode

If either a pre-and-post-order traversal or a traversal rooted at a
particular prim is desired, construct a UsdPrimRange directly.

This is equivalent to UsdPrimRange::Stage() .  */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_Traverse(
    pxr_UsdStage_t * this_
    , pxr_UsdPrimRange_t * * return_);
#define pxr_UsdStage_Traverse pxrInternal_v0_20__pxrReserved____UsdStage_Traverse


/** Return this stage's root session layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_GetSessionLayer(
    pxr_UsdStage_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_UsdStage_GetSessionLayer pxrInternal_v0_20__pxrReserved____UsdStage_GetSessionLayer


/** Return this stage's root layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdStage_GetRootLayer(
    pxr_UsdStage_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_UsdStage_GetRootLayer pxrInternal_v0_20__pxrReserved____UsdStage_GetRootLayer


#ifdef __cplusplus
}
#endif
