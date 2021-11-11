#include "pxr/usd/usd/usd_prim_flags_private.h"

#include "pxr/usd/usd/usd_prim_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_Term_ctor(
    pxr_Usd_Term_t * this_
    , pxr_Usd_PrimFlags flag)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_Term(pxr_Usd_PrimFlags_to_cpp_ref(&(flag)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_Term_ctor_1(
    pxr_Usd_Term_t * this_
    , pxr_Usd_PrimFlags flag
    , _Bool negated)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_Term(pxr_Usd_PrimFlags_to_cpp_ref(&(flag)), negated);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_Term_op_neg(
    pxr_Usd_Term_t const * this_
    , pxr_Usd_Term_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator!());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_Term__eq(
    pxr_Usd_Term_t const * this_
    , _Bool * return_
    , pxr_Usd_Term_t other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(&(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_Term__ne(
    pxr_Usd_Term_t const * this_
    , _Bool * return_
    , pxr_Usd_Term_t other)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(&(other)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_Term_copy(
    pxr_Usd_Term_t * this_
    , pxr_Usd_Term_t const * rhs)
{
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_Term(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_Term_dtor(
    pxr_Usd_Term_t * this_)
{
        (to_cpp(this_)) -> pxrInternal_v0_21__pxrReserved__::Usd_Term::~Usd_Term();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_sizeof()
{
        return sizeof(pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_alignof()
{
        return alignof(pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_ctor(
    pxr_Usd_PrimFlagsPredicate_t * this_)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_ctor_1(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_PrimFlags flag)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate(pxr_Usd_PrimFlags_to_cpp_ref(&(flag)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_ctor_2(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_Term_t term)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate(to_cpp_ref(&(term)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_Tautology(
    pxr_Usd_PrimFlagsPredicate_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate::Tautology());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_Contradiction(
    pxr_Usd_PrimFlagsPredicate_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate::Contradiction());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_TraverseInstanceProxies(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_PrimFlagsPredicate_t * * return_
    , _Bool traverse)
{
    try {
        to_c(return_, (to_cpp(this_)) -> TraverseInstanceProxies(traverse));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_IncludeInstanceProxiesInTraversal(
    pxr_Usd_PrimFlagsPredicate_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IncludeInstanceProxiesInTraversal();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_func(
    pxr_Usd_PrimFlagsPredicate_t const * this_
    , _Bool * return_
    , pxr_UsdPrim_t const * prim)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(prim));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_copy(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_PrimFlagsPredicate_t const * rhs)
{
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_dtor(
    pxr_Usd_PrimFlagsPredicate_t * this_)
{
        (to_cpp(this_)) -> pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsPredicate::~Usd_PrimFlagsPredicate();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate__assign(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_PrimFlagsPredicate_t * * return_
    , pxr_Usd_PrimFlagsPredicate_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_sizeof()
{
        return sizeof(pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsConjunction);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_alignof()
{
        return alignof(pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsConjunction);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_Tautology(
    pxr_Usd_PrimFlagsPredicate_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsConjunction::Tautology());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_Contradiction(
    pxr_Usd_PrimFlagsPredicate_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsConjunction::Contradiction());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_TraverseInstanceProxies(
    pxr_Usd_PrimFlagsConjunction_t * this_
    , pxr_Usd_PrimFlagsPredicate_t * * return_
    , _Bool traverse)
{
    try {
        to_c(return_, (to_cpp(this_)) -> TraverseInstanceProxies(traverse));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_IncludeInstanceProxiesInTraversal(
    pxr_Usd_PrimFlagsConjunction_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IncludeInstanceProxiesInTraversal();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_func(
    pxr_Usd_PrimFlagsConjunction_t const * this_
    , _Bool * return_
    , pxr_UsdPrim_t const * prim)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(prim));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_ctor(
    pxr_Usd_PrimFlagsConjunction_t * this_)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsConjunction();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_ctor_1(
    pxr_Usd_PrimFlagsConjunction_t * this_
    , pxr_Usd_Term_t term)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsConjunction(to_cpp_ref(&(term)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_op_bit_and_assign(
    pxr_Usd_PrimFlagsConjunction_t * this_
    , pxr_Usd_PrimFlagsConjunction_t * * return_
    , pxr_Usd_Term_t term)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator&=(to_cpp_ref(&(term))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_op_neg(
    pxr_Usd_PrimFlagsConjunction_t const * this_
    , pxr_Usd_PrimFlagsDisjunction_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator!());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_copy(
    pxr_Usd_PrimFlagsConjunction_t * this_
    , pxr_Usd_PrimFlagsConjunction_t const * rhs)
{
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsConjunction(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsConjunction_dtor(
    pxr_Usd_PrimFlagsConjunction_t * this_)
{
        (to_cpp(this_)) -> pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsConjunction::~Usd_PrimFlagsConjunction();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_sizeof()
{
        return sizeof(pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsDisjunction);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_alignof()
{
        return alignof(pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsDisjunction);
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_Tautology(
    pxr_Usd_PrimFlagsPredicate_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsDisjunction::Tautology());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_Contradiction(
    pxr_Usd_PrimFlagsPredicate_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsDisjunction::Contradiction());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_TraverseInstanceProxies(
    pxr_Usd_PrimFlagsDisjunction_t * this_
    , pxr_Usd_PrimFlagsPredicate_t * * return_
    , _Bool traverse)
{
    try {
        to_c(return_, (to_cpp(this_)) -> TraverseInstanceProxies(traverse));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_IncludeInstanceProxiesInTraversal(
    pxr_Usd_PrimFlagsDisjunction_t const * this_
    , _Bool * return_)
{
    try {
        *(return_) = (to_cpp(this_)) -> IncludeInstanceProxiesInTraversal();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_func(
    pxr_Usd_PrimFlagsDisjunction_t const * this_
    , _Bool * return_
    , pxr_UsdPrim_t const * prim)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator()(to_cpp_ref(prim));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_ctor(
    pxr_Usd_PrimFlagsDisjunction_t * this_)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsDisjunction();
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_ctor_1(
    pxr_Usd_PrimFlagsDisjunction_t * this_
    , pxr_Usd_Term_t term)
{
    try {
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsDisjunction(to_cpp_ref(&(term)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_op_bit_or_assign(
    pxr_Usd_PrimFlagsDisjunction_t * this_
    , pxr_Usd_PrimFlagsDisjunction_t * * return_
    , pxr_Usd_Term_t term)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator|=(to_cpp_ref(&(term))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_op_neg(
    pxr_Usd_PrimFlagsDisjunction_t const * this_
    , pxr_Usd_PrimFlagsConjunction_t * return_)
{
    try {
        to_c_copy(return_, (to_cpp(this_)) -> operator!());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_copy(
    pxr_Usd_PrimFlagsDisjunction_t * this_
    , pxr_Usd_PrimFlagsDisjunction_t const * rhs)
{
        new (this_) pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsDisjunction(to_cpp_ref(rhs));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsDisjunction_dtor(
    pxr_Usd_PrimFlagsDisjunction_t * this_)
{
        (to_cpp(this_)) -> pxrInternal_v0_21__pxrReserved__::Usd_PrimFlagsDisjunction::~Usd_PrimFlagsDisjunction();
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_neg(
    pxr_Usd_Term_t * return_
    , pxr_Usd_PrimFlags flag)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::operator!(pxr_Usd_PrimFlags_to_cpp_ref(&(flag))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_and(
    pxr_Usd_PrimFlagsConjunction_t * return_
    , pxr_Usd_Term_t lhs
    , pxr_Usd_Term_t rhs)
{
    try {
        to_c_copy(return_, (to_cpp_ref(&(lhs)) && to_cpp_ref(&(rhs))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_and_1(
    pxr_Usd_PrimFlagsConjunction_t * return_
    , pxr_Usd_PrimFlagsConjunction_t const * conjunction
    , pxr_Usd_Term_t rhs)
{
    try {
        to_c_copy(return_, (to_cpp_ref(conjunction) && to_cpp_ref(&(rhs))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_and_2(
    pxr_Usd_PrimFlagsConjunction_t * return_
    , pxr_Usd_Term_t lhs
    , pxr_Usd_PrimFlagsConjunction_t const * conjunction)
{
    try {
        to_c_copy(return_, (to_cpp_ref(&(lhs)) && to_cpp_ref(conjunction)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_and_3(
    pxr_Usd_PrimFlagsConjunction_t * return_
    , pxr_Usd_PrimFlags lhs
    , pxr_Usd_PrimFlags rhs)
{
    try {
        to_c_copy(return_, (pxr_Usd_PrimFlags_to_cpp_ref(&(lhs)) && pxr_Usd_PrimFlags_to_cpp_ref(&(rhs))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_or(
    pxr_Usd_PrimFlagsDisjunction_t * return_
    , pxr_Usd_Term_t lhs
    , pxr_Usd_Term_t rhs)
{
    try {
        to_c_copy(return_, (to_cpp_ref(&(lhs)) || to_cpp_ref(&(rhs))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_or_1(
    pxr_Usd_PrimFlagsDisjunction_t * return_
    , pxr_Usd_PrimFlagsDisjunction_t const * disjunction
    , pxr_Usd_Term_t rhs)
{
    try {
        to_c_copy(return_, (to_cpp_ref(disjunction) || to_cpp_ref(&(rhs))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_or_2(
    pxr_Usd_PrimFlagsDisjunction_t * return_
    , pxr_Usd_Term_t lhs
    , pxr_Usd_PrimFlagsDisjunction_t const * disjunction)
{
    try {
        to_c_copy(return_, (to_cpp_ref(&(lhs)) || to_cpp_ref(disjunction)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___op_or_3(
    pxr_Usd_PrimFlagsDisjunction_t * return_
    , pxr_Usd_PrimFlags lhs
    , pxr_Usd_PrimFlags rhs)
{
    try {
        to_c_copy(return_, (pxr_Usd_PrimFlags_to_cpp_ref(&(lhs)) || pxr_Usd_PrimFlags_to_cpp_ref(&(rhs))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdTraverseInstanceProxies(
    pxr_Usd_PrimFlagsPredicate_t * return_
    , pxr_Usd_PrimFlagsPredicate_t predicate)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::UsdTraverseInstanceProxies(to_cpp_ref(&(predicate))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdTraverseInstanceProxies_1(
    pxr_Usd_PrimFlagsPredicate_t * return_)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::UsdTraverseInstanceProxies());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

