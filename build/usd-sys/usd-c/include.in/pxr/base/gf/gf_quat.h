#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

/** \class GfQuath
\ingroup group_gf_LinearAlgebra

Basic type: a quaternion, a complex number with a real coefficient and
three imaginary coefficients, stored as a 3-vector. */
typedef struct pxrInternal_v0_21__pxrReserved____GfQuath_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfQuath%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfQuath%) pxrInternal_v0_21__pxrReserved____GfQuath_t;
typedef pxrInternal_v0_21__pxrReserved____GfQuath_t pxr_GfQuath_t;

/** \class GfQuatf
\ingroup group_gf_LinearAlgebra

Basic type: a quaternion, a complex number with a real coefficient and
three imaginary coefficients, stored as a 3-vector. */
typedef struct pxrInternal_v0_21__pxrReserved____GfQuatf_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfQuatf%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfQuatf%) pxrInternal_v0_21__pxrReserved____GfQuatf_t;
typedef pxrInternal_v0_21__pxrReserved____GfQuatf_t pxr_GfQuatf_t;

/** \class GfQuatd
\ingroup group_gf_LinearAlgebra

Basic type: a quaternion, a complex number with a real coefficient and
three imaginary coefficients, stored as a 3-vector. */
typedef struct pxrInternal_v0_21__pxrReserved____GfQuatd_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::GfQuatd%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::GfQuatd%) pxrInternal_v0_21__pxrReserved____GfQuatd_t;
typedef pxrInternal_v0_21__pxrReserved____GfQuatd_t pxr_GfQuatd_t;


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfQuath_sizeof();
#define pxr_GfQuath_sizeof pxrInternal_v0_21__pxrReserved____GfQuath_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfQuath_alignof();
#define pxr_GfQuath_alignof pxrInternal_v0_21__pxrReserved____GfQuath_alignof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfQuatf_sizeof();
#define pxr_GfQuatf_sizeof pxrInternal_v0_21__pxrReserved____GfQuatf_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfQuatf_alignof();
#define pxr_GfQuatf_alignof pxrInternal_v0_21__pxrReserved____GfQuatf_alignof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfQuatd_sizeof();
#define pxr_GfQuatd_sizeof pxrInternal_v0_21__pxrReserved____GfQuatd_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____GfQuatd_alignof();
#define pxr_GfQuatd_alignof pxrInternal_v0_21__pxrReserved____GfQuatd_alignof


#ifdef __cplusplus
}
#endif
