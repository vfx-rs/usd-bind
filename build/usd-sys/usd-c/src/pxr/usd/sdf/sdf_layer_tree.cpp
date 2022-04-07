#include "pxr/usd/sdf/sdf_layer_tree_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/sdf/sdf_layer_offset_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetCurrentCount(
    pxr_SdfLayerTree_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_IsUnique(
    pxr_SdfLayerTree_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_SetShouldInvokeUniqueChangedListener(
    pxr_SdfLayerTree_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_EnableNotification2(
    pxr_SdfLayerTree_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetUniqueIdentifier(
    pxr_SdfLayerTree_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetLayer(
    pxr_SdfLayerTree_t const * this_
    , pxr_SdfLayerHandle_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetLayer());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_GetOffset(
    pxr_SdfLayerTree_t const * this_
    , pxr_SdfLayerOffset_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetOffset());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfLayerTree_dtor(
    pxr_SdfLayerTree_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

