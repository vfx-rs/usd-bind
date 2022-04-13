#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;

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

/** \class BaseLayersDidChange

Base class for LayersDidChange and LayersDidChangeSentPerLayer. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_t pxr_SdfNotice_BaseLayersDidChange_t;

/** \class LayersDidChangeSentPerLayer

Notice sent per-layer indicating all layers whose contents have changed
within a single round of change processing.  If more than one layer
changes in a single round of change processing, we send this notice once
per layer with the same changeVec and serialNumber.  This is so clients
can listen to notices from only the set of layers they care about rather
than listening to the global LayersDidChange notice. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_t pxr_SdfNotice_LayersDidChangeSentPerLayer_t;

/** \class LayersDidChange

Global notice sent to indicate that layer contents have changed. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_t pxr_SdfNotice_LayersDidChange_t;


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


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_count(
    pxr_SdfNotice_BaseLayersDidChange_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * layer);
#define pxr_SdfNotice_BaseLayersDidChange_count pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_count


/** The serial number for this round of change processing. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_GetSerialNumber(
    pxr_SdfNotice_BaseLayersDidChange_t const * this_
    , size_t * return_);
#define pxr_SdfNotice_BaseLayersDidChange_GetSerialNumber pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_GetSerialNumber


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_copy(
    pxr_SdfNotice_BaseLayersDidChange_t * * this_
    , pxr_SdfNotice_BaseLayersDidChange_t const * rhs);
#define pxr_SdfNotice_BaseLayersDidChange_copy pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_dtor(
    pxr_SdfNotice_BaseLayersDidChange_t * this_);
#define pxr_SdfNotice_BaseLayersDidChange_dtor pxrInternal_v0_21__pxrReserved____SdfNotice__BaseLayersDidChange_dtor


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_Send(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * this_
    , size_t * return_);
#define pxr_SdfNotice_LayersDidChangeSentPerLayer_Send pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_Send


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_count(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * layer);
#define pxr_SdfNotice_LayersDidChangeSentPerLayer_count pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_count


/** The serial number for this round of change processing. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_GetSerialNumber(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * this_
    , size_t * return_);
#define pxr_SdfNotice_LayersDidChangeSentPerLayer_GetSerialNumber pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_GetSerialNumber


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_dtor(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * this_);
#define pxr_SdfNotice_LayersDidChangeSentPerLayer_dtor pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_copy(
    pxr_SdfNotice_LayersDidChangeSentPerLayer_t * * this_
    , pxr_SdfNotice_LayersDidChangeSentPerLayer_t const * rhs);
#define pxr_SdfNotice_LayersDidChangeSentPerLayer_copy pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChangeSentPerLayer_copy


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_Send(
    pxr_SdfNotice_LayersDidChange_t const * this_
    , size_t * return_);
#define pxr_SdfNotice_LayersDidChange_Send pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_Send


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_count(
    pxr_SdfNotice_LayersDidChange_t const * this_
    , _Bool * return_
    , pxr_SdfLayerHandle_t const * layer);
#define pxr_SdfNotice_LayersDidChange_count pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_count


/** The serial number for this round of change processing. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_GetSerialNumber(
    pxr_SdfNotice_LayersDidChange_t const * this_
    , size_t * return_);
#define pxr_SdfNotice_LayersDidChange_GetSerialNumber pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_GetSerialNumber


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_dtor(
    pxr_SdfNotice_LayersDidChange_t * this_);
#define pxr_SdfNotice_LayersDidChange_dtor pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_copy(
    pxr_SdfNotice_LayersDidChange_t * * this_
    , pxr_SdfNotice_LayersDidChange_t const * rhs);
#define pxr_SdfNotice_LayersDidChange_copy pxrInternal_v0_21__pxrReserved____SdfNotice__LayersDidChange_copy


#ifdef __cplusplus
}
#endif
