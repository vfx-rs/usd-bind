#pragma once
#include <std_list.h>


#include "usd-errors-private.h"

#include <cstring>
#include <list>
#include <pxr/base/tf/diagnosticMgr.h>
#include <pxr/base/tf/error.h>
#include <string>

inline pxr::TfDiagnosticMgr::ErrorList const & to_cpp_ref(
    std_TfDiagnosticMgr_ErrorList_t const * rhs)
{
        return *(reinterpret_cast<pxr::TfDiagnosticMgr::ErrorList const * >(rhs));
}

inline pxr::TfDiagnosticMgr::ErrorList & to_cpp_ref(
    std_TfDiagnosticMgr_ErrorList_t * rhs)
{
        return *(reinterpret_cast<pxr::TfDiagnosticMgr::ErrorList * >(rhs));
}

inline pxr::TfDiagnosticMgr::ErrorList const * to_cpp(
    std_TfDiagnosticMgr_ErrorList_t const * rhs)
{
        return reinterpret_cast<pxr::TfDiagnosticMgr::ErrorList const * >(rhs);
}

inline pxr::TfDiagnosticMgr::ErrorList * to_cpp(
    std_TfDiagnosticMgr_ErrorList_t * rhs)
{
        return reinterpret_cast<pxr::TfDiagnosticMgr::ErrorList * >(rhs);
}

inline void to_c(
    std_TfDiagnosticMgr_ErrorList_t const * * lhs
    , pxr::TfDiagnosticMgr::ErrorList const & rhs)
{
        *(lhs) = reinterpret_cast<std_TfDiagnosticMgr_ErrorList_t const * >(&(rhs));
}

inline void to_c(
    std_TfDiagnosticMgr_ErrorList_t const * * lhs
    , pxr::TfDiagnosticMgr::ErrorList const * rhs)
{
        *(lhs) = reinterpret_cast<std_TfDiagnosticMgr_ErrorList_t const * >(rhs);
}

inline void to_c(
    std_TfDiagnosticMgr_ErrorList_t * * lhs
    , pxr::TfDiagnosticMgr::ErrorList & rhs)
{
        *(lhs) = reinterpret_cast<std_TfDiagnosticMgr_ErrorList_t * >(&(rhs));
}

inline void to_c(
    std_TfDiagnosticMgr_ErrorList_t * * lhs
    , pxr::TfDiagnosticMgr::ErrorList * rhs)
{
        *(lhs) = reinterpret_cast<std_TfDiagnosticMgr_ErrorList_t * >(rhs);
}

inline void to_c_move(
    std_TfDiagnosticMgr_ErrorList_t * lhs
    , pxr::TfDiagnosticMgr::ErrorList * rhs)
{
        new (lhs) pxr::TfDiagnosticMgr::ErrorList(std::move(*(rhs)));
}

inline pxr::TfDiagnosticMgr::ErrorIterator const & to_cpp_ref(
    std_TfDiagnosticMgr_ErrorIterator_t const * rhs)
{
        return *(reinterpret_cast<pxr::TfDiagnosticMgr::ErrorIterator const * >(rhs));
}

inline pxr::TfDiagnosticMgr::ErrorIterator & to_cpp_ref(
    std_TfDiagnosticMgr_ErrorIterator_t * rhs)
{
        return *(reinterpret_cast<pxr::TfDiagnosticMgr::ErrorIterator * >(rhs));
}

inline pxr::TfDiagnosticMgr::ErrorIterator const * to_cpp(
    std_TfDiagnosticMgr_ErrorIterator_t const * rhs)
{
        return reinterpret_cast<pxr::TfDiagnosticMgr::ErrorIterator const * >(rhs);
}

inline pxr::TfDiagnosticMgr::ErrorIterator * to_cpp(
    std_TfDiagnosticMgr_ErrorIterator_t * rhs)
{
        return reinterpret_cast<pxr::TfDiagnosticMgr::ErrorIterator * >(rhs);
}

inline void to_c(
    std_TfDiagnosticMgr_ErrorIterator_t const * * lhs
    , pxr::TfDiagnosticMgr::ErrorIterator const & rhs)
{
        *(lhs) = reinterpret_cast<std_TfDiagnosticMgr_ErrorIterator_t const * >(&(rhs));
}

inline void to_c(
    std_TfDiagnosticMgr_ErrorIterator_t const * * lhs
    , pxr::TfDiagnosticMgr::ErrorIterator const * rhs)
{
        *(lhs) = reinterpret_cast<std_TfDiagnosticMgr_ErrorIterator_t const * >(rhs);
}

inline void to_c(
    std_TfDiagnosticMgr_ErrorIterator_t * * lhs
    , pxr::TfDiagnosticMgr::ErrorIterator & rhs)
{
        *(lhs) = reinterpret_cast<std_TfDiagnosticMgr_ErrorIterator_t * >(&(rhs));
}

inline void to_c(
    std_TfDiagnosticMgr_ErrorIterator_t * * lhs
    , pxr::TfDiagnosticMgr::ErrorIterator * rhs)
{
        *(lhs) = reinterpret_cast<std_TfDiagnosticMgr_ErrorIterator_t * >(rhs);
}

inline void to_c_copy(
    std_TfDiagnosticMgr_ErrorIterator_t * lhs
    , pxr::TfDiagnosticMgr::ErrorIterator const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

