#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;

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
typedef struct pxrInternal_v0_20__pxrReserved____SdfLayer_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_20__pxrReserved____SdfLayer_t;
typedef pxrInternal_v0_20__pxrReserved____SdfLayer_t pxr_SdfLayer_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_GetCurrentCount(
    pxr_SdfLayer_t const * this_
    , size_t * return_);
#define pxr_SdfLayer_GetCurrentCount pxrInternal_v0_20__pxrReserved____SdfLayer_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_IsUnique(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_IsUnique pxrInternal_v0_20__pxrReserved____SdfLayer_IsUnique


/** Destructor */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_dtor(
    pxr_SdfLayer_t * this_);
#define pxr_SdfLayer_dtor pxrInternal_v0_20__pxrReserved____SdfLayer_dtor


/** Returns true if this layer is an anonymous layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_IsAnonymous(
    pxr_SdfLayer_t const * this_
    , _Bool * return_);
#define pxr_SdfLayer_IsAnonymous pxrInternal_v0_20__pxrReserved____SdfLayer_IsAnonymous


/** Returns true if the \p identifier is an anonymous layer unique
identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_IsAnonymousLayerIdentifier(
    _Bool * return_
    , std_string_t const * identifier);
#define pxr_SdfLayer_IsAnonymousLayerIdentifier pxrInternal_v0_20__pxrReserved____SdfLayer_IsAnonymousLayerIdentifier


/** Returns the display name for the given \p identifier, using the same 
rules as GetDisplayName. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_GetDisplayNameFromIdentifier(
    std_string_t * * return_
    , std_string_t const * identifier);
#define pxr_SdfLayer_GetDisplayNameFromIdentifier pxrInternal_v0_20__pxrReserved____SdfLayer_GetDisplayNameFromIdentifier


/** Converts \e layerPath to a file system path. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_ComputeRealPath(
    std_string_t * * return_
    , std_string_t const * layerPath);
#define pxr_SdfLayer_ComputeRealPath pxrInternal_v0_20__pxrReserved____SdfLayer_ComputeRealPath


/** Returns \c true if successful, \c false if an error occurred.
Returns \c false if the layer has no remembered file name or the 
layer type cannot be saved. The layer will not be overwritten if the 
file exists and the layer is not dirty unless \p force is true. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_Save(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , _Bool force);
#define pxr_SdfLayer_Save pxrInternal_v0_20__pxrReserved____SdfLayer_Save


/** Returns the layer's display name.

The display name is the base filename of the identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_GetDisplayName(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_);
#define pxr_SdfLayer_GetDisplayName pxrInternal_v0_20__pxrReserved____SdfLayer_GetDisplayName


/** Returns the file system path where this layer exists or may exist
after a call to Save. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_GetRealPath(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetRealPath pxrInternal_v0_20__pxrReserved____SdfLayer_GetRealPath


/** Returns the file extension to use for this layer.
If this layer was loaded from disk, it should match the extension
of the file format it was loaded as; if this is an anonymous
in-memory layer it will be the default extension. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_GetFileExtension(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_);
#define pxr_SdfLayer_GetFileExtension pxrInternal_v0_20__pxrReserved____SdfLayer_GetFileExtension


/** Returns the asset system version of this layer. If a layer is loaded
from a location that is not version managed, or a configured asset
system is not present when the layer is loaded or created, the version
is empty. By default, asset version tracking is disabled; this method
returns empty unless asset version tracking is enabled. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_GetVersion(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetVersion pxrInternal_v0_20__pxrReserved____SdfLayer_GetVersion


/** Returns the layer identifier in asset path form. In the presence of a
properly configured path resolver, the asset path is a double-slash
prefixed depot path. If the path resolver is not configured, the asset
path of a layer is empty. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_GetRepositoryPath(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetRepositoryPath pxrInternal_v0_20__pxrReserved____SdfLayer_GetRepositoryPath


/** Returns the asset name associated with this layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____SdfLayer_GetAssetName(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfLayer_GetAssetName pxrInternal_v0_20__pxrReserved____SdfLayer_GetAssetName


#ifdef __cplusplus
}
#endif
