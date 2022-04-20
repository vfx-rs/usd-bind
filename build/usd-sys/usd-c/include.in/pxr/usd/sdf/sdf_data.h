#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_t_s pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_t pxr_SdfAbstractDataSpecVisitor_t;
typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class SdfData

SdfData provides concrete scene description data storage.

An SdfData is an implementation of SdfAbstractData that simply
stores specs and fields in a map keyed by path. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfData_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfData_t;
typedef pxrInternal_v0_21__pxrReserved____SdfData_t pxr_SdfData_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetCurrentCount(
    pxr_SdfData_t const * this_
    , size_t * return_);
#define pxr_SdfData_GetCurrentCount pxrInternal_v0_21__pxrReserved____SdfData_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_IsUnique(
    pxr_SdfData_t const * this_
    , _Bool * return_);
#define pxr_SdfData_IsUnique pxrInternal_v0_21__pxrReserved____SdfData_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_SetShouldInvokeUniqueChangedListener(
    pxr_SdfData_t * this_
    , _Bool shouldCall);
#define pxr_SdfData_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____SdfData_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_EnableNotification2(
    pxr_SdfData_t const * this_);
#define pxr_SdfData_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfData_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetUniqueIdentifier(
    pxr_SdfData_t const * this_
    , void const * * return_);
#define pxr_SdfData_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfData_GetUniqueIdentifier


/** SdfAbstractData overrides */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_StreamsData(
    pxr_SdfData_t const * this_
    , _Bool * return_);
#define pxr_SdfData_StreamsData pxrInternal_v0_21__pxrReserved____SdfData_StreamsData


/** Returns true if this data object has no specs, false otherwise.

The default implementation uses a visitor to check if any specs
exist. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_IsEmpty(
    pxr_SdfData_t const * this_
    , _Bool * return_);
#define pxr_SdfData_IsEmpty pxrInternal_v0_21__pxrReserved____SdfData_IsEmpty


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_HasSpec(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfData_HasSpec pxrInternal_v0_21__pxrReserved____SdfData_HasSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_EraseSpec(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path);
#define pxr_SdfData_EraseSpec pxrInternal_v0_21__pxrReserved____SdfData_EraseSpec


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_MoveSpec(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_SdfData_MoveSpec pxrInternal_v0_21__pxrReserved____SdfData_MoveSpec


/** Visits every spec in this SdfAbstractData object with the given 
\p visitor. The order in which specs are visited is undefined. 
The visitor may not modify the SdfAbstractData object it is visiting.
\sa SdfAbstractDataSpecVisitor */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_VisitSpecs(
    pxr_SdfData_t const * this_
    , pxr_SdfAbstractDataSpecVisitor_t * visitor);
#define pxr_SdfData_VisitSpecs pxrInternal_v0_21__pxrReserved____SdfData_VisitSpecs


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_Has(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t * value);
#define pxr_SdfData_Has pxrInternal_v0_21__pxrReserved____SdfData_Has


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_Set(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t const * value);
#define pxr_SdfData_Set pxrInternal_v0_21__pxrReserved____SdfData_Set


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_Erase(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName);
#define pxr_SdfData_Erase pxrInternal_v0_21__pxrReserved____SdfData_Erase


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_HasDictKey(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t * value);
#define pxr_SdfData_HasDictKey pxrInternal_v0_21__pxrReserved____SdfData_HasDictKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_SetDictValueByKey(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value);
#define pxr_SdfData_SetDictValueByKey pxrInternal_v0_21__pxrReserved____SdfData_SetDictValueByKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_EraseDictValueByKey(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath);
#define pxr_SdfData_EraseDictValueByKey pxrInternal_v0_21__pxrReserved____SdfData_EraseDictValueByKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetBracketingTimeSamples(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , double time
    , double * tLower
    , double * tUpper);
#define pxr_SdfData_GetBracketingTimeSamples pxrInternal_v0_21__pxrReserved____SdfData_GetBracketingTimeSamples


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetNumTimeSamplesForPath(
    pxr_SdfData_t const * this_
    , size_t * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfData_GetNumTimeSamplesForPath pxrInternal_v0_21__pxrReserved____SdfData_GetNumTimeSamplesForPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_GetBracketingTimeSamplesForPath(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , double time
    , double * tLower
    , double * tUpper);
#define pxr_SdfData_GetBracketingTimeSamplesForPath pxrInternal_v0_21__pxrReserved____SdfData_GetBracketingTimeSamplesForPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_QueryTimeSample(
    pxr_SdfData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t * optionalValue);
#define pxr_SdfData_QueryTimeSample pxrInternal_v0_21__pxrReserved____SdfData_QueryTimeSample


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_SetTimeSample(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t const * value);
#define pxr_SdfData_SetTimeSample pxrInternal_v0_21__pxrReserved____SdfData_SetTimeSample


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_EraseTimeSample(
    pxr_SdfData_t * this_
    , pxr_SdfPath_t const * path
    , double time);
#define pxr_SdfData_EraseTimeSample pxrInternal_v0_21__pxrReserved____SdfData_EraseTimeSample


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_ctor(
    pxr_SdfData_t * * this_);
#define pxr_SdfData_ctor pxrInternal_v0_21__pxrReserved____SdfData_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_dtor(
    pxr_SdfData_t * this_);
#define pxr_SdfData_dtor pxrInternal_v0_21__pxrReserved____SdfData_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData_copy(
    pxr_SdfData_t * * this_
    , pxr_SdfData_t const * rhs);
#define pxr_SdfData_copy pxrInternal_v0_21__pxrReserved____SdfData_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfData__assign(
    pxr_SdfData_t * this_
    , pxr_SdfData_t * * return_
    , pxr_SdfData_t const * rhs);
#define pxr_SdfData__assign pxrInternal_v0_21__pxrReserved____SdfData__assign


#ifdef __cplusplus
}
#endif
