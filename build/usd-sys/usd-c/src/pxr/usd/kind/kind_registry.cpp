#include "pxr/usd/kind/kind_registry_private.h"

#include "pxr/base/tf/tf_token_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____KindRegistry_GetInstance(
    pxr_KindRegistry_t * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::KindRegistry::GetInstance());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____KindRegistry_HasKind(
    _Bool * return_
    , pxr_TfToken_t const * kind)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::KindRegistry::HasKind(to_cpp_ref(kind));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____KindRegistry_GetBaseKind(
    pxr_TfToken_t * return_
    , pxr_TfToken_t const * kind)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::KindRegistry::GetBaseKind(to_cpp_ref(kind)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____KindRegistry_IsA(
    _Bool * return_
    , pxr_TfToken_t const * derivedKind
    , pxr_TfToken_t const * baseKind)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::KindRegistry::IsA(to_cpp_ref(derivedKind), to_cpp_ref(baseKind));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

