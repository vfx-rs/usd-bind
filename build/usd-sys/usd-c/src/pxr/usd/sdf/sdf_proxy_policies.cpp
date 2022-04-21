#include "pxr/usd/sdf/sdf_proxy_policies_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "pxr/usd/sdf/sdf_payload_private.h"
#include "pxr/usd/sdf/sdf_reference_private.h"
#include "std_string_private.h"
#include "std_vector_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_Canonicalize(
    std_string_t const * * return_
    , std_string_t const * x)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy::Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_Canonicalize_1(
    std_vector_string_t const * * return_
    , std_vector_string_t const * x)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfNameKeyPolicy::Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNameTokenKeyPolicy_Canonicalize(
    pxr_TfToken_t const * * return_
    , pxr_TfToken_t const * x)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfNameTokenKeyPolicy::Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_ctor(
    pxr_SdfPathKeyPolicy_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfPathKeyPolicy());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_Canonicalize(
    pxr_SdfPathKeyPolicy_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * x)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_Canonicalize_1(
    pxr_SdfPathKeyPolicy_t const * this_
    , std_SdfPathVector_t * * return_
    , std_SdfPathVector_t const * x)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy__assign(
    pxr_SdfPathKeyPolicy_t * this_
    , pxr_SdfPathKeyPolicy_t * * return_
    , pxr_SdfPathKeyPolicy_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPayloadTypePolicy_Canonicalize(
    pxr_SdfPayload_t const * * return_
    , pxr_SdfPayload_t const * x)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfPayloadTypePolicy::Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfReferenceTypePolicy_Canonicalize(
    pxr_SdfReference_t const * * return_
    , pxr_SdfReference_t const * x)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfReferenceTypePolicy::Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSubLayerTypePolicy_Canonicalize(
    std_string_t const * * return_
    , std_string_t const * x)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy::Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfSubLayerTypePolicy_Canonicalize_1(
    std_vector_string_t const * * return_
    , std_vector_string_t const * x)
{
    try {
        to_c(return_, pxrInternal_v0_21__pxrReserved__::SdfSubLayerTypePolicy::Canonicalize(to_cpp_ref(x)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAttributeViewPredicate_ctor(
    pxr_SdfAttributeViewPredicate_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfAttributeViewPredicate());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfRelationshipViewPredicate_ctor(
    pxr_SdfRelationshipViewPredicate_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfRelationshipViewPredicate());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

