#include "pxr/usd/sdf/sdf_file_format_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/usd/sdf/sdf_layer_private.h"
#include "pxr/usd/sdf/sdf_schema_private.h"
#include "std_map_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetCurrentCount(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsUnique(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_SetShouldInvokeUniqueChangedListener(
    pxr_SdfFileFormat_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_EnableNotification2(
    pxr_SdfFileFormat_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetUniqueIdentifier(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetSchema(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFormatId(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetTarget(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFileCookie(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetVersionString(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsPrimaryFormatForExtensions(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetPrimaryFileExtension(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsSupportedExtension(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_IsPackage(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetPackageRootLayerPath(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetDefaultFileFormatArguments(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_ShouldSkipAnonymousReload(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_ShouldReadAnonymousLayers(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_CanRead(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_Read(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_WriteToFile(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_ReadFromString(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_WriteToString(
    pxr_SdfFileFormat_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfFileFormat_GetFileExtension(
    std_string_t * * return_
    , std_string_t const * s)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfFileFormat::GetFileExtension(to_cpp_ref(s)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

