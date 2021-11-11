#include "pxr/base/tf/tf_weak_ptr_private.h"

#include "pxr/base/tf/tf_ref_ptr_private.h"
#include "pxr/usd/sdf/sdf_layer_private.h"
#include "pxr/usd/usd/usd_stage_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__is_null(
    pxr_SdfLayerHandle_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__deref(
    pxr_SdfLayerHandle_t const * this_
    , pxr_SdfLayer_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator*());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__ctor(
    pxr_SdfLayerHandle_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::TfWeakPtr<pxr::SdfLayer>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__copy(
    pxr_SdfLayerHandle_t * * this_
    , pxr_SdfLayerHandle_t const * p)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::TfWeakPtr<pxr::SdfLayer>(to_cpp_ref(p)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__IsExpired(
    pxr_SdfLayerHandle_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsExpired();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__SdfLayer__dtor(
    pxr_SdfLayerHandle_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__is_null(
    pxr_UsdStagePtr_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__deref(
    pxr_UsdStagePtr_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__ctor(
    pxr_UsdStagePtr_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::TfWeakPtr<pxr::UsdStage>());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__copy(
    pxr_UsdStagePtr_t * * this_
    , pxr_UsdStagePtr_t const * p)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::TfWeakPtr<pxr::UsdStage>(to_cpp_ref(p)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__IsExpired(
    pxr_UsdStagePtr_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsExpired();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__dtor(
    pxr_UsdStagePtr_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____TfWeakPtr_pxr__UsdStage__from_ref(
    pxr_UsdStagePtr_t * * this_
    , pxr_UsdStageRefPtr_t const * p)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::TfWeakPtr<pxr::UsdStage>(to_cpp_ref(p)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

