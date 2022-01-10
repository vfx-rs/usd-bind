#pragma once
#include "usd-api-export.h"

#include <pxr/base/tf/tf_token.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__t_s pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__t pxr_UsdStageRefPtr_t;
typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrim_t_s pxrInternal_v0_21__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrim_t pxr_UsdPrim_t;
typedef struct pxrInternal_v0_21__pxrReserved____ArResolverContext_t_s pxrInternal_v0_21__pxrReserved____ArResolverContext_t;
typedef pxrInternal_v0_21__pxrReserved____ArResolverContext_t pxr_ArResolverContext_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrimRange_t_s pxrInternal_v0_21__pxrReserved____UsdPrimRange_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrimRange_t pxr_UsdPrimRange_t;

/** \enum InitialLoadSet

Specifies the initial set of prims to load when opening a UsdStage. */
enum pxrInternal_v0_21__pxrReserved____UsdStage__InitialLoadSet_e {
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
for targeted asset optimization and debugging, though care should be
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
typedef struct pxrInternal_v0_21__pxrReserved____UsdStage_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____UsdStage_t;
typedef pxrInternal_v0_21__pxrReserved____UsdStage_t pxr_UsdStage_t;


/** The initial set of prims to load on the stage can be specified
using the \p load parameter. \sa UsdStage::InitialLoadSet.

If \p pathResolverContext is provided it will be bound when creating the
root layer at \p identifier and whenever asset path resolution is done
for this stage, regardless of what other context may be bound at that
time. Otherwise Usd will create the root layer with no context bound,
then create a context for all future asset path resolution for the stage
by calling ArResolver::CreateDefaultContextForAsset with the root
layer's repository path if the layer has one, otherwise its resolved
path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_CreateNew(
    pxr_UsdStageRefPtr_t * * return_
    , std_string_t const * identifier
    , pxr_UsdStage_InitialLoadSet load);
#define pxr_UsdStage_CreateNew pxrInternal_v0_21__pxrReserved____UsdStage_CreateNew


/** Creates a new stage only in memory, analogous to creating an
anonymous SdfLayer.

If \p pathResolverContext is provided it will be bound when creating the
root layer at \p identifier and whenever asset path resolution is done
for this stage, regardless of what other context may be bound at that
time. Otherwise Usd will create the root layer with no context bound,
then create a context for all future asset path resolution for the stage
by calling ArResolver::CreateDefaultContext.

The initial set of prims to load on the stage can be specified
using the \p load parameter. \sa UsdStage::InitialLoadSet.

Invoking an overload that does not take a \p sessionLayer argument will
create a stage with an anonymous in-memory session layer.  To create a
stage without a session layer, pass TfNullPtr (or None in python) as the
\p sessionLayer argument. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_CreateInMemory(
    pxr_UsdStageRefPtr_t * * return_
    , pxr_UsdStage_InitialLoadSet load);
#define pxr_UsdStage_CreateInMemory pxrInternal_v0_21__pxrReserved____UsdStage_CreateInMemory


/** Attempt to find a matching existing stage in a cache if
UsdStageCacheContext objects exist on the stack. Failing that, create a
new stage and recursively compose prims defined within and referenced by
the layer at \p filePath, which must already exist.

The initial set of prims to load on the stage can be specified
using the \p load parameter. \sa UsdStage::InitialLoadSet.

If \p pathResolverContext is provided it will be bound when opening the
root layer at \p filePath and whenever asset path resolution is done for
this stage, regardless of what other context may be bound at that
time. Otherwise Usd will open the root layer with no context bound, then
create a context for all future asset path resolution for the stage by
calling ArResolver::CreateDefaultContextForAsset with the layer's
repository path if the layer has one, otherwise its resolved path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_Open(
    pxr_UsdStageRefPtr_t * * return_
    , std_string_t const * filePath
    , pxr_UsdStage_InitialLoadSet load);
#define pxr_UsdStage_Open pxrInternal_v0_21__pxrReserved____UsdStage_Open


/** \overload */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_Open_1(
    pxr_UsdStageRefPtr_t * * return_
    , std_string_t const * filePath
    , pxr_ArResolverContext_t const * pathResolverContext
    , pxr_UsdStage_InitialLoadSet load);
#define pxr_UsdStage_Open_1 pxrInternal_v0_21__pxrReserved____UsdStage_Open_1


/** Calls SdfLayer::Save on all dirty layers contributing to this stage
except session layers and sublayers of session layers.

This function will emit a warning and skip each dirty anonymous
layer it encounters, since anonymous layers cannot be saved with
SdfLayer::Save. These layers must be manually exported by calling
SdfLayer::Export. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_Save(
    pxr_UsdStage_t * this_);
#define pxr_UsdStage_Save pxrInternal_v0_21__pxrReserved____UsdStage_Save


/** Calls SdfLayer::Save on all dirty session layers and sublayers of 
session layers contributing to this stage.

This function will emit a warning and skip each dirty anonymous
layer it encounters, since anonymous layers cannot be saved with
SdfLayer::Save. These layers must be manually exported by calling
SdfLayer::Export. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_SaveSessionLayers(
    pxr_UsdStage_t * this_);
#define pxr_UsdStage_SaveSessionLayers pxrInternal_v0_21__pxrReserved____UsdStage_SaveSessionLayers


/** Return the root UsdPrim on this stage whose name is the root layer's
defaultPrim metadata's value.  Return an invalid prim if there is no
such prim or if the root layer's defaultPrim metadata is unset or is not
a valid prim name.  Note that this function only examines this stage's
rootLayer.  It does not consider sublayers of the rootLayer.  See also
SdfLayer::GetDefaultPrim(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_GetDefaultPrim(
    pxr_UsdStage_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdStage_GetDefaultPrim pxrInternal_v0_21__pxrReserved____UsdStage_GetDefaultPrim


/** Return true if this stage's root layer has an authored opinion for the
default prim layer metadata.  This is shorthand for:
\code
stage->GetRootLayer()->HasDefaultPrim();
\endcode
Note that this function only consults the stage's root layer.  To
consult a different layer, use the SdfLayer::HasDefaultPrim() API. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_HasDefaultPrim(
    pxr_UsdStage_t const * this_
    , _Bool * return_);
#define pxr_UsdStage_HasDefaultPrim pxrInternal_v0_21__pxrReserved____UsdStage_HasDefaultPrim


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_Traverse(
    pxr_UsdStage_t * this_
    , pxr_UsdPrimRange_t * * return_);
#define pxr_UsdStage_Traverse pxrInternal_v0_21__pxrReserved____UsdStage_Traverse


/** Attempt to ensure a \a UsdPrim at \p path exists on this stage.

If a prim already exists at \p path, return it.  Otherwise author
\a SdfPrimSpecs with \a specifier == \a SdfSpecifierOver and empty
\a typeName at the current EditTarget to create this prim and any
nonexistent ancestors, then return it.

The given \a path must be an absolute prim path that does not contain
any variant selections.

If it is impossible to author any of the necessary PrimSpecs, (for
example, in case \a path cannot map to the current UsdEditTarget's
namespace) issue an error and return an invalid \a UsdPrim.

If an ancestor of \p path identifies an \a inactive prim, author scene
description as described above but return an invalid prim, since the
resulting prim is descendant to an inactive prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_OverridePrim(
    pxr_UsdStage_t * this_
    , pxr_UsdPrim_t * * return_
    , pxr_SdfPath_t const * path);
#define pxr_UsdStage_OverridePrim pxrInternal_v0_21__pxrReserved____UsdStage_OverridePrim


/** Attempt to ensure a \a UsdPrim at \p path is defined (according to
UsdPrim::IsDefined()) on this stage.

If a prim at \p path is already defined on this stage and \p typeName is
empty or equal to the existing prim's typeName, return that prim.
Otherwise author an \a SdfPrimSpec with \a specifier ==
\a SdfSpecifierDef and \p typeName for the prim at \p path at the
current EditTarget.  Author \a SdfPrimSpec s with \p specifier ==
\a SdfSpecifierDef and empty typeName at the current EditTarget for any
nonexistent, or existing but not \a Defined ancestors.

The given \a path must be an absolute prim path that does not contain
any variant selections.

If it is impossible to author any of the necessary PrimSpecs (for
example, in case \a path cannot map to the current UsdEditTarget's
namespace or one of the ancestors of \p path is inactive on the 
UsdStage), issue an error and return an invalid \a UsdPrim.

Note that this method may return a defined prim whose typeName does not
match the supplied \p typeName, in case a stronger typeName opinion
overrides the opinion at the current EditTarget. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_DefinePrim(
    pxr_UsdStage_t * this_
    , pxr_UsdPrim_t * * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * typeName);
#define pxr_UsdStage_DefinePrim pxrInternal_v0_21__pxrReserved____UsdStage_DefinePrim


/** Return this stage's root session layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_GetSessionLayer(
    pxr_UsdStage_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_UsdStage_GetSessionLayer pxrInternal_v0_21__pxrReserved____UsdStage_GetSessionLayer


/** Return this stage's root layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_GetRootLayer(
    pxr_UsdStage_t const * this_
    , pxr_SdfLayerHandle_t * * return_);
#define pxr_UsdStage_GetRootLayer pxrInternal_v0_21__pxrReserved____UsdStage_GetRootLayer


/** Writes out the composite scene as a single flattened layer into
\a filename.

If addSourceFileComment is true, a comment in the output layer
will mention the input layer it was generated from.

See UsdStage::Flatten for details of the flattening transformation. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdStage_Export(
    pxr_UsdStage_t const * this_
    , _Bool * return_
    , std_string_t const * filename
    , _Bool addSourceFileComment
    , std_map_string_string_t const * args);
#define pxr_UsdStage_Export pxrInternal_v0_21__pxrReserved____UsdStage_Export


#ifdef __cplusplus
}
#endif
