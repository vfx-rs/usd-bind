#pragma once
#include "usd-api-export.h"

#include <pxr/usd/sdf/sdf_namespace_edit.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_t_s pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_t;
typedef pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_t pxr_SdfBatchNamespaceEdit_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t_s pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayerOffset_t pxr_SdfLayerOffset_t;
typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfAssetPath_t_s pxrInternal_v0_21__pxrReserved____SdfAssetPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAssetPath_t pxr_SdfAssetPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtDictionary_t_s pxrInternal_v0_21__pxrReserved____VtDictionary_t;
typedef pxrInternal_v0_21__pxrReserved____VtDictionary_t pxr_VtDictionary_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSpec_t_s pxrInternal_v0_21__pxrReserved____SdfSpec_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSpec_t pxr_SdfSpec_t;

/** \class SdfLayer 

A unit of scene description that you combine with other units of scene
description to form a shot, model, set, shader, and so on.

SdfLayer objects provide a persistent way to store layers on the
filesystem in .menva files.  Currently the supported file format is 
<c>.menva</c>, the ASCII file format. 

The FindOrOpen() method returns a new SdfLayer object with scene description
from a <c>.menva</c> file. Once read, a layer remembers which asset it was
read from. The Save() method saves the layer back out to the original file.
You can use the Export() method to write the layer to a different
location. You can use the GetIdentifier() method to get the layer's Id or
GetRealPath() to get the resolved, full file path.

Layers can have a timeCode range (startTimeCode and endTimeCode). This range
represents the suggested playback range, but has no impact on the extent of 
the animation data that may be stored in the layer. The metadatum 
"timeCodesPerSecond" is used to annotate how the time ordinate for samples
contained in the file scales to seconds. For example, if timeCodesPerSecond
is 24, then a sample at time ordinate 24 should be viewed exactly one second
after the sample at time ordinate 0.

Compared to Menv2x, layers are most closely analogous to 
hooksets, <c>.hook</c> files, and <c>.cue</c> files.

\todo 
\li Insert a discussion of subLayers semantics here.

\todo
\li Should have validate... methods for rootPrims */
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayer_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfLayer_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayer_t pxr_SdfLayer_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetCurrentCount(
    pxr_SdfLayer_t const * this_
    , size_t * return_);
#define pxr_SdfLayer_GetCurrentCount pxrInternal_v0_21__pxrReserved____SdfLayer_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsUnique(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_IsUnique pxrInternal_v0_21__pxrReserved____SdfLayer_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetShouldInvokeUniqueChangedListener(
    pxr_SdfLayer_t * this_
    , _Bool shouldCall);
#define pxr_SdfLayer_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____SdfLayer_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_EnableNotification2(
    pxr_SdfLayer_t const * this_);
#define pxr_SdfLayer_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfLayer_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetUniqueIdentifier(
    pxr_SdfLayer_t const * this_
    , void const * * return_);
#define pxr_SdfLayer_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfLayer_GetUniqueIdentifier


