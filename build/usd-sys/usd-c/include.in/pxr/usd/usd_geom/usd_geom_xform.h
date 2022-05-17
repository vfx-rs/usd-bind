#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t pxr_UsdStagePtr_t;
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrim_t_s pxrInternal_v0_21__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrim_t pxr_UsdPrim_t;

/** \class UsdGeomXform

Concrete prim schema for a transform, which implements Xformable  */
typedef struct pxrInternal_v0_21__pxrReserved____UsdGeomXform_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____UsdGeomXform_t;
typedef pxrInternal_v0_21__pxrReserved____UsdGeomXform_t pxr_UsdGeomXform_t;


/** Returns whether or not this class corresponds to a concrete instantiable
prim type in scene description.  If this is true,
GetStaticPrimDefinition() will return a valid prim definition with
a non-empty typeName. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsConcrete(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomXform_IsConcrete pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsConcrete


/** Returns whether or not this class inherits from UsdTyped. Types which
inherit from UsdTyped can impart a typename on a UsdPrim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsTyped(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomXform_IsTyped pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsTyped


/** Returns whether this is an API schema or not. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsAPISchema(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomXform_IsAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsAPISchema


/** Returns whether this is an applied API schema or not. If this returns
true this class will have an Apply() method */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsAppliedAPISchema(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomXform_IsAppliedAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsAppliedAPISchema


/** Returns whether this is an applied API schema or not. If this returns
true the constructor, Get and Apply methods of this class will take
in the name of the API schema instance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsMultipleApplyAPISchema(
    pxr_UsdGeomXform_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomXform_IsMultipleApplyAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomXform_IsMultipleApplyAPISchema


/** Return this schema object's held prim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_GetPrim(
    pxr_UsdGeomXform_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdGeomXform_GetPrim pxrInternal_v0_21__pxrReserved____UsdGeomXform_GetPrim


/** Shorthand for GetPrim()->GetPath(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_GetPath(
    pxr_UsdGeomXform_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_UsdGeomXform_GetPath pxrInternal_v0_21__pxrReserved____UsdGeomXform_GetPath


/** Attempt to ensure a \a UsdPrim adhering to this schema at \p path
is defined (according to UsdPrim::IsDefined()) on this stage.

If a prim adhering to this schema at \p path is already defined on this
stage, return that prim.  Otherwise author an \a SdfPrimSpec with
\a specifier == \a SdfSpecifierDef and this schema's prim type name for
the prim at \p path at the current EditTarget.  Author \a SdfPrimSpec s
with \p specifier == \a SdfSpecifierDef and empty typeName at the
current EditTarget for any nonexistent, or existing but not \a Defined
ancestors.

The given \a path must be an absolute prim path that does not contain
any variant selections.

If it is impossible to author any of the necessary PrimSpecs, (for
example, in case \a path cannot map to the current UsdEditTarget's
namespace) issue an error and return an invalid \a UsdPrim.

Note that this method may return a defined prim whose typeName does not
specify this schema class, in case a stronger typeName opinion overrides
the opinion at the current EditTarget. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_Define(
    pxr_UsdGeomXform_t * * return_
    , pxr_UsdStagePtr_t const * stage
    , pxr_SdfPath_t const * path);
#define pxr_UsdGeomXform_Define pxrInternal_v0_21__pxrReserved____UsdGeomXform_Define


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomXform_copy(
    pxr_UsdGeomXform_t * * this_
    , pxr_UsdGeomXform_t const * rhs);
#define pxr_UsdGeomXform_copy pxrInternal_v0_21__pxrReserved____UsdGeomXform_copy


#ifdef __cplusplus
}
#endif
