#include "pxr/usd/pcp/pcp_layer_stack_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/pcp/pcp_changes_private.h"
#include "pxr/usd/pcp/pcp_layer_stack_identifier_private.h"
#include "pxr/usd/pcp/pcp_map_expression_private.h"
#include "pxr/usd/sdf/sdf_layer_offset_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_vector_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetCurrentCount(
    pxr_PcpLayerStack_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_IsUnique(
    pxr_PcpLayerStack_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_SetShouldInvokeUniqueChangedListener(
    pxr_PcpLayerStack_t * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_EnableNotification2(
    pxr_PcpLayerStack_t const * this_)
{
    try {
        (to_cpp(this_)) -> EnableNotification2();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetUniqueIdentifier(
    pxr_PcpLayerStack_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_dtor(
    pxr_PcpLayerStack_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetIdentifier(
    pxr_PcpLayerStack_t const * this_
    , pxr_PcpLayerStackIdentifier_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetIdentifier());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetLayerOffsetForLayer(
    pxr_PcpLayerStack_t const * this_
    , pxr_SdfLayerOffset_t const * * return_
    , pxr_SdfLayerHandle_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetLayerOffsetForLayer(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetLayerOffsetForLayer_1(
    pxr_PcpLayerStack_t const * this_
    , pxr_SdfLayerOffset_t const * * return_
    , size_t layerIdx)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetLayerOffsetForLayer(layerIdx));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_HasLayer(
    pxr_PcpLayerStack_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * layer)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasLayer(to_cpp_ref(layer));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetTimeCodesPerSecond(
    pxr_PcpLayerStack_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetPathsToPrimsWithRelocates(
    pxr_PcpLayerStack_t const * this_
    , std_SdfPathVector_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetPathsToPrimsWithRelocates());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_Apply(
    pxr_PcpLayerStack_t * this_
    , pxr_PcpLayerStackChanges_t const * changes
    , pxr_PcpLifeboat_t * lifeboat)
{
    try {
        (to_cpp(this_)) -> Apply(to_cpp_ref(changes), to_cpp(lifeboat));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStack_GetExpressionForRelocatesAtPath(
    pxr_PcpLayerStack_t * this_
    , pxr_PcpMapExpression_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetExpressionForRelocatesAtPath(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpIsTimeScalingForLayerTimeCodesPerSecondDisabled(
    _Bool * return_)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpIsTimeScalingForLayerTimeCodesPerSecondDisabled();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

