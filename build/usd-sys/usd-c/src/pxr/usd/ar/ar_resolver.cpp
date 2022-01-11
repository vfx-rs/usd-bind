#include "pxr/usd/ar/ar_resolver_private.h"

#include "pxr/base/vt/vt_value_private.h"
#include "pxr/usd/ar/ar_asset_info_private.h"
#include "pxr/usd/ar/ar_resolved_path_private.h"
#include "pxr/usd/ar/ar_resolver_context_private.h"
#include "pxr/usd/ar/ar_timestamp_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_dtor(
    pxr_ArResolver_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateIdentifier(
    pxr_ArResolver_t const * this_
    , std_string_t * * return_
    , std_string_t const * assetPath
    , pxr_ArResolvedPath_t const * anchorAssetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> CreateIdentifier(to_cpp_ref(assetPath), to_cpp_ref(anchorAssetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateIdentifierForNewAsset(
    pxr_ArResolver_t const * this_
    , std_string_t * * return_
    , std_string_t const * assetPath
    , pxr_ArResolvedPath_t const * anchorAssetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> CreateIdentifierForNewAsset(to_cpp_ref(assetPath), to_cpp_ref(anchorAssetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_Resolve(
    pxr_ArResolver_t const * this_
    , pxr_ArResolvedPath_t * * return_
    , std_string_t const * assetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Resolve(to_cpp_ref(assetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_ResolveForNewAsset(
    pxr_ArResolver_t const * this_
    , pxr_ArResolvedPath_t * * return_
    , std_string_t const * assetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> ResolveForNewAsset(to_cpp_ref(assetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_BindContext(
    pxr_ArResolver_t * this_
    , pxr_ArResolverContext_t const * context
    , pxr_VtValue_t * bindingData)
{
    try {
        (to_cpp(this_)) -> BindContext(to_cpp_ref(context), to_cpp(bindingData));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_UnbindContext(
    pxr_ArResolver_t * this_
    , pxr_ArResolverContext_t const * context
    , pxr_VtValue_t * bindingData)
{
    try {
        (to_cpp(this_)) -> UnbindContext(to_cpp_ref(context), to_cpp(bindingData));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateDefaultContext(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> CreateDefaultContext());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateDefaultContextForAsset(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_
    , std_string_t const * assetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> CreateDefaultContextForAsset(to_cpp_ref(assetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateContextFromString(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_
    , std_string_t const * contextStr)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> CreateContextFromString(to_cpp_ref(contextStr)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CreateContextFromString_1(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_
    , std_string_t const * uriScheme
    , std_string_t const * contextStr)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> CreateContextFromString(to_cpp_ref(uriScheme), to_cpp_ref(contextStr)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_RefreshContext(
    pxr_ArResolver_t * this_
    , pxr_ArResolverContext_t const * context)
{
    try {
        (to_cpp(this_)) -> RefreshContext(to_cpp_ref(context));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_GetCurrentContext(
    pxr_ArResolver_t const * this_
    , pxr_ArResolverContext_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetCurrentContext());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_IsContextDependentPath(
    pxr_ArResolver_t const * this_
    , _Bool * return_
    , std_string_t const * assetPath)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsContextDependentPath(to_cpp_ref(assetPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_GetExtension(
    pxr_ArResolver_t const * this_
    , std_string_t * * return_
    , std_string_t const * assetPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetExtension(to_cpp_ref(assetPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_GetAssetInfo(
    pxr_ArResolver_t const * this_
    , pxr_ArAssetInfo_t * * return_
    , std_string_t const * assetPath
    , pxr_ArResolvedPath_t const * resolvedPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetAssetInfo(to_cpp_ref(assetPath), to_cpp_ref(resolvedPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_GetModificationTimestamp(
    pxr_ArResolver_t const * this_
    , pxr_ArTimestamp_t * * return_
    , std_string_t const * assetPath
    , pxr_ArResolvedPath_t const * resolvedPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetModificationTimestamp(to_cpp_ref(assetPath), to_cpp_ref(resolvedPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_CanWriteAssetToPath(
    pxr_ArResolver_t const * this_
    , _Bool * return_
    , pxr_ArResolvedPath_t const * resolvedPath
    , std_string_t * whyNot)
{
    try {
        *(return_) = (to_cpp(this_)) -> CanWriteAssetToPath(to_cpp_ref(resolvedPath), to_cpp(whyNot));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_BeginCacheScope(
    pxr_ArResolver_t * this_
    , pxr_VtValue_t * cacheScopeData)
{
    try {
        (to_cpp(this_)) -> BeginCacheScope(to_cpp(cacheScopeData));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_EndCacheScope(
    pxr_ArResolver_t * this_
    , pxr_VtValue_t * cacheScopeData)
{
    try {
        (to_cpp(this_)) -> EndCacheScope(to_cpp(cacheScopeData));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArResolver_IsRepositoryPath(
    pxr_ArResolver_t const * this_
    , _Bool * return_
    , std_string_t const * path)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsRepositoryPath(to_cpp_ref(path));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

