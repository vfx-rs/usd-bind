#include "pxr/usd/pcp/pcp_map_expression_private.h"

#include "pxr/usd/pcp/pcp_map_function_private.h"
#include "pxr/usd/sdf/sdf_layer_offset_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Evaluate(
    pxr_PcpMapExpression_t const * this_
    , pxr_PcpMapFunction_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> Evaluate());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_ctor(
    pxr_PcpMapExpression_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpMapExpression());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Swap(
    pxr_PcpMapExpression_t * this_
    , pxr_PcpMapExpression_t * other)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsNull(
    pxr_PcpMapExpression_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsNull();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Identity(
    pxr_PcpMapExpression_t * * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Identity());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Constant(
    pxr_PcpMapExpression_t * * return_
    , pxr_PcpMapFunction_t const * constValue)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::PcpMapExpression::Constant(to_cpp_ref(constValue)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Compose(
    pxr_PcpMapExpression_t const * this_
    , pxr_PcpMapExpression_t * * return_
    , pxr_PcpMapExpression_t const * f)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Compose(to_cpp_ref(f)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_Inverse(
    pxr_PcpMapExpression_t const * this_
    , pxr_PcpMapExpression_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Inverse());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_AddRootIdentity(
    pxr_PcpMapExpression_t const * this_
    , pxr_PcpMapExpression_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> AddRootIdentity());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsConstantIdentity(
    pxr_PcpMapExpression_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsConstantIdentity();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_IsIdentity(
    pxr_PcpMapExpression_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsIdentity();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_MapSourceToTarget(
    pxr_PcpMapExpression_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> MapSourceToTarget(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_MapTargetToSource(
    pxr_PcpMapExpression_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * path)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> MapTargetToSource(to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_GetTimeOffset(
    pxr_PcpMapExpression_t const * this_
    , pxr_SdfLayerOffset_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetTimeOffset());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_GetString(
    pxr_PcpMapExpression_t const * this_
    , std_string_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetString());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_copy(
    pxr_PcpMapExpression_t * * this_
    , pxr_PcpMapExpression_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpMapExpression(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__assign(
    pxr_PcpMapExpression_t * this_
    , pxr_PcpMapExpression_t * * return_
    , pxr_PcpMapExpression_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression_dtor(
    pxr_PcpMapExpression_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_dtor(
    pxr_PcpMapExpression_Variable_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_GetValue(
    pxr_PcpMapExpression_Variable_t const * this_
    , pxr_PcpMapFunction_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> GetValue());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_SetValue(
    pxr_PcpMapExpression_Variable_t * this_
    , pxr_PcpMapFunction_t * value)
{
    try {
        (to_cpp(this_)) -> SetValue(to_cpp_ref(value));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapExpression__Variable_GetExpression(
    pxr_PcpMapExpression_Variable_t const * this_
    , pxr_PcpMapExpression_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetExpression());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

