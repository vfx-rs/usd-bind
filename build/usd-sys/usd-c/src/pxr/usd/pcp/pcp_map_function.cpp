#include "pxr/usd/pcp/pcp_map_function_private.h"

#include "pxr/usd/sdf/sdf_layer_offset_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_ctor(
    pxr_PcpMapFunction_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpMapFunction());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_Identity(
    pxr_PcpMapFunction_t const * * return_)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::PcpMapFunction::Identity());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_Swap(
    pxr_PcpMapFunction_t * this_
    , pxr_PcpMapFunction_t * map)
{
    try {
        (to_cpp(this_)) -> Swap(to_cpp_ref(map));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_swap(
    pxr_PcpMapFunction_t * this_
    , pxr_PcpMapFunction_t * map)
{
    try {
        (to_cpp(this_)) -> swap(to_cpp_ref(map));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction__eq(
    pxr_PcpMapFunction_t const * this_
    , _Bool * return_
    , pxr_PcpMapFunction_t const * map)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(map));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction__ne(
    pxr_PcpMapFunction_t const * this_
    , _Bool * return_
    , pxr_PcpMapFunction_t const * map)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(map));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_IsNull(
    pxr_PcpMapFunction_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_IsIdentity(
    pxr_PcpMapFunction_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_HasRootIdentity(
    pxr_PcpMapFunction_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> HasRootIdentity();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_MapSourceToTarget(
    pxr_PcpMapFunction_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_MapTargetToSource(
    pxr_PcpMapFunction_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_Compose(
    pxr_PcpMapFunction_t const * this_
    , pxr_PcpMapFunction_t * * return_
    , pxr_PcpMapFunction_t const * f)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Compose(to_cpp_ref(f)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_ComposeOffset(
    pxr_PcpMapFunction_t const * this_
    , pxr_PcpMapFunction_t * * return_
    , pxr_SdfLayerOffset_t const * newOffset)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> ComposeOffset(to_cpp_ref(newOffset)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetInverse(
    pxr_PcpMapFunction_t const * this_
    , pxr_PcpMapFunction_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> GetInverse());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetTimeOffset(
    pxr_PcpMapFunction_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_GetString(
    pxr_PcpMapFunction_t const * this_
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

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_Hash(
    pxr_PcpMapFunction_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> Hash();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_copy(
    pxr_PcpMapFunction_t * * this_
    , pxr_PcpMapFunction_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpMapFunction(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction__assign(
    pxr_PcpMapFunction_t * this_
    , pxr_PcpMapFunction_t * * return_
    , pxr_PcpMapFunction_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpMapFunction_dtor(
    pxr_PcpMapFunction_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_1(
    size_t * return_
    , pxr_PcpMapFunction_t const * x)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::hash_value(to_cpp_ref(x));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

