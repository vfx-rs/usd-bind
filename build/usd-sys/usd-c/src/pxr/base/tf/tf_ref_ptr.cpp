#include "pxr/base/tf/tf_ref_ptr_private.h"

#include "pxr/usd/usd/usd_stage_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__copy(
    pxr_UsdStageRefPtr_t * * this_
    , pxr_UsdStageRefPtr_t const * p)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::TfRefPtr<pxr::UsdStage>(to_cpp_ref(p)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__dtor(
    pxr_UsdStageRefPtr_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__deref(
    pxr_UsdStageRefPtr_t const * this_
    , pxr_UsdStage_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator*());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____TfRefPtr_pxr__UsdStage__is_null(
    pxr_UsdStageRefPtr_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

