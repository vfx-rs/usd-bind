#pragma once
#include <pxr/usd/sdf/sdf_path.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/path.h>

inline pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange const & to_cpp_ref(
    pxr_SdfPathAncestorsRange_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange & to_cpp_ref(
    pxr_SdfPathAncestorsRange_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange const * to_cpp(
    pxr_SdfPathAncestorsRange_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange * to_cpp(
    pxr_SdfPathAncestorsRange_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange * >(rhs);
}

inline void to_c(
    pxr_SdfPathAncestorsRange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathAncestorsRange_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPathAncestorsRange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathAncestorsRange_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPathAncestorsRange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathAncestorsRange_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPathAncestorsRange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathAncestorsRange_t * >(rhs);
}

inline void to_c_move(
    pxr_SdfPathAncestorsRange_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange * rhs)
{
        new (lhs) pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange(std::move(*(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator const & to_cpp_ref(
    pxr_SdfPathAncestorsRange_iterator_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator & to_cpp_ref(
    pxr_SdfPathAncestorsRange_iterator_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator const * to_cpp(
    pxr_SdfPathAncestorsRange_iterator_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator * to_cpp(
    pxr_SdfPathAncestorsRange_iterator_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator * >(rhs);
}

inline void to_c(
    pxr_SdfPathAncestorsRange_iterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathAncestorsRange_iterator_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPathAncestorsRange_iterator_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathAncestorsRange_iterator_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPathAncestorsRange_iterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathAncestorsRange_iterator_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPathAncestorsRange_iterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPathAncestorsRange_iterator_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPathAncestorsRange_iterator_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPathAncestorsRange::iterator const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfPathAncestorsRange__iterator_copy(lhs, reinterpret_cast<pxr_SdfPathAncestorsRange_iterator_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath const & to_cpp_ref(
    pxr_SdfPath_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath & to_cpp_ref(
    pxr_SdfPath_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath const * to_cpp(
    pxr_SdfPath_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath * to_cpp(
    pxr_SdfPath_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath * >(rhs);
}

inline void to_c(
    pxr_SdfPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPath_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPath_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfPath_copy(lhs, reinterpret_cast<pxr_SdfPath_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath::Hash const & to_cpp_ref(
    pxr_SdfPath_Hash_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath::Hash const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath::Hash & to_cpp_ref(
    pxr_SdfPath_Hash_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath::Hash * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath::Hash const * to_cpp(
    pxr_SdfPath_Hash_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath::Hash const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath::Hash * to_cpp(
    pxr_SdfPath_Hash_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath::Hash * >(rhs);
}

inline void to_c(
    pxr_SdfPath_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::Hash const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_Hash_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPath_Hash_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::Hash const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_Hash_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPath_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::Hash & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_Hash_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPath_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::Hash * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_Hash_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPath_Hash_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::Hash const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfPath__Hash_copy(lhs, reinterpret_cast<pxr_SdfPath_Hash_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan const & to_cpp_ref(
    pxr_SdfPath_FastLessThan_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan & to_cpp_ref(
    pxr_SdfPath_FastLessThan_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan const * to_cpp(
    pxr_SdfPath_FastLessThan_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan * to_cpp(
    pxr_SdfPath_FastLessThan_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan * >(rhs);
}

inline void to_c(
    pxr_SdfPath_FastLessThan_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_FastLessThan_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfPath_FastLessThan_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_FastLessThan_t const * >(rhs);
}

inline void to_c(
    pxr_SdfPath_FastLessThan_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_FastLessThan_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfPath_FastLessThan_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfPath_FastLessThan_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfPath_FastLessThan_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfPath::FastLessThan const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity const & to_cpp_ref(
    pxr_Sdf_PathIdentity_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity & to_cpp_ref(
    pxr_Sdf_PathIdentity_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity const * to_cpp(
    pxr_Sdf_PathIdentity_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity * to_cpp(
    pxr_Sdf_PathIdentity_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity * >(rhs);
}

inline void to_c(
    pxr_Sdf_PathIdentity_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PathIdentity_t const * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_PathIdentity_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PathIdentity_t const * >(rhs);
}

inline void to_c(
    pxr_Sdf_PathIdentity_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity & rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PathIdentity_t * >(&(rhs));
}

inline void to_c(
    pxr_Sdf_PathIdentity_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity * rhs)
{
        *(lhs) = reinterpret_cast<pxr_Sdf_PathIdentity_t * >(rhs);
}

inline void to_c_copy(
    pxr_Sdf_PathIdentity_t * lhs
    , pxrInternal_v0_21__pxrReserved__::Sdf_PathIdentity const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

