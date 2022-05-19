#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct std__string_t_s std__string_t;
typedef std__string_t std_string_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** Validity of an edit. */
enum pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__Result_e {
    pxr_SdfNamespaceEditDetail_Result_Error = 0,
    pxr_SdfNamespaceEditDetail_Result_Unbatched = 1,
    pxr_SdfNamespaceEditDetail_Result_Okay = 2,
};
typedef unsigned int pxr_SdfNamespaceEditDetail_Result;

/** \class SdfNamespaceEdit

A single namespace edit.  It supports renaming, reparenting, reparenting
with a rename, reordering, and removal. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_t_s {
    char _unused;
} USD_CPPMM_ALIGN(4) pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_t pxr_SdfNamespaceEdit_t;

/** \struct SdfNamespaceEditDetail

Detailed information about a namespace edit. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_t;
typedef pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_t pxr_SdfNamespaceEditDetail_t;

/** \class SdfBatchNamespaceEdit

A description of an arbitrarily complex namespace edit.

A \c SdfBatchNamespaceEdit object describes zero or more namespace edits.
Various types providing a namespace will allow the edits to be applied
in a single operation and also allow testing if this will work.

Clients are encouraged to group several edits into one object because
that may allow more efficient processing of the edits.  If, for example,
you need to reparent several prims it may be faster to add all of the
reparents to a single \c SdfBatchNamespaceEdit and apply them at once
than to apply each separately.

Objects that allow applying edits are free to apply the edits in any way
and any order they see fit but they should guarantee that the resulting
namespace will be as if each edit was applied one at a time in the order
they were added.

Note that the above rule permits skipping edits that have no effect or
generate a non-final state.  For example, if renaming A to B then to C
we could just rename A to C.  This means notices may be elided.  However,
implementations must not elide notices that contain information about any
edit that clients must be able to know but otherwise cannot determine. */
typedef struct pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_t;
typedef pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_t pxr_SdfBatchNamespaceEdit_t;


/** The default edit maps the empty path to the empty path. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ctor(
    pxr_SdfNamespaceEdit_t * * this_);
#define pxr_SdfNamespaceEdit_ctor pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ctor


/** The fully general edit. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ctor_1(
    pxr_SdfNamespaceEdit_t * * this_
    , pxr_SdfPath_t const * currentPath_
    , pxr_SdfPath_t const * newPath_
    , int index_);
#define pxr_SdfNamespaceEdit_ctor_1 pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ctor_1


/** Returns a namespace edit that removes the object at \p currentPath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Remove(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath);
#define pxr_SdfNamespaceEdit_Remove pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Remove


/** Returns a namespace edit that renames the prim or property at
\p currentPath to \p name */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Rename(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath
    , pxr_TfToken_t const * name);
#define pxr_SdfNamespaceEdit_Rename pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Rename


