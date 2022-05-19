#include "pxr/usd/sdf/sdf_namespace_edit_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/usd/sdf/sdf_path_private.h"
#include "std_string_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ctor(
    pxr_SdfNamespaceEdit_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ctor_1(
    pxr_SdfNamespaceEdit_t * * this_
    , pxr_SdfPath_t const * currentPath_
    , pxr_SdfPath_t const * newPath_
    , int index_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit(to_cpp_ref(currentPath_), to_cpp_ref(newPath_), index_));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Remove(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit::Remove(to_cpp_ref(currentPath)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Rename(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath
    , pxr_TfToken_t const * name)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit::Rename(to_cpp_ref(currentPath), to_cpp_ref(name)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Reorder(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath
    , int index)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit::Reorder(to_cpp_ref(currentPath), index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Reparent(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath
    , pxr_SdfPath_t const * newParentPath
    , int index)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit::Reparent(to_cpp_ref(currentPath), to_cpp_ref(newParentPath), index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ReparentAndRename(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath
    , pxr_SdfPath_t const * newParentPath
    , pxr_TfToken_t const * name
    , int index)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit::ReparentAndRename(to_cpp_ref(currentPath), to_cpp_ref(newParentPath), to_cpp_ref(name), index));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit__eq(
    pxr_SdfNamespaceEdit_t const * this_
    , _Bool * return_
    , pxr_SdfNamespaceEdit_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_copy(
    pxr_SdfNamespaceEdit_t * * this_
    , pxr_SdfNamespaceEdit_t const * rhs)
{
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit(to_cpp_ref(rhs)));
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_dtor(
    pxr_SdfNamespaceEdit_t * this_)
{
        delete to_cpp(this_);
        return 0;
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit__assign(
    pxr_SdfNamespaceEdit_t * this_
    , pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfNamespaceEdit_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_ctor(
    pxr_SdfNamespaceEditDetail_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_ctor_1(
    pxr_SdfNamespaceEditDetail_t * * this_
    , pxr_SdfNamespaceEditDetail_Result _param0
    , pxr_SdfNamespaceEdit_t const * edit
    , std_string_t const * reason)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail(pxr_SdfNamespaceEditDetail_Result_to_cpp_ref(&(_param0)), to_cpp_ref(edit), to_cpp_ref(reason)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__eq(
    pxr_SdfNamespaceEditDetail_t const * this_
    , _Bool * return_
    , pxr_SdfNamespaceEditDetail_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_copy(
    pxr_SdfNamespaceEditDetail_t * * this_
    , pxr_SdfNamespaceEditDetail_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__assign(
    pxr_SdfNamespaceEditDetail_t * this_
    , pxr_SdfNamespaceEditDetail_t * * return_
    , pxr_SdfNamespaceEditDetail_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_dtor(
    pxr_SdfNamespaceEditDetail_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_ctor(
    pxr_SdfBatchNamespaceEdit_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_copy(
    pxr_SdfBatchNamespaceEdit_t * * this_
    , pxr_SdfBatchNamespaceEdit_t const * rhs)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_dtor(
    pxr_SdfBatchNamespaceEdit_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit__assign(
    pxr_SdfBatchNamespaceEdit_t * this_
    , pxr_SdfBatchNamespaceEdit_t * * return_
    , pxr_SdfBatchNamespaceEdit_t const * rhs)
{
    try {
        to_c(return_, (to_cpp(this_)) -> operator=(to_cpp_ref(rhs)));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_Add(
    pxr_SdfBatchNamespaceEdit_t * this_
    , pxr_SdfNamespaceEdit_t const * edit)
{
    try {
        (to_cpp(this_)) -> Add(to_cpp_ref(edit));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_Add_1(
    pxr_SdfBatchNamespaceEdit_t * this_
    , pxr_SdfPath_t const * currentPath
    , pxr_SdfPath_t const * newPath
    , int index)
{
    try {
        (to_cpp(this_)) -> Add(to_cpp_ref(currentPath), to_cpp_ref(newPath), index);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___CombineResult(
    pxr_SdfNamespaceEditDetail_Result * return_
    , pxr_SdfNamespaceEditDetail_Result lhs
    , pxr_SdfNamespaceEditDetail_Result rhs)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::CombineResult(pxr_SdfNamespaceEditDetail_Result_to_cpp_ref(&(lhs)), pxr_SdfNamespaceEditDetail_Result_to_cpp_ref(&(rhs))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___CombineError(
    pxr_SdfNamespaceEditDetail_Result * return_
    , pxr_SdfNamespaceEditDetail_Result rhs)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::CombineError(pxr_SdfNamespaceEditDetail_Result_to_cpp_ref(&(rhs))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___CombineUnbatched(
    pxr_SdfNamespaceEditDetail_Result * return_
    , pxr_SdfNamespaceEditDetail_Result other)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::CombineUnbatched(pxr_SdfNamespaceEditDetail_Result_to_cpp_ref(&(other))));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

