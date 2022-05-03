#pragma once
#include "usd-api-export.h"

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____VtValue_t_s pxrInternal_v0_21__pxrReserved____VtValue_t;
typedef pxrInternal_v0_21__pxrReserved____VtValue_t pxr_VtValue_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;

/** \class SdfAbstractData

Interface for scene description data storage.

This is not a layer.  SdfAbstractData is an anonymous container holding
scene description values.  It is like an STL container, but specialized
for holding scene description.

For any given SdfPath, an SdfAbstractData can hold one or more key/value 
pairs which we call Fields. Most of the API on SdfAbstractData accesses 
or modifies the value stored in a Field for a particular path and field 
name.

SdfAbstractData does not provide undo, change notification, or any strong
consistency guarantees about the scene description it contains.
Instead, it is a basis for building those things. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfAbstractData_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfAbstractData_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAbstractData_t pxr_SdfAbstractData_t;

/** \class SdfAbstractDataSpecVisitor

Base class for objects used to visit specs in an SdfAbstractData object.

\sa SdfAbstractData::VisitSpecs. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_t;
typedef pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_t pxr_SdfAbstractDataSpecVisitor_t;


/** Return the current reference count of this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetCurrentCount(
    pxr_SdfAbstractData_t const * this_
    , size_t * return_);
#define pxr_SdfAbstractData_GetCurrentCount pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetCurrentCount


/** Return true if only one \c TfRefPtr points to this object. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_IsUnique(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_);
#define pxr_SdfAbstractData_IsUnique pxrInternal_v0_21__pxrReserved____SdfAbstractData_IsUnique


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetShouldInvokeUniqueChangedListener(
    pxr_SdfAbstractData_t * this_
    , _Bool shouldCall);
#define pxr_SdfAbstractData_SetShouldInvokeUniqueChangedListener pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetShouldInvokeUniqueChangedListener


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_EnableNotification2(
    pxr_SdfAbstractData_t const * this_);
#define pxr_SdfAbstractData_EnableNotification2 pxrInternal_v0_21__pxrReserved____SdfAbstractData_EnableNotification2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetUniqueIdentifier(
    pxr_SdfAbstractData_t const * this_
    , void const * * return_);
#define pxr_SdfAbstractData_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetUniqueIdentifier


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_dtor(
    pxr_SdfAbstractData_t * this_);
#define pxr_SdfAbstractData_dtor pxrInternal_v0_21__pxrReserved____SdfAbstractData_dtor


/** Returns true if this data object streams its data to and from its
serialized data store on demand.

Sdf will treat layers with streaming data differently to avoid pulling
in data unnecessarily. For example, reloading a streaming layer 
will not perform fine-grained change notification, since doing 
so would require the full contents of the layer to be loaded. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_StreamsData(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_);
#define pxr_SdfAbstractData_StreamsData pxrInternal_v0_21__pxrReserved____SdfAbstractData_StreamsData


/** Returns true if this data object has no specs, false otherwise.

The default implementation uses a visitor to check if any specs
exist. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_IsEmpty(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_);
#define pxr_SdfAbstractData_IsEmpty pxrInternal_v0_21__pxrReserved____SdfAbstractData_IsEmpty


/** Return true if this data has a spec for \a path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasSpec(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfAbstractData_HasSpec pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasSpec


/** Erase the spec at \a path and any fields that are on it.
Note that this does not erase child specs. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseSpec(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path);
#define pxr_SdfAbstractData_EraseSpec pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseSpec


/** Move the spec at \a oldPath to \a newPath, including all the
fields that are on it. This does not move any child specs. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_MoveSpec(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * oldPath
    , pxr_SdfPath_t const * newPath);
#define pxr_SdfAbstractData_MoveSpec pxrInternal_v0_21__pxrReserved____SdfAbstractData_MoveSpec


/** Visits every spec in this SdfAbstractData object with the given 
\p visitor. The order in which specs are visited is undefined. 
The visitor may not modify the SdfAbstractData object it is visiting.
\sa SdfAbstractDataSpecVisitor */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_VisitSpecs(
    pxr_SdfAbstractData_t const * this_
    , pxr_SdfAbstractDataSpecVisitor_t * visitor);
#define pxr_SdfAbstractData_VisitSpecs pxrInternal_v0_21__pxrReserved____SdfAbstractData_VisitSpecs