/** Returns a namespace edit to reorder the prim or property at
\p currentPath to index \p index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Reorder(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath
    , int index);
#define pxr_SdfNamespaceEdit_Reorder pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Reorder


/** Returns a namespace edit to reparent the prim or property at
\p currentPath to be under \p newParentPath at index \p index. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Reparent(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath
    , pxr_SdfPath_t const * newParentPath
    , int index);
#define pxr_SdfNamespaceEdit_Reparent pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_Reparent


/** Returns a namespace edit to reparent the prim or property at
\p currentPath to be under \p newParentPath at index \p index
with the name \p name. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ReparentAndRename(
    pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfPath_t const * currentPath
    , pxr_SdfPath_t const * newParentPath
    , pxr_TfToken_t const * name
    , int index);
#define pxr_SdfNamespaceEdit_ReparentAndRename pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_ReparentAndRename


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit__eq(
    pxr_SdfNamespaceEdit_t const * this_
    , _Bool * return_
    , pxr_SdfNamespaceEdit_t const * rhs);
#define pxr_SdfNamespaceEdit__eq pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_copy(
    pxr_SdfNamespaceEdit_t * * this_
    , pxr_SdfNamespaceEdit_t const * rhs);
#define pxr_SdfNamespaceEdit_copy pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_dtor(
    pxr_SdfNamespaceEdit_t * this_);
#define pxr_SdfNamespaceEdit_dtor pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit__assign(
    pxr_SdfNamespaceEdit_t * this_
    , pxr_SdfNamespaceEdit_t * * return_
    , pxr_SdfNamespaceEdit_t const * rhs);
#define pxr_SdfNamespaceEdit__assign pxrInternal_v0_21__pxrReserved____SdfNamespaceEdit__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_ctor(
    pxr_SdfNamespaceEditDetail_t * * this_);
#define pxr_SdfNamespaceEditDetail_ctor pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_ctor_1(
    pxr_SdfNamespaceEditDetail_t * * this_
    , pxr_SdfNamespaceEditDetail_Result _param0
    , pxr_SdfNamespaceEdit_t const * edit
    , std_string_t const * reason);
#define pxr_SdfNamespaceEditDetail_ctor_1 pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__eq(
    pxr_SdfNamespaceEditDetail_t const * this_
    , _Bool * return_
    , pxr_SdfNamespaceEditDetail_t const * rhs);
#define pxr_SdfNamespaceEditDetail__eq pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_copy(
    pxr_SdfNamespaceEditDetail_t * * this_
    , pxr_SdfNamespaceEditDetail_t const * rhs);
#define pxr_SdfNamespaceEditDetail_copy pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__assign(
    pxr_SdfNamespaceEditDetail_t * this_
    , pxr_SdfNamespaceEditDetail_t * * return_
    , pxr_SdfNamespaceEditDetail_t const * rhs);
#define pxr_SdfNamespaceEditDetail__assign pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_dtor(
    pxr_SdfNamespaceEditDetail_t * this_);
#define pxr_SdfNamespaceEditDetail_dtor pxrInternal_v0_21__pxrReserved____SdfNamespaceEditDetail_dtor


/** Create an empty sequence of edits. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_ctor(
    pxr_SdfBatchNamespaceEdit_t * * this_);
#define pxr_SdfBatchNamespaceEdit_ctor pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_copy(
    pxr_SdfBatchNamespaceEdit_t * * this_
    , pxr_SdfBatchNamespaceEdit_t const * rhs);
#define pxr_SdfBatchNamespaceEdit_copy pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_dtor(
    pxr_SdfBatchNamespaceEdit_t * this_);
#define pxr_SdfBatchNamespaceEdit_dtor pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit__assign(
    pxr_SdfBatchNamespaceEdit_t * this_
    , pxr_SdfBatchNamespaceEdit_t * * return_
    , pxr_SdfBatchNamespaceEdit_t const * rhs);
#define pxr_SdfBatchNamespaceEdit__assign pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit__assign


/** Add a namespace edit. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_Add(
    pxr_SdfBatchNamespaceEdit_t * this_
    , pxr_SdfNamespaceEdit_t const * edit);
#define pxr_SdfBatchNamespaceEdit_Add pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_Add


/** Add a namespace edit. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_Add_1(
    pxr_SdfBatchNamespaceEdit_t * this_
    , pxr_SdfPath_t const * currentPath
    , pxr_SdfPath_t const * newPath
    , int index);
#define pxr_SdfBatchNamespaceEdit_Add_1 pxrInternal_v0_21__pxrReserved____SdfBatchNamespaceEdit_Add_1


/** Combine two results, yielding Error over Unbatched over Okay. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___CombineResult(
    pxr_SdfNamespaceEditDetail_Result * return_
    , pxr_SdfNamespaceEditDetail_Result lhs
    , pxr_SdfNamespaceEditDetail_Result rhs);
#define pxr_CombineResult pxrInternal_v0_21__pxrReserved___CombineResult


/** Combine a result with Error, yielding Error over Unbatched over Okay. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___CombineError(
    pxr_SdfNamespaceEditDetail_Result * return_
    , pxr_SdfNamespaceEditDetail_Result rhs);
#define pxr_CombineError pxrInternal_v0_21__pxrReserved___CombineError


/** Combine a result with Unbatched, yielding Error over Unbatched over Okay. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___CombineUnbatched(
    pxr_SdfNamespaceEditDetail_Result * return_
    , pxr_SdfNamespaceEditDetail_Result other);
#define pxr_CombineUnbatched pxrInternal_v0_21__pxrReserved___CombineUnbatched


#ifdef __cplusplus
}
#endif
