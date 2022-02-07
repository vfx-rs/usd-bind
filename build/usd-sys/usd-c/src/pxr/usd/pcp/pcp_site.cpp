#include "pxr/usd/pcp/pcp_site_private.h"

#include "pxr/base/tf/tf_weak_ptr_private.h"
#include "pxr/usd/pcp/pcp_layer_stack_identifier_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_ctor(
    pxr_PcpLayerStackSite_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__eq(
    pxr_PcpLayerStackSite_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackSite_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_operator_(
    pxr_PcpLayerStackSite_t const * this_
    , _Bool * return_
    , pxr_PcpLayerStackSite_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_copy(
    pxr_PcpLayerStackSite_t * * this_
    , pxr_PcpLayerStackSite_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__assign(
    pxr_PcpLayerStackSite_t * this_
    , pxr_PcpLayerStackSite_t * * return_
    , pxr_PcpLayerStackSite_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_dtor(
    pxr_PcpLayerStackSite_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash__op_call(
    pxr_PcpLayerStackSite_Hash_t const * this_
    , size_t * return_
    , pxr_PcpLayerStackSite_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_ctor(
    pxr_PcpLayerStackSite_Hash_t * * this_)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash());
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_copy(
    pxr_PcpLayerStackSite_Hash_t * * this_
    , pxr_PcpLayerStackSite_Hash_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpLayerStackSite::Hash(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpLayerStackSite__Hash_dtor(
    pxr_PcpLayerStackSite_Hash_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_ctor(
    pxr_PcpSite_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSite());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_ctor_1(
    pxr_PcpSite_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * _param0
    , pxr_SdfPath_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSite(to_cpp_ref(_param0), to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_ctor_2(
    pxr_PcpSite_t * * this_
    , pxr_SdfLayerHandle_t const * _param0
    , pxr_SdfPath_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSite(to_cpp_ref(_param0), to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_ctor_3(
    pxr_PcpSite_t * * this_
    , pxr_PcpLayerStackSite_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSite(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__eq(
    pxr_PcpSite_t const * this_
    , _Bool * return_
    , pxr_PcpSite_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_operator_(
    pxr_PcpSite_t const * this_
    , _Bool * return_
    , pxr_PcpSite_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__assign(
    pxr_PcpSite_t * this_
    , pxr_PcpSite_t * * return_
    , pxr_PcpSite_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite_copy(
    pxr_PcpSite_t * * this_
    , pxr_PcpSite_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSite(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__Hash__op_call(
    pxr_PcpSite_Hash_t const * this_
    , size_t * return_
    , pxr_PcpSite_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__Hash_ctor(
    pxr_PcpSite_Hash_t * * this_)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSite::Hash());
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__Hash_copy(
    pxr_PcpSite_Hash_t * * this_
    , pxr_PcpSite_Hash_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSite::Hash(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSite__Hash_dtor(
    pxr_PcpSite_Hash_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor(
    pxr_PcpSiteStr_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_1(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpLayerStackIdentifierStr_t const * _param0
    , pxr_SdfPath_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr(to_cpp_ref(_param0), to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_2(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpLayerStackIdentifier_t const * _param0
    , pxr_SdfPath_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr(to_cpp_ref(_param0), to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_3(
    pxr_PcpSiteStr_t * * this_
    , pxr_SdfLayerHandle_t const * _param0
    , pxr_SdfPath_t const * path)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr(to_cpp_ref(_param0), to_cpp_ref(path)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_4(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpLayerStackSite_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_ctor_5(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpSite_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__eq(
    pxr_PcpSiteStr_t const * this_
    , _Bool * return_
    , pxr_PcpSiteStr_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_operator_(
    pxr_PcpSiteStr_t const * this_
    , _Bool * return_
    , pxr_PcpSiteStr_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator<(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr_copy(
    pxr_PcpSiteStr_t * * this_
    , pxr_PcpSiteStr_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash__op_call(
    pxr_PcpSiteStr_Hash_t const * this_
    , size_t * return_
    , pxr_PcpSiteStr_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_ctor(
    pxr_PcpSiteStr_Hash_t * * this_)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash());
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_copy(
    pxr_PcpSiteStr_Hash_t * * this_
    , pxr_PcpSiteStr_Hash_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpSiteStr::Hash(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpSiteStr__Hash_dtor(
    pxr_PcpSiteStr_Hash_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_1(
    size_t * return_
    , pxr_PcpSite_t const * site)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::hash_value(to_cpp_ref(site));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_2(
    size_t * return_
    , pxr_PcpSiteStr_t const * site)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::hash_value(to_cpp_ref(site));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value_3(
    size_t * return_
    , pxr_PcpLayerStackSite_t const * site)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::hash_value(to_cpp_ref(site));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