/** Return whether a value exists for the given \a path and \a fieldName.
Optionally returns the value if it exists. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Has(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t * value);
#define pxr_SdfAbstractData_Has pxrInternal_v0_21__pxrReserved____SdfAbstractData_Has


/** Set the value of the given \a path and \a fieldName.

It's an error to set a field on a spec that does not exist. Setting a
field to an empty VtValue is the same as calling Erase() on it. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Set(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_VtValue_t const * value);
#define pxr_SdfAbstractData_Set pxrInternal_v0_21__pxrReserved____SdfAbstractData_Set


/** Remove the field at \p path and \p fieldName, if one exists. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_Erase(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName);
#define pxr_SdfAbstractData_Erase pxrInternal_v0_21__pxrReserved____SdfAbstractData_Erase


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasDictKey(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t * value);
#define pxr_SdfAbstractData_HasDictKey pxrInternal_v0_21__pxrReserved____SdfAbstractData_HasDictKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetDictValueByKey(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath
    , pxr_VtValue_t const * value);
#define pxr_SdfAbstractData_SetDictValueByKey pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetDictValueByKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseDictValueByKey(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path
    , pxr_TfToken_t const * fieldName
    , pxr_TfToken_t const * keyPath);
#define pxr_SdfAbstractData_EraseDictValueByKey pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseDictValueByKey


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetBracketingTimeSamples(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , double time
    , double * tLower
    , double * tUpper);
#define pxr_SdfAbstractData_GetBracketingTimeSamples pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetBracketingTimeSamples


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetNumTimeSamplesForPath(
    pxr_SdfAbstractData_t const * this_
    , size_t * return_
    , pxr_SdfPath_t const * path);
#define pxr_SdfAbstractData_GetNumTimeSamplesForPath pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetNumTimeSamplesForPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetBracketingTimeSamplesForPath(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , double time
    , double * tLower
    , double * tUpper);
#define pxr_SdfAbstractData_GetBracketingTimeSamplesForPath pxrInternal_v0_21__pxrReserved____SdfAbstractData_GetBracketingTimeSamplesForPath


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_QueryTimeSample(
    pxr_SdfAbstractData_t const * this_
    , _Bool * return_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t * optionalValue);
#define pxr_SdfAbstractData_QueryTimeSample pxrInternal_v0_21__pxrReserved____SdfAbstractData_QueryTimeSample


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetTimeSample(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path
    , double time
    , pxr_VtValue_t const * value);
#define pxr_SdfAbstractData_SetTimeSample pxrInternal_v0_21__pxrReserved____SdfAbstractData_SetTimeSample


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseTimeSample(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfPath_t const * path
    , double time);
#define pxr_SdfAbstractData_EraseTimeSample pxrInternal_v0_21__pxrReserved____SdfAbstractData_EraseTimeSample


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractData__assign(
    pxr_SdfAbstractData_t * this_
    , pxr_SdfAbstractData_t * * return_
    , pxr_SdfAbstractData_t const * rhs);
#define pxr_SdfAbstractData__assign pxrInternal_v0_21__pxrReserved____SdfAbstractData__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_dtor(
    pxr_SdfAbstractDataSpecVisitor_t * this_);
#define pxr_SdfAbstractDataSpecVisitor_dtor pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_dtor


/** \c SdfAbstractData::VisitSpecs calls this function for every entry it
contains, passing itself as \p data and the entry's \p path.  Return
false to stop iteration early, true to continue. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_VisitSpec(
    pxr_SdfAbstractDataSpecVisitor_t * this_
    , _Bool * return_
    , pxr_SdfAbstractData_t const * data
    , pxr_SdfPath_t const * path);
#define pxr_SdfAbstractDataSpecVisitor_VisitSpec pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_VisitSpec


/** \c SdfAbstractData::VisitSpecs will call this after visitation is
complete, even if some \c VisitSpec() returned \c false. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_Done(
    pxr_SdfAbstractDataSpecVisitor_t * this_
    , pxr_SdfAbstractData_t const * data);
#define pxr_SdfAbstractDataSpecVisitor_Done pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor_Done


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor__assign(
    pxr_SdfAbstractDataSpecVisitor_t * this_
    , pxr_SdfAbstractDataSpecVisitor_t * * return_
    , pxr_SdfAbstractDataSpecVisitor_t const * rhs);
#define pxr_SdfAbstractDataSpecVisitor__assign pxrInternal_v0_21__pxrReserved____SdfAbstractDataSpecVisitor__assign


#ifdef __cplusplus
}
#endif
