#include "pxr/usd/sdf/sdf_layer_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/base/vt/vt_dictionary_private.h"
#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/sdf/sdf_asset_path_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_map_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetCurrentCount(
    pxr_SdfLayer_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsUnique(
    pxr_SdfLayer_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetShouldInvokeUniqueChangedListener(
    pxr_SdfLayer_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_EnableNotification2(
    pxr_SdfLayer_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetUniqueIdentifier(
    pxr_SdfLayer_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_dtor(
    pxr_SdfLayer_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileFormatArguments(
    pxr_SdfLayer_t const * this_
    , std_map_string_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetFileFormatArguments());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Find(
    pxr_SdfLayerHandle_t * * return_
    , std_string_t const * identifier
    , std_map_string_string_t const * args)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfLayer::Find(to_cpp_ref(identifier), to_cpp_ref(args)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_FindRelativeToLayer(
    pxr_SdfLayerHandle_t * * return_
    , pxr_SdfLayerHandle_t const * anchor
    , std_string_t const * layerPath
    , std_map_string_string_t const * args)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfLayer::FindRelativeToLayer(to_cpp_ref(anchor), to_cpp_ref(layerPath), to_cpp_ref(args)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsEmpty(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsEmpty();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_TransferContent(
    pxr_SdfLayer_t * this_
    , pxr_SdfLayerHandle_t const * layer)
{
    try {
        (to_cpp(this_)) -> TransferContent(to_cpp_ref(layer));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymous(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsAnonymous();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_IsAnonymousLayerIdentifier(
    _Bool * return_
    , std_string_t const * identifier)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfLayer::IsAnonymousLayerIdentifier(to_cpp_ref(identifier));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayNameFromIdentifier(
    std_string_t * * return_
    , std_string_t const * identifier)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfLayer::GetDisplayNameFromIdentifier(to_cpp_ref(identifier)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Save(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , _Bool force)
{
    try {
        *(return_) = (to_cpp(this_)) -> Save(force);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Export(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , std_string_t const * filename
    , std_string_t const * comment
    , std_map_string_string_t const * args)
{
    try {
        *(return_) = (to_cpp(this_)) -> Export(to_cpp_ref(filename), to_cpp_ref(comment), to_cpp_ref(args));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ExportToString(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , std_string_t * result)
{
    try {
        *(return_) = (to_cpp(this_)) -> ExportToString(to_cpp(result));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ImportFromString(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , std_string_t const * string)
{
    try {
        *(return_) = (to_cpp(this_)) -> ImportFromString(to_cpp_ref(string));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Clear(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> Clear();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Reload(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , _Bool force)
{
    try {
        *(return_) = (to_cpp(this_)) -> Reload(force);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_Import(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , std_string_t const * layerPath)
{
    try {
        *(return_) = (to_cpp(this_)) -> Import(to_cpp_ref(layerPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_UpdateExternalReference(
    pxr_SdfLayer_t * this_
    , _Bool * return_
    , std_string_t const * oldAssetPath
    , std_string_t const * newAssetPath)
{
    try {
        *(return_) = (to_cpp(this_)) -> UpdateExternalReference(to_cpp_ref(oldAssetPath), to_cpp_ref(newAssetPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SplitIdentifier(
    _Bool * return_
    , std_string_t const * identifier
    , std_string_t * layerPath
    , std_map_string_string_t * arguments)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfLayer::SplitIdentifier(to_cpp_ref(identifier), to_cpp(layerPath), to_cpp(arguments));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_CreateIdentifier(
    std_string_t * * return_
    , std_string_t const * layerPath
    , std_map_string_string_t const * arguments)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfLayer::CreateIdentifier(to_cpp_ref(layerPath), to_cpp_ref(arguments)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetIdentifier(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetIdentifier());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetIdentifier(
    pxr_SdfLayer_t * this_
    , std_string_t const * identifier)
{
    try {
        (to_cpp(this_)) -> SetIdentifier(to_cpp_ref(identifier));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetDisplayName(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDisplayName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetRealPath(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetRealPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetFileExtension(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetFileExtension());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetVersion(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetVersion());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetRepositoryPath(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetRepositoryPath());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetName(
    pxr_SdfLayer_t const * this_
    , std_string_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetAssetName());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetAssetInfo(
    pxr_SdfLayer_t const * this_
    , pxr_VtValue_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetAssetInfo());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasSpec(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasSpec(to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasField(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasField<pxrInternal_v0_21__pxrReserved__::VtValue>(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasFieldDictKey(
    pxr_SdfLayer_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t * value)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasFieldDictKey<pxrInternal_v0_21__pxrReserved__::VtValue>(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath), to_cpp(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetField(
    pxr_SdfLayer_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetField<pxrInternal_v0_21__pxrReserved__::VtValue>(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetFieldDictValueByKey(
    pxr_SdfLayer_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value)
{
    try {
        (to_cpp(this_)) -> SetFieldDictValueByKey<pxrInternal_v0_21__pxrReserved__::VtValue>(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath), to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_EraseField(
    pxr_SdfLayer_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName)
{
    try {
        (to_cpp(this_)) -> EraseField(to_cpp_ref(path), to_cpp_ref(fieldName));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_EraseFieldDictValueByKey(
    pxr_SdfLayer_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath)
{
    try {
        (to_cpp(this_)) -> EraseFieldDictValueByKey(to_cpp_ref(path), to_cpp_ref(fieldName), to_cpp_ref(keyPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetColorConfiguration(
    pxr_SdfLayer_t const * this_
    , pxr_SdfAssetPath_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetColorConfiguration());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetColorConfiguration(
    pxr_SdfLayer_t * this_
    , pxr_SdfAssetPath_t const * colorConfiguration)
{
    try {
        (to_cpp(this_)) -> SetColorConfiguration(to_cpp_ref(colorConfiguration));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasColorConfiguration(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasColorConfiguration();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearColorConfiguration(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearColorConfiguration();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetColorManagementSystem(
    pxr_SdfLayer_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetColorManagementSystem());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetColorManagementSystem(
    pxr_SdfLayer_t * this_
    , pxr_TfToken_t const * cms)
{
    try {
        (to_cpp(this_)) -> SetColorManagementSystem(to_cpp_ref(cms));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasColorManagementSystem(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasColorManagementSystem();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearColorManagementSystem(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearColorManagementSystem();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetComment(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetComment());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetComment(
    pxr_SdfLayer_t * this_
    , std_string_t const * comment)
{
    try {
        (to_cpp(this_)) -> SetComment(to_cpp_ref(comment));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetDefaultPrim(
    pxr_SdfLayer_t const * this_
    , pxr_TfToken_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDefaultPrim());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetDefaultPrim(
    pxr_SdfLayer_t * this_
    , pxr_TfToken_t const * name)
{
    try {
        (to_cpp(this_)) -> SetDefaultPrim(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearDefaultPrim(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearDefaultPrim();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasDefaultPrim(
    pxr_SdfLayer_t * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasDefaultPrim();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetDocumentation(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetDocumentation());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetDocumentation(
    pxr_SdfLayer_t * this_
    , std_string_t const * documentation)
{
    try {
        (to_cpp(this_)) -> SetDocumentation(to_cpp_ref(documentation));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetStartTimeCode(
    pxr_SdfLayer_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetStartTimeCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetStartTimeCode(
    pxr_SdfLayer_t * this_
    , double startTimecode)
{
    try {
        (to_cpp(this_)) -> SetStartTimeCode(startTimecode);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasStartTimeCode(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasStartTimeCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearStartTimeCode(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearStartTimeCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetEndTimeCode(
    pxr_SdfLayer_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetEndTimeCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetEndTimeCode(
    pxr_SdfLayer_t * this_
    , double endTimeCode)
{
    try {
        (to_cpp(this_)) -> SetEndTimeCode(endTimeCode);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasEndTimeCode(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasEndTimeCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearEndTimeCode(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearEndTimeCode();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetTimeCodesPerSecond(
    pxr_SdfLayer_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetTimeCodesPerSecond();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetTimeCodesPerSecond(
    pxr_SdfLayer_t * this_
    , double timeCodesPerSecond)
{
    try {
        (to_cpp(this_)) -> SetTimeCodesPerSecond(timeCodesPerSecond);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasTimeCodesPerSecond(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasTimeCodesPerSecond();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearTimeCodesPerSecond(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearTimeCodesPerSecond();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetFramesPerSecond(
    pxr_SdfLayer_t const * this_
    , double * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetFramesPerSecond();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetFramesPerSecond(
    pxr_SdfLayer_t * this_
    , double framesPerSecond)
{
    try {
        (to_cpp(this_)) -> SetFramesPerSecond(framesPerSecond);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasFramesPerSecond(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasFramesPerSecond();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearFramesPerSecond(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearFramesPerSecond();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetFramePrecision(
    pxr_SdfLayer_t const * this_
    , int * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetFramePrecision();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetFramePrecision(
    pxr_SdfLayer_t * this_
    , int framePrecision)
{
    try {
        (to_cpp(this_)) -> SetFramePrecision(framePrecision);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasFramePrecision(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasFramePrecision();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearFramePrecision(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearFramePrecision();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetOwner(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetOwner());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetOwner(
    pxr_SdfLayer_t * this_
    , std_string_t const * owner)
{
    try {
        (to_cpp(this_)) -> SetOwner(to_cpp_ref(owner));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasOwner(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasOwner();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearOwner(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearOwner();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetSessionOwner(
    pxr_SdfLayer_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetSessionOwner());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetSessionOwner(
    pxr_SdfLayer_t * this_
    , std_string_t const * owner)
{
    try {
        (to_cpp(this_)) -> SetSessionOwner(to_cpp_ref(owner));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasSessionOwner(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasSessionOwner();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearSessionOwner(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearSessionOwner();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_GetHasOwnedSubLayers(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetHasOwnedSubLayers();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetHasOwnedSubLayers(
    pxr_SdfLayer_t * this_
    , _Bool rhs)
{
    try {
        (to_cpp(this_)) -> SetHasOwnedSubLayers(rhs);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_SetCustomLayerData(
    pxr_SdfLayer_t * this_
    , pxr_VtDictionary_t const * value)
{
    try {
        (to_cpp(this_)) -> SetCustomLayerData(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_HasCustomLayerData(
    pxr_SdfLayer_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasCustomLayerData();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_ClearCustomLayerData(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> ClearCustomLayerData();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveInertSceneDescription(
    pxr_SdfLayer_t * this_)
{
    try {
        (to_cpp(this_)) -> RemoveInertSceneDescription();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_InsertInRootPrimOrder(
    pxr_SdfLayer_t * this_
    , pxr_TfToken_t const * name
    , int index)
{
    try {
        (to_cpp(this_)) -> InsertInRootPrimOrder(to_cpp_ref(name), index);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromRootPrimOrder(
    pxr_SdfLayer_t * this_
    , pxr_TfToken_t const * name)
{
    try {
        (to_cpp(this_)) -> RemoveFromRootPrimOrder(to_cpp_ref(name));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayer_RemoveFromRootPrimOrderByIndex(
    pxr_SdfLayer_t * this_
    , int index)
{
    try {
        (to_cpp(this_)) -> RemoveFromRootPrimOrderByIndex(index);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

