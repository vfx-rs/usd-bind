#include "pxr/usd/usd/prim_range_private.h"

#include "pxr/usd/usd/c-prim_private.h"
#include "pxr/usd/usd/prim_flags_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor(
    pxr_UsdPrimRange_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdPrimRange());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor_1(
    pxr_UsdPrimRange_t * * this_
    , pxr_UsdPrim_t const * start)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdPrimRange(to_cpp_ref(start)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_ctor_2(
    pxr_UsdPrimRange_t * * this_
    , pxr_UsdPrim_t const * start
    , pxr_Usd_PrimFlagsPredicate_t const * predicate)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdPrimRange(to_cpp_ref(start), to_cpp_ref(predicate)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_PreAndPostVisit(
    pxr_UsdPrimRange_t * * return_
    , pxr_UsdPrim_t const * start)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdPrimRange::PreAndPostVisit(to_cpp_ref(start)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_PreAndPostVisit_1(
    pxr_UsdPrimRange_t * * return_
    , pxr_UsdPrim_t const * start
    , pxr_Usd_PrimFlagsPredicate_t const * predicate)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdPrimRange::PreAndPostVisit(to_cpp_ref(start), to_cpp_ref(predicate)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_AllPrims(
    pxr_UsdPrimRange_t * * return_
    , pxr_UsdPrim_t const * start)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdPrimRange::AllPrims(to_cpp_ref(start)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_AllPrimsPreAndPostVisit(
    pxr_UsdPrimRange_t * * return_
    , pxr_UsdPrim_t const * start)
{
    try {
        to_c_copy(return_, pxrInternal_v0_20__pxrReserved__::UsdPrimRange::AllPrimsPreAndPostVisit(to_cpp_ref(start)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_begin(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrimRange_iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> begin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_cbegin(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrimRange_iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> cbegin());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_front(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrim_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> front());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_end(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrimRange_iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> end());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_cend(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrimRange_iterator_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> cend());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_increment_begin(
    pxr_UsdPrimRange_t * this_)
{
    try {
        (to_cpp(this_)) -> increment_begin();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_set_begin(
    pxr_UsdPrimRange_t * this_
    , pxr_UsdPrimRange_iterator_t const * newBegin)
{
    try {
        (to_cpp(this_)) -> set_begin(to_cpp_ref(newBegin));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_empty(
    pxr_UsdPrimRange_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> empty();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_operatorbool(
    pxr_UsdPrimRange_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator bool();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__eq(
    pxr_UsdPrimRange_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__ne(
    pxr_UsdPrimRange_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_copy(
    pxr_UsdPrimRange_t * * this_
    , pxr_UsdPrimRange_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_20__pxrReserved__::UsdPrimRange(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange_dtor(
    pxr_UsdPrimRange_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_sizeof()
{
        return sizeof(pxrInternal_v0_20__pxrReserved__::UsdPrimRange::iterator);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_alignof()
{
        return alignof(pxrInternal_v0_20__pxrReserved__::UsdPrimRange::iterator);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_deref(
    pxr_UsdPrimRange_iterator_t const * this_
    , pxr_UsdPrim_t * * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator*());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__op_inc(
    pxr_UsdPrimRange_iterator_t * this_
    , pxr_UsdPrimRange_iterator_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_ctor(
    pxr_UsdPrimRange_iterator_t * this_)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::UsdPrimRange::iterator();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_ctor_1(
    pxr_UsdPrimRange_iterator_t * this_
    , pxr_UsdPrimRange_EndSentinel_t e)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::UsdPrimRange::iterator(to_cpp_ref(&(e)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_IsPostVisit(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IsPostVisit();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_PruneChildren(
    pxr_UsdPrimRange_iterator_t * this_)
{
    try {
        (to_cpp(this_)) -> PruneChildren();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__eq(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_iterator_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__eq_1(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_EndSentinel_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__ne(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_iterator_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator__ne_1(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_EndSentinel_t const * other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(other));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_copy(
    pxr_UsdPrimRange_iterator_t * this_
    , pxr_UsdPrimRange_iterator_t const * rhs)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::UsdPrimRange::iterator(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__iterator_dtor(
    pxr_UsdPrimRange_iterator_t * this_)
{
        (to_cpp(this_)) -> pxrInternal_v0_20__pxrReserved__::UsdPrimRange::iterator::~iterator();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_sizeof()
{
        return sizeof(pxrInternal_v0_20__pxrReserved__::UsdPrimRange::EndSentinel);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_alignof()
{
        return alignof(pxrInternal_v0_20__pxrReserved__::UsdPrimRange::EndSentinel);
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_copy(
    pxr_UsdPrimRange_EndSentinel_t * this_
    , pxr_UsdPrimRange_EndSentinel_t const * rhs)
{
    try {
        new (this_) pxrInternal_v0_20__pxrReserved__::UsdPrimRange::EndSentinel(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____UsdPrimRange__EndSentinel_dtor(
    pxr_UsdPrimRange_EndSentinel_t * this_)
{
        (to_cpp(this_)) -> pxrInternal_v0_20__pxrReserved__::UsdPrimRange::EndSentinel::~EndSentinel();
        return 0;
}

