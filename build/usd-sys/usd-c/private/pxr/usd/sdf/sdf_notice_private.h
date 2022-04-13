#pragma once
#include <pxr/usd/sdf/sdf_notice.h>


#include "usd-errors-private.h"

#include <cstring>
#include <pxr/usd/sdf/notice.h>

inline pxrInternal_v0_21__pxrReserved__::SdfNotice const & to_cpp_ref(
    pxr_SdfNotice_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice & to_cpp_ref(
    pxr_SdfNotice_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice const * to_cpp(
    pxr_SdfNotice_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice * to_cpp(
    pxr_SdfNotice_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_t * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice const & rhs)
{
        memcpy(lhs, &(rhs), sizeof(*(lhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & to_cpp_ref(
    pxr_SdfNotice_Base_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base & to_cpp_ref(
    pxr_SdfNotice_Base_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * to_cpp(
    pxr_SdfNotice_Base_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * to_cpp(
    pxr_SdfNotice_Base_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_Base_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_Base_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_Base_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_Base_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::Base const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__Base_copy(lhs, reinterpret_cast<pxr_SdfNotice_Base_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const & to_cpp_ref(
    pxr_SdfNotice_BaseLayersDidChange_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange & to_cpp_ref(
    pxr_SdfNotice_BaseLayersDidChange_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const * to_cpp(
    pxr_SdfNotice_BaseLayersDidChange_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange * to_cpp(
    pxr_SdfNotice_BaseLayersDidChange_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_BaseLayersDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_BaseLayersDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_BaseLayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_BaseLayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_BaseLayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::BaseLayersDidChange const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_copy(lhs, reinterpret_cast<pxr_SdfNotice_BaseLayersDidChange_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const & to_cpp_ref(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer & to_cpp_ref(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const * to_cpp(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer * to_cpp(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChangeSentPerLayer const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * >(&(rhs)));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const & to_cpp_ref(
    pxr_SdfNotice_LayersDidChange_t const * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange & to_cpp_ref(
    pxr_SdfNotice_LayersDidChange_t * rhs)
{
        return *(reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange * >(rhs));
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const * to_cpp(
    pxr_SdfNotice_LayersDidChange_t const * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const * >(rhs);
}

inline pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange * to_cpp(
    pxr_SdfNotice_LayersDidChange_t * rhs)
{
        return reinterpret_cast<pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayersDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChange_t const * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayersDidChange_t const * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChange_t const * >(rhs);
}

inline void to_c(
    pxr_SdfNotice_LayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange & rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChange_t * >(&(rhs));
}

inline void to_c(
    pxr_SdfNotice_LayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange * rhs)
{
        *(lhs) = reinterpret_cast<pxr_SdfNotice_LayersDidChange_t * >(rhs);
}

inline void to_c_copy(
    pxr_SdfNotice_LayersDidChange_t * * lhs
    , pxrInternal_v0_21__pxrReserved__::SdfNotice::LayersDidChange const & rhs)
{
        pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_copy(lhs, reinterpret_cast<pxr_SdfNotice_LayersDidChange_t const * >(&(rhs)));
}

