#pragma once
#include <pxr/usd/sdf/sdf_namespace_edit.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/namespaceEdit.h>

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result const & pxr_SdfNamespaceEditDetail_Result_to_cpp_ref(
    pxr_SdfNamespaceEditDetail_Result const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result & pxr_SdfNamespaceEditDetail_Result_to_cpp_ref(
    pxr_SdfNamespaceEditDetail_Result * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result const * pxr_SdfNamespaceEditDetail_Result_to_cpp(
    pxr_SdfNamespaceEditDetail_Result const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result * pxr_SdfNamespaceEditDetail_Result_to_cpp(
    pxr_SdfNamespaceEditDetail_Result * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result * >(rhs);
}

inline void to_c(
    pxr_SdfNamespaceEditDetail_Result const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEditDetail_Result const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNamespaceEditDetail_Result const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEditDetail_Result const * >(rhs);
}

inline void to_c(
    pxr_SdfNamespaceEditDetail_Result * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEditDetail_Result * >(&(rhs));
}

inline void to_c(
    pxr_SdfNamespaceEditDetail_Result * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEditDetail_Result * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNamespaceEditDetail_Result * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail::Result const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit const & to_cpp_ref(
    pxr_SdfNamespaceEdit_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit & to_cpp_ref(
    pxr_SdfNamespaceEdit_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit const * to_cpp(
    pxr_SdfNamespaceEdit_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit * to_cpp(
    pxr_SdfNamespaceEdit_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit * >(rhs);
}

inline void to_c(
    pxr_SdfNamespaceEdit_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEdit_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNamespaceEdit_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEdit_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNamespaceEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEdit_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNamespaceEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEdit_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNamespaceEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEdit const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_copy(lhs, reinterpret_cast<pxr_SdfNamespaceEdit_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail const & to_cpp_ref(
    pxr_SdfNamespaceEditDetail_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail & to_cpp_ref(
    pxr_SdfNamespaceEditDetail_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail const * to_cpp(
    pxr_SdfNamespaceEditDetail_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail * to_cpp(
    pxr_SdfNamespaceEditDetail_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail * >(rhs);
}

inline void to_c(
    pxr_SdfNamespaceEditDetail_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEditDetail_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNamespaceEditDetail_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEditDetail_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNamespaceEditDetail_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEditDetail_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNamespaceEditDetail_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNamespaceEditDetail_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNamespaceEditDetail_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNamespaceEditDetail const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_copy(lhs, reinterpret_cast<pxr_SdfNamespaceEditDetail_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit const & to_cpp_ref(
    pxr_SdfBatchNamespaceEdit_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit & to_cpp_ref(
    pxr_SdfBatchNamespaceEdit_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit const * to_cpp(
    pxr_SdfBatchNamespaceEdit_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit * to_cpp(
    pxr_SdfBatchNamespaceEdit_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit * >(rhs);
}

inline void to_c(
    pxr_SdfBatchNamespaceEdit_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfBatchNamespaceEdit_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfBatchNamespaceEdit_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfBatchNamespaceEdit_t const * >(rhs);
}

inline void to_c(
    pxr_SdfBatchNamespaceEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfBatchNamespaceEdit_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfBatchNamespaceEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfBatchNamespaceEdit_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfBatchNamespaceEdit_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfBatchNamespaceEdit const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_copy(lhs, reinterpret_cast<pxr_SdfBatchNamespaceEdit_t const * >(&(rhs)));
}

