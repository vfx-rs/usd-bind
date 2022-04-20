#pragma once
#include "usd-api-export.h"


#ifdef __cplusplus
extern "C" {
#endif

typedef struct std__vector_pxr__SdfPath__t_s std__vector_pxr__SdfPath__t;
typedef std__vector_pxr__SdfPath__t std_SdfPathVector_t;
typedef struct std__vector_std__string__t_s std__vector_std__string__t;
typedef std__vector_std__string__t std_vector_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;

/** \class SdfNameKeyPolicy

Key policy for \c std::string names. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_t pxr_SdfNameKeyPolicy_t;

/** \class SdfNameTokenKeyPolicy

Key policy for \c TfToken names. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNameTokenKeyPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfNameTokenKeyPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNameTokenKeyPolicy_t pxr_SdfNameTokenKeyPolicy_t;

/** \class SdfPathKeyPolicy

Key policy for \c SdfPath; converts all SdfPaths to absolute. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_t pxr_SdfPathKeyPolicy_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_Canonicalize(
    std_string_t const * * return_
    , std_string_t const * x);
#define pxr_SdfNameKeyPolicy_Canonicalize pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_Canonicalize


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_Canonicalize_1(
    std_vector_string_t const * * return_
    , std_vector_string_t const * x);
#define pxr_SdfNameKeyPolicy_Canonicalize_1 pxrInternal_v0_21__pxrReserved____SdfNameKeyPolicy_Canonicalize_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNameTokenKeyPolicy_Canonicalize(
    pxr_TfToken_t const * * return_
    , pxr_TfToken_t const * x);
#define pxr_SdfNameTokenKeyPolicy_Canonicalize pxrInternal_v0_21__pxrReserved____SdfNameTokenKeyPolicy_Canonicalize


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_ctor(
    pxr_SdfPathKeyPolicy_t * * this_);
#define pxr_SdfPathKeyPolicy_ctor pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_Canonicalize(
    pxr_SdfPathKeyPolicy_t const * this_
    , pxr_SdfPath_t * * return_
    , pxr_SdfPath_t const * x);
#define pxr_SdfPathKeyPolicy_Canonicalize pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_Canonicalize


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_Canonicalize_1(
    pxr_SdfPathKeyPolicy_t const * this_
    , std_SdfPathVector_t * * return_
    , std_SdfPathVector_t const * x);
#define pxr_SdfPathKeyPolicy_Canonicalize_1 pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy_Canonicalize_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy__assign(
    pxr_SdfPathKeyPolicy_t * this_
    , pxr_SdfPathKeyPolicy_t * * return_
    , pxr_SdfPathKeyPolicy_t const * rhs);
#define pxr_SdfPathKeyPolicy__assign pxrInternal_v0_21__pxrReserved____SdfPathKeyPolicy__assign


#ifdef __cplusplus
}
#endif