/** Destructor */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_dtor(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_dtor pxrInternal_v0_21__pxrReserved____SdfLayer_dtor


/** Returns the schema this layer adheres to. This schema provides details
about the scene description that may be authored in this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetSchema(
    pxr_SdfLayer_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfLayer_GetSchema pxrInternal_v0_21__pxrReserved____SdfLayer_GetSchema


/** Returns the file format-specific arguments used during the construction
of this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileFormatArguments(
    pxr_SdfLayer_t const * this_
    , std_map_string_string_t const * * return_);
#define pxr_SdfLayer_GetFileFormatArguments pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileFormatArguments


/** Return an existing layer with the given \p identifier and \p args.  If
the layer can't be found, an error is posted and a null layer is
returned.

Arguments in \p args will override any arguments specified in
\p identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Find(
    pxr_SdfLayerHandle_t * * return_
    , std_string_t const * identifier
    , std_map_string_string_t const * args);
#define pxr_SdfLayer_Find pxrInternal_v0_21__pxrReserved____SdfLayer_Find


/** Return an existing layer with the given \p identifier and \p args.
The given \p identifier will be resolved relative to the \p anchor
layer. If the layer can't be found, an error is posted and a null
layer is returned.

If the \p anchor layer is invalid, a coding error is raised, and a null
handle is returned.

Arguments in \p args will override any arguments specified in
\p identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_FindRelativeToLayer(
    pxr_SdfLayerHandle_t * * return_
    , pxr_SdfLayerHandle_t const * anchor
    , std_string_t const * layerPath
    , std_map_string_string_t const * args);
#define pxr_SdfLayer_FindRelativeToLayer pxrInternal_v0_21__pxrReserved____SdfLayer_FindRelativeToLayer


/** Returns whether this layer has no significant data. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsEmpty(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_IsEmpty pxrInternal_v0_21__pxrReserved____SdfLayer_IsEmpty


/** Copies the content of the given layer into this layer.
Source layer is unmodified. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_TransferContent(
    pxr_SdfLayer_t * this_
    , pxr_SdfLayerHandle_t const * layer);
#define pxr_SdfLayer_TransferContent pxrInternal_v0_21__pxrReserved____SdfLayer_TransferContent


/** Returns true if this layer is an anonymous layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymous(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_IsAnonymous pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymous


/** Returns true if the \p identifier is an anonymous layer unique
identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymousLayerIdentifier(
    _Bool * return_
    , std_string_t const * identifier);
#define pxr_SdfLayer_IsAnonymousLayerIdentifier pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymousLayerIdentifier


/** Returns the display name for the given \p identifier, using the same 
rules as GetDisplayName. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayNameFromIdentifier(
    std_string_t * * return_
    , std_string_t const * identifier);
#define pxr_SdfLayer_GetDisplayNameFromIdentifier pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayNameFromIdentifier


/** Returns \c true if successful, \c false if an error occurred.
Returns \c false if the layer has no remembered file name or the 
layer type cannot be saved. The layer will not be overwritten if the 
file exists and the layer is not dirty unless \p force is true. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Save(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , _Bool force);
#define pxr_SdfLayer_Save pxrInternal_v0_21__pxrReserved____SdfLayer_Save


/** Exports this layer to a file.
Returns \c true if successful, \c false if an error occurred.

If \p comment is not empty, the layer gets exported with the given
comment. Additional arguments may be supplied via the \p args parameter.
These arguments may control behavior specific to the exported layer's
file format.

Note that the file name or comment of the original layer is not
updated. This only saves a copy of the layer to the given filename.
Subsequent calls to Save() will still save the layer to it's
previously remembered file name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Export(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , std_string_t const * filename
    , std_string_t const * comment
    , std_map_string_string_t const * args);
#define pxr_SdfLayer_Export pxrInternal_v0_21__pxrReserved____SdfLayer_Export


/** Writes this layer to the given string.

Returns \c true if successful and sets \p result, otherwise
returns \c false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ExportToString(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , std_string_t * result);
#define pxr_SdfLayer_ExportToString pxrInternal_v0_21__pxrReserved____SdfLayer_ExportToString


/** Reads this layer from the given string.

Returns \c true if successful, otherwise returns \c false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ImportFromString(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , std_string_t const * string);
#define pxr_SdfLayer_ImportFromString pxrInternal_v0_21__pxrReserved____SdfLayer_ImportFromString


/** Clears the layer of all content.

This restores the layer to a state as if it had just been created
with CreateNew().  This operation is Undo-able.

The fileName and whether journaling is enabled are not affected
by this method. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Clear(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_Clear pxrInternal_v0_21__pxrReserved____SdfLayer_Clear


/** Reloads the layer from its persistent representation.

This restores the layer to a state as if it had just been created
with FindOrOpen().  This operation is Undo-able.

The fileName and whether journaling is enabled are not affected
by this method.

When called with force = false (the default), Reload attempts to
avoid reloading layers that have not changed on disk. It does so
by comparing the file's modification time (mtime) to when the
file was loaded. If the layer has unsaved modifications, this
mechanism is not used, and the layer is reloaded from disk. If the 
layer has any 
\ref GetExternalAssetDependencies "external asset dependencies"
their modification state will also be consulted when determining if 
the layer needs to be reloaded.

Passing true to the \p force parameter overrides this behavior,
forcing the layer to be reloaded from disk regardless of whether
it has changed. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Reload(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , _Bool force);
#define pxr_SdfLayer_Reload pxrInternal_v0_21__pxrReserved____SdfLayer_Reload


/** Imports the content of the given layer path, replacing the content
of the current layer.
Note: If the layer path is the same as the current layer's real path,
no action is taken (and a warning occurs). For this case use
Reload(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Import(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , std_string_t const * layerPath);
#define pxr_SdfLayer_Import pxrInternal_v0_21__pxrReserved____SdfLayer_Import


/** \deprecated 
Use UpdateCompositionAssetDependency instead. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_UpdateExternalReference(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , std_string_t const * oldAssetPath
    , std_string_t const * newAssetPath);
#define pxr_SdfLayer_UpdateExternalReference pxrInternal_v0_21__pxrReserved____SdfLayer_UpdateExternalReference


/** Splits the given layer identifier into its constituent layer path
and arguments. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SplitIdentifier(
    _Bool * return_
    , std_string_t const * identifier
    , std_string_t * layerPath
    , std_map_string_string_t * arguments);
#define pxr_SdfLayer_SplitIdentifier pxrInternal_v0_21__pxrReserved____SdfLayer_SplitIdentifier


/** Joins the given layer path and arguments into an identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_CreateIdentifier(
    std_string_t * * return_
    , std_string_t const * layerPath
    , std_map_string_string_t const * arguments);
#define pxr_SdfLayer_CreateIdentifier pxrInternal_v0_21__pxrReserved____SdfLayer_CreateIdentifier


/** Returns the layer identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetIdentifier(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetIdentifier pxrInternal_v0_21__pxrReserved____SdfLayer_GetIdentifier


/** Sets the layer identifier. 
Note that the new identifier must have the same arguments (if any)
as the old identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetIdentifier(
    pxr_SdfLayer_t * this_
    , std_string_t const * identifier);
#define pxr_SdfLayer_SetIdentifier pxrInternal_v0_21__pxrReserved____SdfLayer_SetIdentifier


/** Returns the layer's display name.

The display name is the base filename of the identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayName(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_);
#define pxr_SdfLayer_GetDisplayName pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayName


/** Returns the resolved path for this layer. This is equivalent to
GetResolvedPath().GetPathString(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetRealPath(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetRealPath pxrInternal_v0_21__pxrReserved____SdfLayer_GetRealPath


/** Returns the file extension to use for this layer.
If this layer was loaded from disk, it should match the extension
of the file format it was loaded as; if this is an anonymous
in-memory layer it will be the default extension. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileExtension(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_);
#define pxr_SdfLayer_GetFileExtension pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileExtension


/** Returns the asset system version of this layer. If a layer is loaded
from a location that is not version managed, or a configured asset
system is not present when the layer is loaded or created, the version
is empty. By default, asset version tracking is disabled; this method
returns empty unless asset version tracking is enabled. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetVersion(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetVersion pxrInternal_v0_21__pxrReserved____SdfLayer_GetVersion


/** Returns the layer identifier in asset path form. In the presence of a
properly configured path resolver, the asset path is a double-slash
prefixed depot path. If the path resolver is not configured, the asset
path of a layer is empty. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetRepositoryPath(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetRepositoryPath pxrInternal_v0_21__pxrReserved____SdfLayer_GetRepositoryPath


/** Returns the asset name associated with this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetName(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetAssetName pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetName


/** Returns resolve information from the last time the layer identifier
was resolved. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetInfo(
    pxr_SdfLayer_t const * this_
    , pxr_VtValue_t const * * return_);
#define pxr_SdfLayer_GetAssetInfo pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetInfo


/** Return whether a spec exists at \a path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasSpec(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfLayer_HasSpec pxrInternal_v0_21__pxrReserved____SdfLayer_HasSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasField(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t * value);
#define pxr_SdfLayer_HasField pxrInternal_v0_21__pxrReserved____SdfLayer_HasField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasFieldDictKey(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t * value);
#define pxr_SdfLayer_HasFieldDictKey pxrInternal_v0_21__pxrReserved____SdfLayer_HasFieldDictKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetField(
    pxr_SdfLayer_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t const * value);
#define pxr_SdfLayer_SetField pxrInternal_v0_21__pxrReserved____SdfLayer_SetField


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetFieldDictValueByKey(
    pxr_SdfLayer_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value);
#define pxr_SdfLayer_SetFieldDictValueByKey pxrInternal_v0_21__pxrReserved____SdfLayer_SetFieldDictValueByKey


/** Remove the field at \p path and \p fieldName, if one exists. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_EraseField(
    pxr_SdfLayer_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName);
#define pxr_SdfLayer_EraseField pxrInternal_v0_21__pxrReserved____SdfLayer_EraseField


/** Remove the field at \p path and \p fieldName and \p keyPath, if one
exists.  The \p keyPath is a ':'-separated path addressing an
element in sub-dictionaries. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_EraseFieldDictValueByKey(
    pxr_SdfLayer_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath);
#define pxr_SdfLayer_EraseFieldDictValueByKey pxrInternal_v0_21__pxrReserved____SdfLayer_EraseFieldDictValueByKey


/** Returns the color configuration asset-path for this layer.

The default value is an empty asset-path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetColorConfiguration(
    pxr_SdfLayer_t const * this_
    , pxr_SdfAssetPath_t * * return_);
#define pxr_SdfLayer_GetColorConfiguration pxrInternal_v0_21__pxrReserved____SdfLayer_GetColorConfiguration


/** Sets the color configuration asset-path for this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetColorConfiguration(
    pxr_SdfLayer_t * this_
    , pxr_SdfAssetPath_t const * colorConfiguration);
#define pxr_SdfLayer_SetColorConfiguration pxrInternal_v0_21__pxrReserved____SdfLayer_SetColorConfiguration


/** Returns true if color configuration metadata is set in this layer.
\sa GetColorConfiguration(), SetColorConfiguration() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasColorConfiguration(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasColorConfiguration pxrInternal_v0_21__pxrReserved____SdfLayer_HasColorConfiguration


/** Clears the color configuration metadata authored in this layer. 
\sa HasColorConfiguration(), SetColorConfiguration() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearColorConfiguration(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearColorConfiguration pxrInternal_v0_21__pxrReserved____SdfLayer_ClearColorConfiguration


/** Returns the color management system used to interpret the color 
configuration asset-path authored in this layer.

The default value is an empty token, which implies that the clients 
will have to determine the color management system from the color 
configuration asset path (i.e. from its file extension), if it's 
specified.  */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetColorManagementSystem(
    pxr_SdfLayer_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfLayer_GetColorManagementSystem pxrInternal_v0_21__pxrReserved____SdfLayer_GetColorManagementSystem


/** Sets the color management system used to interpret the color 
configuration asset-path authored this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetColorManagementSystem(
    pxr_SdfLayer_t * this_
    , pxr_TfToken_t const * cms);
#define pxr_SdfLayer_SetColorManagementSystem pxrInternal_v0_21__pxrReserved____SdfLayer_SetColorManagementSystem


/** Returns true if colorManagementSystem metadata is set in this layer.
\sa GetColorManagementSystem(), SetColorManagementSystem() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasColorManagementSystem(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasColorManagementSystem pxrInternal_v0_21__pxrReserved____SdfLayer_HasColorManagementSystem


/** Clears the 'colorManagementSystem' metadata authored in this layer. 
\sa HascolorManagementSystem(), SetColorManagementSystem() */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearColorManagementSystem(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearColorManagementSystem pxrInternal_v0_21__pxrReserved____SdfLayer_ClearColorManagementSystem


/** Returns the comment string for this layer.

The default value for comment is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetComment(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_);
#define pxr_SdfLayer_GetComment pxrInternal_v0_21__pxrReserved____SdfLayer_GetComment


/** Sets the comment string for this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetComment(
    pxr_SdfLayer_t * this_
    , std_string_t const * comment);
#define pxr_SdfLayer_SetComment pxrInternal_v0_21__pxrReserved____SdfLayer_SetComment


/** Return the defaultPrim metadata for this layer.  This field
indicates the name of which root prim should be targeted by a reference
or payload to this layer that doesn't specify a prim path.

The default value is the empty token. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetDefaultPrim(
    pxr_SdfLayer_t const * this_
    , pxr_TfToken_t * return_);
#define pxr_SdfLayer_GetDefaultPrim pxrInternal_v0_21__pxrReserved____SdfLayer_GetDefaultPrim


/** Set the default prim metadata for this layer.  The root prim with this
name will be targeted by a reference or a payload to this layer that
doesn't specify a prim path.  Note that this must be a root prim
<b>name</b> not a path.  E.g. "rootPrim" rather than "/rootPrim".  See
GetDefaultPrim(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetDefaultPrim(
    pxr_SdfLayer_t * this_
    , pxr_TfToken_t const * name);
#define pxr_SdfLayer_SetDefaultPrim pxrInternal_v0_21__pxrReserved____SdfLayer_SetDefaultPrim


/** Clear the default prim metadata for this layer.  See GetDefaultPrim()
and SetDefaultPrim(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearDefaultPrim(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearDefaultPrim pxrInternal_v0_21__pxrReserved____SdfLayer_ClearDefaultPrim


/** Return true if the default prim metadata is set in this layer.  See
GetDefaultPrim() and SetDefaultPrim(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasDefaultPrim(
    pxr_SdfLayer_t * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasDefaultPrim pxrInternal_v0_21__pxrReserved____SdfLayer_HasDefaultPrim


/** Returns the documentation string for this layer.

The default value for documentation is "". */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetDocumentation(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_);
#define pxr_SdfLayer_GetDocumentation pxrInternal_v0_21__pxrReserved____SdfLayer_GetDocumentation


/** Sets the documentation string for this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetDocumentation(
    pxr_SdfLayer_t * this_
    , std_string_t const * documentation);
#define pxr_SdfLayer_SetDocumentation pxrInternal_v0_21__pxrReserved____SdfLayer_SetDocumentation


/** Returns the layer's start timeCode.

The start and end timeCodes of a layer represent the suggested playback 
range.  However, time-varying content is not limited to the timeCode range 
of the layer.

The default value for startTimeCode is 0. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetStartTimeCode(
    pxr_SdfLayer_t const * this_
    , double * return_);
#define pxr_SdfLayer_GetStartTimeCode pxrInternal_v0_21__pxrReserved____SdfLayer_GetStartTimeCode


/** Sets the layer's start timeCode. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetStartTimeCode(
    pxr_SdfLayer_t * this_
    , double startTimecode);
#define pxr_SdfLayer_SetStartTimeCode pxrInternal_v0_21__pxrReserved____SdfLayer_SetStartTimeCode


/** Returns true if the layer has a startTimeCode opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasStartTimeCode(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasStartTimeCode pxrInternal_v0_21__pxrReserved____SdfLayer_HasStartTimeCode


/** Clear the startTimeCode opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearStartTimeCode(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearStartTimeCode pxrInternal_v0_21__pxrReserved____SdfLayer_ClearStartTimeCode


/** Returns the layer's end timeCode.
The start and end timeCode of a layer represent a suggested playback range.  
However, time-varying content is not limited to the timeCode range of the 
layer.

The default value for endTimeCode is 0. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetEndTimeCode(
    pxr_SdfLayer_t const * this_
    , double * return_);
#define pxr_SdfLayer_GetEndTimeCode pxrInternal_v0_21__pxrReserved____SdfLayer_GetEndTimeCode


/** Sets the layer's end timeCode. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetEndTimeCode(
    pxr_SdfLayer_t * this_
    , double endTimeCode);
#define pxr_SdfLayer_SetEndTimeCode pxrInternal_v0_21__pxrReserved____SdfLayer_SetEndTimeCode


/** Returns true if the layer has an endTimeCode opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasEndTimeCode(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasEndTimeCode pxrInternal_v0_21__pxrReserved____SdfLayer_HasEndTimeCode


/** Clear the endTimeCode opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearEndTimeCode(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearEndTimeCode pxrInternal_v0_21__pxrReserved____SdfLayer_ClearEndTimeCode


/** Returns the layer's timeCodes per second.

Scales the time ordinate for samples contained in the file to seconds.  
If timeCodesPerSecond is 24, then a sample at time ordinate 24 should 
be viewed exactly one second after the sample at time ordinate 0.

If this layer doesn't have an authored value for timeCodesPerSecond, but
it does have an authored value for framesPerSecond, this method will
return the value of framesPerSecond.  This "dynamic fallback" allows
layers to lock framesPerSecond and timeCodesPerSecond to the same value
by specifying only framesPerSecond.

The default value of timeCodesPerSecond (which is used only if there is
no authored value for either timeCodesPerSecond or framesPerSecond) is
24. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetTimeCodesPerSecond(
    pxr_SdfLayer_t const * this_
    , double * return_);
#define pxr_SdfLayer_GetTimeCodesPerSecond pxrInternal_v0_21__pxrReserved____SdfLayer_GetTimeCodesPerSecond


/** Sets the layer's timeCodes per second */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetTimeCodesPerSecond(
    pxr_SdfLayer_t * this_
    , double timeCodesPerSecond);
#define pxr_SdfLayer_SetTimeCodesPerSecond pxrInternal_v0_21__pxrReserved____SdfLayer_SetTimeCodesPerSecond


/** Returns true if the layer has a timeCodesPerSecond opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasTimeCodesPerSecond(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasTimeCodesPerSecond pxrInternal_v0_21__pxrReserved____SdfLayer_HasTimeCodesPerSecond


/** Clear the timeCodesPerSecond opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearTimeCodesPerSecond(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearTimeCodesPerSecond pxrInternal_v0_21__pxrReserved____SdfLayer_ClearTimeCodesPerSecond


/** Returns the layer's frames per second.

This makes an advisory statement about how the contained data can be 
most usefully consumed and presented.  It's primarily an indication of 
the expected playback rate for the data, but a timeline editing tool 
might also want to use this to decide how to scale and label its 
timeline.  

The default  value for framesPerSecond is 24. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetFramesPerSecond(
    pxr_SdfLayer_t const * this_
    , double * return_);
#define pxr_SdfLayer_GetFramesPerSecond pxrInternal_v0_21__pxrReserved____SdfLayer_GetFramesPerSecond


/** Sets the layer's frames per second */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetFramesPerSecond(
    pxr_SdfLayer_t * this_
    , double framesPerSecond);
#define pxr_SdfLayer_SetFramesPerSecond pxrInternal_v0_21__pxrReserved____SdfLayer_SetFramesPerSecond


/** Returns true if the layer has a frames per second opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasFramesPerSecond(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasFramesPerSecond pxrInternal_v0_21__pxrReserved____SdfLayer_HasFramesPerSecond


/** Clear the framesPerSecond opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearFramesPerSecond(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearFramesPerSecond pxrInternal_v0_21__pxrReserved____SdfLayer_ClearFramesPerSecond


/** Returns the layer's frame precision. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetFramePrecision(
    pxr_SdfLayer_t const * this_
    , int * return_);
#define pxr_SdfLayer_GetFramePrecision pxrInternal_v0_21__pxrReserved____SdfLayer_GetFramePrecision


/** Sets the layer's frame precision. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetFramePrecision(
    pxr_SdfLayer_t * this_
    , int framePrecision);
#define pxr_SdfLayer_SetFramePrecision pxrInternal_v0_21__pxrReserved____SdfLayer_SetFramePrecision


/** Returns true if the layer has a frames precision opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasFramePrecision(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasFramePrecision pxrInternal_v0_21__pxrReserved____SdfLayer_HasFramePrecision


/** Clear the framePrecision opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearFramePrecision(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearFramePrecision pxrInternal_v0_21__pxrReserved____SdfLayer_ClearFramePrecision


/** Returns the layer's owner. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetOwner(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_);
#define pxr_SdfLayer_GetOwner pxrInternal_v0_21__pxrReserved____SdfLayer_GetOwner


/** Sets the layer's owner. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetOwner(
    pxr_SdfLayer_t * this_
    , std_string_t const * owner);
#define pxr_SdfLayer_SetOwner pxrInternal_v0_21__pxrReserved____SdfLayer_SetOwner


/** Returns true if the layer has an owner opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasOwner(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasOwner pxrInternal_v0_21__pxrReserved____SdfLayer_HasOwner


/** Clear the owner opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearOwner(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearOwner pxrInternal_v0_21__pxrReserved____SdfLayer_ClearOwner


/** Returns the layer's session owner.
Note: This should only be used by session layers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetSessionOwner(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_);
#define pxr_SdfLayer_GetSessionOwner pxrInternal_v0_21__pxrReserved____SdfLayer_GetSessionOwner


/** Sets the layer's session owner.
Note: This should only be used by session layers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetSessionOwner(
    pxr_SdfLayer_t * this_
    , std_string_t const * owner);
#define pxr_SdfLayer_SetSessionOwner pxrInternal_v0_21__pxrReserved____SdfLayer_SetSessionOwner


/** Returns true if the layer has a session owner opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasSessionOwner(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasSessionOwner pxrInternal_v0_21__pxrReserved____SdfLayer_HasSessionOwner


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearSessionOwner(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearSessionOwner pxrInternal_v0_21__pxrReserved____SdfLayer_ClearSessionOwner


/** Returns true if the layer's sublayers are expected to have owners. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetHasOwnedSubLayers(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_GetHasOwnedSubLayers pxrInternal_v0_21__pxrReserved____SdfLayer_GetHasOwnedSubLayers


/** Sets whether the layer's sublayers are expected to have owners. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetHasOwnedSubLayers(
    pxr_SdfLayer_t * this_
    , _Bool rhs);
#define pxr_SdfLayer_SetHasOwnedSubLayers pxrInternal_v0_21__pxrReserved____SdfLayer_SetHasOwnedSubLayers


/** Sets the CustomLayerData dictionary associated with this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetCustomLayerData(
    pxr_SdfLayer_t * this_
    , pxr_VtDictionary_t const * value);
#define pxr_SdfLayer_SetCustomLayerData pxrInternal_v0_21__pxrReserved____SdfLayer_SetCustomLayerData


/** Returns true if CustomLayerData is authored on the layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasCustomLayerData(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_HasCustomLayerData pxrInternal_v0_21__pxrReserved____SdfLayer_HasCustomLayerData


/** Clears out the CustomLayerData dictionary associated with this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearCustomLayerData(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_ClearCustomLayerData pxrInternal_v0_21__pxrReserved____SdfLayer_ClearCustomLayerData


/** Cause \p spec to be removed if it no longer affects the scene when the 
last change block is closed, or now if there are no change blocks. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ScheduleRemoveIfInert(
    pxr_SdfLayer_t * this_
    , pxr_SdfSpec_t const * spec);
#define pxr_SdfLayer_ScheduleRemoveIfInert pxrInternal_v0_21__pxrReserved____SdfLayer_ScheduleRemoveIfInert


/** Removes all scene description in this layer that does not affect the
scene.

This method walks the layer namespace hierarchy and removes any prims
and that are not contributing any opinions. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveInertSceneDescription(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_RemoveInertSceneDescription pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveInertSceneDescription


/** Adds a new root prim name in the root prim order.
If the index is -1, the name is inserted at the end. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_InsertInRootPrimOrder(
    pxr_SdfLayer_t * this_
    , pxr_TfToken_t const * name
    , int index);
#define pxr_SdfLayer_InsertInRootPrimOrder pxrInternal_v0_21__pxrReserved____SdfLayer_InsertInRootPrimOrder


/** Removes a root prim name from the root prim order. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromRootPrimOrder(
    pxr_SdfLayer_t * this_
    , pxr_TfToken_t const * name);
#define pxr_SdfLayer_RemoveFromRootPrimOrder pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromRootPrimOrder


/** Removes a root prim name from the root prim order by index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromRootPrimOrderByIndex(
    pxr_SdfLayer_t * this_
    , int index);
#define pxr_SdfLayer_RemoveFromRootPrimOrderByIndex pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromRootPrimOrderByIndex


/** Sets the paths of the layer's sublayers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetSubLayerPaths(
    pxr_SdfLayer_t * this_
    , std_vector_string_t const * newPaths);
#define pxr_SdfLayer_SetSubLayerPaths pxrInternal_v0_21__pxrReserved____SdfLayer_SetSubLayerPaths


/** Returns the number of sublayer paths (and offsets). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetNumSubLayerPaths(
    pxr_SdfLayer_t const * this_
    , size_t * return_);
#define pxr_SdfLayer_GetNumSubLayerPaths pxrInternal_v0_21__pxrReserved____SdfLayer_GetNumSubLayerPaths


/** Inserts new sublayer path at the given index.

The default index of -1 means to insert at the end. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_InsertSubLayerPath(
    pxr_SdfLayer_t * this_
    , std_string_t const * path
    , int index);
#define pxr_SdfLayer_InsertSubLayerPath pxrInternal_v0_21__pxrReserved____SdfLayer_InsertSubLayerPath


/** Removes sublayer path at the given index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveSubLayerPath(
    pxr_SdfLayer_t * this_
    , int index);
#define pxr_SdfLayer_RemoveSubLayerPath pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveSubLayerPath


/** Returns the layer offset for the subLayer path at the given index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetSubLayerOffset(
    pxr_SdfLayer_t const * this_
    , pxr_SdfLayerOffset_t * return_
    , int index);
#define pxr_SdfLayer_GetSubLayerOffset pxrInternal_v0_21__pxrReserved____SdfLayer_GetSubLayerOffset


/** Sets the layer offset for the subLayer path at the given index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetSubLayerOffset(
    pxr_SdfLayer_t * this_
    , pxr_SdfLayerOffset_t const * offset
    , int index);
#define pxr_SdfLayer_SetSubLayerOffset pxrInternal_v0_21__pxrReserved____SdfLayer_SetSubLayerOffset


/** Returns \c true if the current layer is muted. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsMuted(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_IsMuted pxrInternal_v0_21__pxrReserved____SdfLayer_IsMuted


/** Returns \c true if the specified layer path is muted. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsMuted_1(
    _Bool * return_
    , std_string_t const * path);
#define pxr_SdfLayer_IsMuted_1 pxrInternal_v0_21__pxrReserved____SdfLayer_IsMuted_1


/** Mutes the current layer if \p muted is \c true, and unmutes it
otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetMuted(
    pxr_SdfLayer_t * this_
    , _Bool muted);
#define pxr_SdfLayer_SetMuted pxrInternal_v0_21__pxrReserved____SdfLayer_SetMuted


/** Add the specified path to the muted layers set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_AddToMutedLayers(
    std_string_t const * mutedPath);
#define pxr_SdfLayer_AddToMutedLayers pxrInternal_v0_21__pxrReserved____SdfLayer_AddToMutedLayers


/** Remove the specified path from the muted layers set. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromMutedLayers(
    std_string_t const * mutedPath);
#define pxr_SdfLayer_RemoveFromMutedLayers pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromMutedLayers


/** Returns true if the caller is allowed to modify the layer and 
false otherwise.  A layer may have to perform some action to acquire 
permission to be edited. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_PermissionToEdit(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_PermissionToEdit pxrInternal_v0_21__pxrReserved____SdfLayer_PermissionToEdit


/** Returns true if the caller is allowed to save the layer to its 
existing fileName and false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_PermissionToSave(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_PermissionToSave pxrInternal_v0_21__pxrReserved____SdfLayer_PermissionToSave


/** Sets permission to edit. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetPermissionToEdit(
    pxr_SdfLayer_t * this_
    , _Bool allow);
#define pxr_SdfLayer_SetPermissionToEdit pxrInternal_v0_21__pxrReserved____SdfLayer_SetPermissionToEdit


/** Sets permission to save. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetPermissionToSave(
    pxr_SdfLayer_t * this_
    , _Bool allow);
#define pxr_SdfLayer_SetPermissionToSave pxrInternal_v0_21__pxrReserved____SdfLayer_SetPermissionToSave


/** Performs a batch of namespace edits.  Returns \c true on success
and \c false on failure.  On failure, no namespace edits will have
occurred. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Apply(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , pxr_SdfBatchNamespaceEdit_t const * rhs);
#define pxr_SdfLayer_Apply pxrInternal_v0_21__pxrReserved____SdfLayer_Apply


/** Returns \c true if the layer is dirty, i.e. has changed from
its persistent representation. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsDirty(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_IsDirty pxrInternal_v0_21__pxrReserved____SdfLayer_IsDirty


#ifdef __cplusplus
}
#endif
