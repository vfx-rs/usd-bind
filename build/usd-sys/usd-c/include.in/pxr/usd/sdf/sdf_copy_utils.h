#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__SdfLayer__t pxr_SdfLayerHandle_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class SdfCopySpecsValueEdit
Value containing an editing operation for SdfCopySpecs.

The SdfShouldCopyValueFn callback allows users to return a value to copy
into the destination spec via the \p valueToCopy parameter. However, there
may be cases where it would be more efficient to perform incremental edits 
using specific SdfLayer API instead.

To accommodate this, consumers may provide a callback that applies a
scene description edit in \p valueToCopy via an SdfCopySpecsValueEdit 
object.  */
typedef struct pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_t;
typedef pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_t pxr_SdfCopySpecsValueEdit_t;


/** SdfCopySpecsValueEdit objects are not comparable, but must provide
operator== to be stored in a VtValue. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__eq(
    pxr_SdfCopySpecsValueEdit_t const * this_
    , _Bool * return_
    , pxr_SdfCopySpecsValueEdit_t const * rhs);
#define pxr_SdfCopySpecsValueEdit__eq pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__eq


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__ne(
    pxr_SdfCopySpecsValueEdit_t const * this_
    , _Bool * return_
    , pxr_SdfCopySpecsValueEdit_t const * rhs);
#define pxr_SdfCopySpecsValueEdit__ne pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__ne


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_copy(
    pxr_SdfCopySpecsValueEdit_t * * this_
    , pxr_SdfCopySpecsValueEdit_t const * rhs);
#define pxr_SdfCopySpecsValueEdit_copy pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__assign(
    pxr_SdfCopySpecsValueEdit_t * this_
    , pxr_SdfCopySpecsValueEdit_t * * return_
    , pxr_SdfCopySpecsValueEdit_t const * rhs);
#define pxr_SdfCopySpecsValueEdit__assign pxrInternal_v0_21__pxrReserved____SdfCopySpecsValueEdit__assign


/** Utility function for copying spec data at \p srcPath in \p srcLayer to
\p destPath in \p destLayer.

Copying is performed recursively: all child specs are copied as well.
Any destination specs that already exist will be overwritten.

Parent specs of the destination are not created, and must exist before
SdfCopySpec is called, or a coding error will result.  For prim parents,
clients may find it convenient to call SdfCreatePrimInLayer before
SdfCopySpec.

As a special case, if the top-level object to be copied is a relationship
target or a connection, the destination spec must already exist.  That is
because we don't want SdfCopySpec to impose any policy on how list edits are
made; client code should arrange for relationship targets and connections to
be specified as prepended, appended, deleted, and/or ordered, as needed.

Variant specs may be copied to prim paths and vice versa. When copying a
variant to a prim, the specifier and typename from the variant's parent
prim will be used.

Attribute connections, relationship targets, inherit and specializes paths,
and internal sub-root references that target an object beneath \p srcPath 
will be remapped to target objects beneath \p dstPath. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfCopySpec(
    _Bool * return_
    , pxr_SdfLayerHandle_t const * srcLayer
    , pxr_SdfPath_t const * srcPath
    , pxr_SdfLayerHandle_t const * dstLayer
    , pxr_SdfPath_t const * dstPath);
#define pxr_SdfCopySpec pxrInternal_v0_21__pxrReserved___SdfCopySpec


#ifdef __cplusplus
}
#endif
