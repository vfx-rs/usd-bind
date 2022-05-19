#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfLayer_t_s pxrInternal_v0_21__pxrReserved____SdfLayer_t;
typedef pxrInternal_v0_21__pxrReserved____SdfLayer_t pxr_SdfLayer_t;
typedef struct std__map_std__string_std__string__t_s std__map_std__string_std__string__t;
typedef std__map_std__string_std__string__t std_map_string_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t_s pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t;
typedef pxrInternal_v0_21__pxrReserved____SdfSchemaBase_t pxr_SdfSchemaBase_t;

/** \class SdfFileFormat

Base class for file format implementations. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfFileFormat_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfFileFormat_t;
typedef pxrInternal_v0_21__pxrReserved____SdfFileFormat_t pxr_SdfFileFormat_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetCurrentCount(
    pxr_SdfFileFormat_t const * this_
    , size_t * return_);
#define pxr_SdfFileFormat_GetCurrentCount pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsUnique(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfFileFormat_IsUnique pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_SetShouldInvokeUniqueChangedListener(
    pxr_SdfFileFormat_t * this_
    , _Bool shouldCall);
#define pxr_SdfFileFormat_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____SdfFileFormat_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_EnableNotification2(
    pxr_SdfFileFormat_t const * this_);
#define pxr_SdfFileFormat_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfFileFormat_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetUniqueIdentifier(
    pxr_SdfFileFormat_t const * this_
    , void const * * return_);
#define pxr_SdfFileFormat_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetUniqueIdentifier


/** Returns the schema for this format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetSchema(
    pxr_SdfFileFormat_t const * this_
    , pxr_SdfSchemaBase_t const * * return_);
#define pxr_SdfFileFormat_GetSchema pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetSchema


/** Returns the format identifier. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFormatId(
    pxr_SdfFileFormat_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfFileFormat_GetFormatId pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFormatId


/** Returns the target for this file format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetTarget(
    pxr_SdfFileFormat_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfFileFormat_GetTarget pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetTarget


/** Returns the cookie to be used when writing files with this format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFileCookie(
    pxr_SdfFileFormat_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfFileFormat_GetFileCookie pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFileCookie


/** Returns the current version of this file format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetVersionString(
    pxr_SdfFileFormat_t const * this_
    , pxr_TfToken_t const * * return_);
#define pxr_SdfFileFormat_GetVersionString pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetVersionString


/** Returns true if this file format is the primary format for the 
extensions it handles. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsPrimaryFormatForExtensions(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfFileFormat_IsPrimaryFormatForExtensions pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsPrimaryFormatForExtensions


/** Returns the primary file extension for this format. This is the
extension that is reported for layers using this file format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetPrimaryFileExtension(
    pxr_SdfFileFormat_t const * this_
    , std_string_t const * * return_);
#define pxr_SdfFileFormat_GetPrimaryFileExtension pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetPrimaryFileExtension


/** Returns true if \p extension matches one of the extensions returned by
GetFileExtensions. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsSupportedExtension(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_
    , std_string_t const * extension);
#define pxr_SdfFileFormat_IsSupportedExtension pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsSupportedExtension


/** Returns true if this file format is a package containing other
assets. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsPackage(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfFileFormat_IsPackage pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsPackage


/** Returns the path of the "root" layer contained in the package
layer at \p resolvedPath produced by this file format. If this 
file format is not a package, returns the empty string.

The package root layer is the layer in the package layer that 
is used when that package is opened via SdfLayer. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetPackageRootLayerPath(
    pxr_SdfFileFormat_t const * this_
    , std_string_t * * return_
    , std_string_t const * resolvedPath);
#define pxr_SdfFileFormat_GetPackageRootLayerPath pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetPackageRootLayerPath


/** Returns the FileFormatArguments that correspond to the default behavior
of this file format when no FileFormatArguments are passed to NewLayer
or InitData. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetDefaultFileFormatArguments(
    pxr_SdfFileFormat_t const * this_
    , std_map_string_string_t * * return_);
#define pxr_SdfFileFormat_GetDefaultFileFormatArguments pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetDefaultFileFormatArguments


/** Return true if this file format prefers to skip reloading anonymous
layers. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_ShouldSkipAnonymousReload(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfFileFormat_ShouldSkipAnonymousReload pxrInternal_v0_21__pxrReserved____SdfFileFormat_ShouldSkipAnonymousReload


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_ShouldReadAnonymousLayers(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_);
#define pxr_SdfFileFormat_ShouldReadAnonymousLayers pxrInternal_v0_21__pxrReserved____SdfFileFormat_ShouldReadAnonymousLayers


/** Returns true if \p file can be read by this format. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_CanRead(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_
    , std_string_t const * file);
#define pxr_SdfFileFormat_CanRead pxrInternal_v0_21__pxrReserved____SdfFileFormat_CanRead


/** Reads scene description from the asset specified by \p resolvedPath
into the layer \p layer.

\p metadataOnly is a flag that asks for only the layer metadata
to be read in, which can be much faster if that is all that is
required.  Note that this is just a hint: some FileFormat readers
may disregard this flag and still fully populate the layer contents.

Returns true if the asset is successfully read into \p layer,
false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_Read(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t * layer
    , std_string_t const * resolvedPath
    , _Bool metadataOnly);
#define pxr_SdfFileFormat_Read pxrInternal_v0_21__pxrReserved____SdfFileFormat_Read


/** Writes the content in \p layer into the file at \p filePath. If the
content is successfully written, this method returns true. Otherwise,
false is returned and errors are posted. The default implementation
returns false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_WriteToFile(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t const * layer
    , std_string_t const * filePath
    , std_string_t const * comment
    , std_map_string_string_t const * args);
#define pxr_SdfFileFormat_WriteToFile pxrInternal_v0_21__pxrReserved____SdfFileFormat_WriteToFile


/** Reads data in the string \p str into the layer \p layer. If
the file is successfully read, this method returns true. Otherwise,
false is returned and errors are posted. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_ReadFromString(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t * layer
    , std_string_t const * str);
#define pxr_SdfFileFormat_ReadFromString pxrInternal_v0_21__pxrReserved____SdfFileFormat_ReadFromString


/** Writes the content in \p layer to the string \p str. This function
should write a textual representation of \p layer to the stream
that can be read back in via ReadFromString. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_WriteToString(
    pxr_SdfFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t const * layer
    , std_string_t * str
    , std_string_t const * comment);
#define pxr_SdfFileFormat_WriteToString pxrInternal_v0_21__pxrReserved____SdfFileFormat_WriteToString


/** Returns the file extension for path or file name \p s, without the
leading dot character. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFileExtension(
    std_string_t * * return_
    , std_string_t const * s);
#define pxr_SdfFileFormat_GetFileExtension pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFileExtension


#ifdef __cplusplus
}
#endif
