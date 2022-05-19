#include "pxr/usd/sdf/sdf_text_file_format_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/usd/sdf/sdf_layer_private.h"
#include "pxr/usd/sdf/sdf_schema_private.h"
#include "std_map_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetCurrentCount(
    pxr_SdfTextFileFormat_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetCurrentCount();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsUnique(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsUnique();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_SetShouldInvokeUniqueChangedListener(
    pxr_SdfTextFileFormat_t * this_
    , _Bool shouldCall)
{
    try {
        (to_cpp(this_)) -> SetShouldInvokeUniqueChangedListener(shouldCall);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_EnableNotification2(
    pxr_SdfTextFileFormat_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetUniqueIdentifier(
    pxr_SdfTextFileFormat_t const * this_
    , void const * * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetUniqueIdentifier();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetSchema(
    pxr_SdfTextFileFormat_t const * this_
    , pxr_SdfSchemaBase_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetSchema());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFormatId(
    pxr_SdfTextFileFormat_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFormatId());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetTarget(
    pxr_SdfTextFileFormat_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetTarget());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileCookie(
    pxr_SdfTextFileFormat_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFileCookie());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetVersionString(
    pxr_SdfTextFileFormat_t const * this_
    , pxr_TfToken_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetVersionString());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsPrimaryFormatForExtensions(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPrimaryFormatForExtensions();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileExtensions(
    pxr_SdfTextFileFormat_t const * this_
    , std_vector_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFileExtensions());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetPrimaryFileExtension(
    pxr_SdfTextFileFormat_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetPrimaryFileExtension());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsSupportedExtension(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , std_string_t const * extension)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsSupportedExtension(to_cpp_ref(extension));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_IsPackage(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPackage();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetPackageRootLayerPath(
    pxr_SdfTextFileFormat_t const * this_
    , std_string_t * * return_
    , std_string_t const * resolvedPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetPackageRootLayerPath(to_cpp_ref(resolvedPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetDefaultFileFormatArguments(
    pxr_SdfTextFileFormat_t const * this_
    , std_map_string_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDefaultFileFormatArguments());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ShouldSkipAnonymousReload(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ShouldSkipAnonymousReload();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ShouldReadAnonymousLayers(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> ShouldReadAnonymousLayers();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_CanRead(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , std_string_t const * file)
{
    try {
        *(return_) = (to_cpp(this_)) -> CanRead(to_cpp_ref(file));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_Read(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t * layer
    , std_string_t const * resolvedPath
    , _Bool metadataOnly)
{
    try {
        *(return_) = (to_cpp(this_)) -> Read(to_cpp(layer), to_cpp_ref(resolvedPath), metadataOnly);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_WriteToFile(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t const * layer
    , std_string_t const * filePath
    , std_string_t const * comment
    , std_map_string_string_t const * args)
{
    try {
        *(return_) = (to_cpp(this_)) -> WriteToFile(to_cpp_ref(layer), to_cpp_ref(filePath), to_cpp_ref(comment), to_cpp_ref(args));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_ReadFromString(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t * layer
    , std_string_t const * str)
{
    try {
        *(return_) = (to_cpp(this_)) -> ReadFromString(to_cpp(layer), to_cpp_ref(str));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_WriteToString(
    pxr_SdfTextFileFormat_t const * this_
    , _Bool * return_
    , pxr_SdfLayer_t const * layer
    , std_string_t * str
    , std_string_t const * comment)
{
    try {
        *(return_) = (to_cpp(this_)) -> WriteToString(to_cpp_ref(layer), to_cpp(str), to_cpp_ref(comment));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfTextFileFormat_GetFileExtension(
    std_string_t * * return_
    , std_string_t const * s)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfTextFileFormat::GetFileExtension(to_cpp_ref(s)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

