#include "pxr/usd/pcp/pcp_iterator_private.h"

#include "pxr/usd/pcp/pcp_prim_index_private.h"
#include "pxr/usd/pcp/pcp_property_index_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_inc(
    pxr_PcpNodeIterator_t * this_
    , pxr_PcpNodeIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_dec(
    pxr_PcpNodeIterator_t * this_
    , pxr_PcpNodeIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator--());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator__op_dec_1(
    pxr_PcpNodeIterator_t * this_
    , pxr_PcpNodeIterator_t * * return_
    , int rhs)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator--(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator_ctor(
    pxr_PcpNodeIterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeIterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator_copy(
    pxr_PcpNodeIterator_t * * this_
    , pxr_PcpNodeIterator_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeIterator(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator_dtor(
    pxr_PcpNodeIterator_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeIterator__assign(
    pxr_PcpNodeIterator_t * this_
    , pxr_PcpNodeIterator_t * * return_
    , pxr_PcpNodeIterator_t const * rhs)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_base(
    pxr_PcpNodeReverseIterator_t const * this_
    , pxr_PcpNodeIterator_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> base());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_ctor(
    pxr_PcpNodeReverseIterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_ctor_1(
    pxr_PcpNodeReverseIterator_t * * this_
    , pxr_PcpNodeIterator_t const * iter)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator(to_cpp_ref(iter)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_copy(
    pxr_PcpNodeReverseIterator_t * * this_
    , pxr_PcpNodeReverseIterator_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpNodeReverseIterator(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeReverseIterator_dtor(
    pxr_PcpNodeReverseIterator_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_inc(
    pxr_PcpPrimIterator_t * this_
    , pxr_PcpPrimIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_dec(
    pxr_PcpPrimIterator_t * this_
    , pxr_PcpPrimIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator--());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator__op_dec_1(
    pxr_PcpPrimIterator_t * this_
    , pxr_PcpPrimIterator_t * * return_
    , int rhs)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator--(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_ctor(
    pxr_PcpPrimIterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimIterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_ctor_1(
    pxr_PcpPrimIterator_t * * this_
    , pxr_PcpPrimIndex_t const * primIndex
    , size_t pos)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimIterator(to_cpp(primIndex), pos));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_copy(
    pxr_PcpPrimIterator_t * * this_
    , pxr_PcpPrimIterator_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimIterator(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator_dtor(
    pxr_PcpPrimIterator_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimIterator__assign(
    pxr_PcpPrimIterator_t * this_
    , pxr_PcpPrimIterator_t * * return_
    , pxr_PcpPrimIterator_t const * rhs)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_base(
    pxr_PcpPrimReverseIterator_t const * this_
    , pxr_PcpPrimIterator_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> base());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_ctor(
    pxr_PcpPrimReverseIterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_ctor_1(
    pxr_PcpPrimReverseIterator_t * * this_
    , pxr_PcpPrimIterator_t const * iter)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator(to_cpp_ref(iter)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_copy(
    pxr_PcpPrimReverseIterator_t * * this_
    , pxr_PcpPrimReverseIterator_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPrimReverseIterator(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPrimReverseIterator_dtor(
    pxr_PcpPrimReverseIterator_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_inc(
    pxr_PcpPropertyIterator_t * this_
    , pxr_PcpPropertyIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_dec(
    pxr_PcpPropertyIterator_t * this_
    , pxr_PcpPropertyIterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator--());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__op_dec_1(
    pxr_PcpPropertyIterator_t * this_
    , pxr_PcpPropertyIterator_t * * return_
    , int rhs)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator--(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_ctor(
    pxr_PcpPropertyIterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_ctor_1(
    pxr_PcpPropertyIterator_t * * this_
    , pxr_PcpPropertyIndex_t const * index
    , size_t pos)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator(to_cpp_ref(index), pos));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_IsLocal(
    pxr_PcpPropertyIterator_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsLocal();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_copy(
    pxr_PcpPropertyIterator_t * * this_
    , pxr_PcpPropertyIterator_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPropertyIterator(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator_dtor(
    pxr_PcpPropertyIterator_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyIterator__assign(
    pxr_PcpPropertyIterator_t * this_
    , pxr_PcpPropertyIterator_t * * return_
    , pxr_PcpPropertyIterator_t const * rhs)
{
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_base(
    pxr_PcpPropertyReverseIterator_t const * this_
    , pxr_PcpPropertyIterator_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> base());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_ctor(
    pxr_PcpPropertyReverseIterator_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_ctor_1(
    pxr_PcpPropertyReverseIterator_t * * this_
    , pxr_PcpPropertyIterator_t const * iter)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator(to_cpp_ref(iter)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_IsLocal(
    pxr_PcpPropertyReverseIterator_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsLocal();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_copy(
    pxr_PcpPropertyReverseIterator_t * * this_
    , pxr_PcpPropertyReverseIterator_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::PcpPropertyReverseIterator(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpPropertyReverseIterator_dtor(
    pxr_PcpPropertyReverseIterator_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

