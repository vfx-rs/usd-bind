#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/** \class SdfNotice

Wrapper class for Sdf notices. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNotice_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____SdfNotice_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNotice_t pxr_SdfNotice_t;

/** \class Base

Base notification class for scene.  Only useful for type hierarchy
purposes. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNotice__Base_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfNotice__Base_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNotice__Base_t pxr_SdfNotice_Base_t;


/** Deliver the notice to interested listeners, returning the number
of interested listeners.  

For most clients it is recommended to use the Send(sender) version of
Send() rather than this one.  Clients that use this form of Send
will prevent listeners from being able to register to receive notices
based on the sender of the notice.

ONLY listeners that registered globally will get the notice.

Listeners are invoked synchronously and in arbitrary order. The value
returned is the total number of times the notice was sent to listeners.
Note that a listener is called in the thread in which \c Send() is called
and \e not necessarily in the thread that \c Register() was called in. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base_Send(
    pxr_SdfNotice_Base_t const * this_
    , size_t * return_);
#define pxr_SdfNotice_Base_Send pxrInternal_v0_21__pxrReserved____SdfNotice__Base_Send


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base_dtor(
    pxr_SdfNotice_Base_t * this_);
#define pxr_SdfNotice_Base_dtor pxrInternal_v0_21__pxrReserved____SdfNotice__Base_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base_copy(
    pxr_SdfNotice_Base_t * * this_
    , pxr_SdfNotice_Base_t const * rhs);
#define pxr_SdfNotice_Base_copy pxrInternal_v0_21__pxrReserved____SdfNotice__Base_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base__assign(
    pxr_SdfNotice_Base_t * this_
    , pxr_SdfNotice_Base_t * * return_
    , pxr_SdfNotice_Base_t const * rhs);
#define pxr_SdfNotice_Base__assign pxrInternal_v0_21__pxrReserved____SdfNotice__Base__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__Base_ctor(
    pxr_SdfNotice_Base_t * * this_);
#define pxr_SdfNotice_Base_ctor pxrInternal_v0_21__pxrReserved____SdfNotice__Base_ctor


#ifdef __cplusplus
}
#endif
