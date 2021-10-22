#include "std_list_private.h"

#include "pxr/base/tf/tf_error_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorList_ctor(
    std_TfDiagnosticMgr_ErrorList_t * * this_)
{
    try {
        to_c(this_, new pxr::TfDiagnosticMgr::ErrorList());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_sizeof()
{
        return sizeof(pxr::TfDiagnosticMgr::ErrorIterator);
}

USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_alignof()
{
        return alignof(pxr::TfDiagnosticMgr::ErrorIterator);
}

USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_op_inc(
    std_TfDiagnosticMgr_ErrorIterator_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t * * return_)
{
        to_c(return_, (to_cpp(this_)) -> operator++());
        return 0;
}

USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_ctor(
    std_TfDiagnosticMgr_ErrorIterator_t * this_
    , std_TfDiagnosticMgr_ErrorIterator_t const * iterator)
{
    try {
        new (this_) pxr::TfDiagnosticMgr::ErrorIterator(to_cpp_ref(iterator));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_deref(
    std_TfDiagnosticMgr_ErrorIterator_t const * this_
    , pxr_TfError_t const * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator*());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxr__TfDiagnosticMgr__ErrorIterator_deref_mut(
    std_TfDiagnosticMgr_ErrorIterator_t * this_
    , pxr_TfError_t * * return_)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator*());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

inline bool op_equals_std__list_pxr__TfError___iterator_impl(const ::std::list<pxr::TfError>::iterator &lhs, const ::std::list<pxr::TfError>::iterator &rhs)  {
    return (lhs == rhs);
}


USD_CPPMM_API unsigned int op_equals_std__list_pxr__TfError___iterator(
    _Bool * return_
    , std_TfDiagnosticMgr_ErrorIterator_t const * lhs
    , std_TfDiagnosticMgr_ErrorIterator_t const * rhs)
{
    try {
        *(return_) = op_equals_std__list_pxr__TfError___iterator_impl(to_cpp_ref(lhs), to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

