#include "pxr/usd/ar/ar_package_resolver_private.h"

#include "pxr/base/vt/vt_value_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArPackageResolver_dtor(
    pxr_ArPackageResolver_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArPackageResolver_Resolve(
    pxr_ArPackageResolver_t * this_
    , std_string_t * * return_
    , std_string_t const * resolvedPackagePath
    , std_string_t const * packagedPath)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Resolve(to_cpp_ref(resolvedPackagePath), to_cpp_ref(packagedPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArPackageResolver_BeginCacheScope(
    pxr_ArPackageResolver_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArPackageResolver_EndCacheScope(
    pxr_ArPackageResolver_t * this_
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

