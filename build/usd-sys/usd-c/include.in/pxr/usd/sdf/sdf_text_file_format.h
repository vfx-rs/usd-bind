#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayer_t_s pxrInternal_v0_21__pxrReserved____SdfLayer_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayer_t pxr_SdfLayer_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;

/** \class SdfTextFileFormat

Sdf text file format */
typedef struct pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_t;
typedef pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_t pxr_SdfTextFileFormat_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetCurrentCount(
    pxr_SdfTextFileFormat_t const * this_
    , size_t * return_);
#define pxr_SdfTextFileFormat_GetCurrentCount pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsUnique(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfTextFileFormat_IsUnique pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_SetShouldInvokeUniqueChangedListener(
    pxr_SdfTextFileFormat_t * this_
    , _Bool shouldCall);
#define pxr_SdfTextFileFormat_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_EnableNotification2(
    pxr_SdfTextFileFormat_t const * this_);
#define pxr_SdfTextFileFormat_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetUniqueIdentifier(
    pxr_SdfTextFileFormat_t const * this_
    , void const * * return_);
#define pxr_SdfTextFileFormat_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetUniqueIdentifier


/** Returns the schema for this format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetSchema(
    pxr_SdfTextFileFormat_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfTextFileFormat_GetSchema pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetSchema


/** Returns the format identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFormatId(
    pxr_SdfTextFileFormat_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfTextFileFormat_GetFormatId pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFormatId


/** Returns the target for this file format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetTarget(
    pxr_SdfTextFileFormat_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfTextFileFormat_GetTarget pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetTarget


/** Returns the cookie to be used when writing files with this format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileCookie(
    pxr_SdfTextFileFormat_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfTextFileFormat_GetFileCookie pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileCookie


/** Returns the current version of this file format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetVersionString(
    pxr_SdfTextFileFormat_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfTextFileFormat_GetVersionString pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetVersionString


/** Returns true if this file format is the primary format for the 
extensions it handles. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsPrimaryFormatForExtensions(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfTextFileFormat_IsPrimaryFormatForExtensions pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsPrimaryFormatForExtensions


/** Returns a list of extensions that this format supports. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileExtensions(
    pxr_SdfTextFileFormat_t const * this_
    , std_vector_string_t const * * return_);
#define pxr_SdfTextFileFormat_GetFileExtensions pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileExtensions


/** Returns the primary file extension for this format. This is the
extension that is reported for layers using this file format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetPrimaryFileExtension(
    pxr_SdfTextFileFormat_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfTextFileFormat_GetPrimaryFileExtension pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetPrimaryFileExtension


/** Returns true if \p extension matches one of the extensions returned by
GetFileExtensions. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsSupportedExtension(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , std_string_t const * extension);
#define pxr_SdfTextFileFormat_IsSupportedExtension pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsSupportedExtension


/** Returns true if this file format is a package containing other
assets. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsPackage(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfTextFileFormat_IsPackage pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsPackage


/** Returns the path of the "root" layer contained in the package
layer at \p resolvedPath produced by this file format. If this 
file format is not a package, returns the empty string.

The package root layer is the layer in the package layer that 
is used when that package is opened via SdfLayer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetPackageRootLayerPath(
    pxr_SdfTextFileFormat_t const * this_
    , std_string_t * * return_
    , std_string_t const * resolvedPath);
#define pxr_SdfTextFileFormat_GetPackageRootLayerPath pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetPackageRootLayerPath


/** Returns the FileFormatArguments that correspond to the default behavior
of this file format when no FileFormatArguments are passed to NewLayer
or InitData. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetDefaultFileFormatArguments(
    pxr_SdfTextFileFormat_t const * this_
    , std_map_string_string_t * * return_);
#define pxr_SdfTextFileFormat_GetDefaultFileFormatArguments pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetDefaultFileFormatArguments


/** Return true if this file format prefers to skip reloading anonymous
layers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ShouldSkipAnonymousReload(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfTextFileFormat_ShouldSkipAnonymousReload pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ShouldSkipAnonymousReload


/** Returns true if anonymous layer identifiers should be passed to Read 
when a layer is opened or reloaded.

Anonymous layers will not have an asset backing and thus for most
file formats there is nothing that can be read for an anonymous layer. 
However, there are file formats that use Read to generate dynamic layer 
content without reading any data from the resolved asset associated with
the layer's identifier. 

For these types of file formats it is useful to be able to open 
anonymous layers and allow Read to populate them to avoid requiring a
placeholder asset to exist just so Read can populate the layer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ShouldReadAnonymousLayers(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfTextFileFormat_ShouldReadAnonymousLayers pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ShouldReadAnonymousLayers


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_CanRead(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , std_string_t const * file);
#define pxr_SdfTextFileFormat_CanRead pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_CanRead


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_Read(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t * layer
    , std_string_t const * resolvedPath
    , _Bool metadataOnly);
#define pxr_SdfTextFileFormat_Read pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_Read


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_WriteToFile(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t const * layer
    , std_string_t const * filePath
    , std_string_t const * comment
    , std_map_string_string_t const * args);
#define pxr_SdfTextFileFormat_WriteToFile pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_WriteToFile


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ReadFromString(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t * layer
    , std_string_t const * str);
#define pxr_SdfTextFileFormat_ReadFromString pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ReadFromString


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_WriteToString(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t const * layer
    , std_string_t * str
    , std_string_t const * comment);
#define pxr_SdfTextFileFormat_WriteToString pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_WriteToString


/** Returns the file extension for path or file name \p s, without the
leading dot character. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileExtension(
    std_string_t * * return_
    , std_string_t const * s);
#define pxr_SdfTextFileFormat_GetFileExtension pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileExtension


#ifdef __cplusplus
}
#endif
