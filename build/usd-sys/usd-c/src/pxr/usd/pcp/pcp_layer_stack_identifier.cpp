#include "pxr/usd/pcp/pcp_layer_stack_identifier_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/ar/ar_resolver_context_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_ctor(
    pxr_PcpLayerStackIdentifier_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_ctor_1(
    pxr_PcpLayerStackIdentifier_t * * this_
    , pxr_SdfLayerHandle_t const * rootLayer_
    , pxr_SdfLayerHandle_t const * sessionLayer_
    , pxr_ArResolverContext_t const * pathResolverContext_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier(to_cpp_ref(rootLayer_), to_cpp_ref(sessionLayer_), to_cpp_ref(pathResolverContext_)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__assign(
    pxr_PcpLayerStackIdentifier_t * this_
    , pxr_PcpLayerStackIdentifier_t * * return_
    , pxr_PcpLayerStackIdentifier_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__eq(
    pxr_PcpLayerStackIdentifier_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackIdentifier_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_operator_(
    pxr_PcpLayerStackIdentifier_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackIdentifier_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_GetHash(
    pxr_PcpLayerStackIdentifier_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetHash();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier_copy(
    pxr_PcpLayerStackIdentifier_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifier(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifier__Hash__op_call(
    pxr_PcpLayerStackIdentifier_Hash_t const * this_
    , size_t * return_
    , pxr_PcpLayerStackIdentifier_t const * x)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(x));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_ctor(
    pxr_PcpLayerStackIdentifierStr_t * * this_
    , std_string_t const * rootLayerId
    , std_string_t const * sessionLayerId
    , pxr_ArResolverContext_t const * resolverContext)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr(to_cpp_ref(rootLayerId), to_cpp_ref(sessionLayerId), to_cpp_ref(resolverContext)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_ctor_1(
    pxr_PcpLayerStackIdentifierStr_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * lsid)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr(to_cpp_ref(lsid)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__eq(
    pxr_PcpLayerStackIdentifierStr_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackIdentifierStr_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_operator_(
    pxr_PcpLayerStackIdentifierStr_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackIdentifierStr_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_GetHash(
    pxr_PcpLayerStackIdentifierStr_t const * this_
    , size_t * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> GetHash();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_copy(
    pxr_PcpLayerStackIdentifierStr_t * * this_
    , pxr_PcpLayerStackIdentifierStr_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackIdentifierStr(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__assign(
    pxr_PcpLayerStackIdentifierStr_t * this_
    , pxr_PcpLayerStackIdentifierStr_t * * return_
    , pxr_PcpLayerStackIdentifierStr_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr_dtor(
    pxr_PcpLayerStackIdentifierStr_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackIdentifierStr__Hash__op_call(
    pxr_PcpLayerStackIdentifierStr_Hash_t const * this_
    , size_t * return_
    , pxr_PcpLayerStackIdentifierStr_t const * x)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(x));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_4(
    size_t * return_
    , pxr_PcpLayerStackIdentifier_t const * x)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::hash_value(to_cpp_ref(x));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_5(
    size_t * return_
    , pxr_PcpLayerStackIdentifierStr_t const * x)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::hash_value(to_cpp_ref(x));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

