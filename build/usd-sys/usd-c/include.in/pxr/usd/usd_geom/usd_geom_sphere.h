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

/** \class UsdGeomSphere

Defines a primitive sphere centered at the origin.

The fallback values for Cube, Sphere, Cone, and Cylinder are set so that
they all pack into the same volume/bounds. */
typedef struct pxrInternal_v0_21__pxrReserved____UsdGeomSphere_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____UsdGeomSphere_t;
typedef pxrInternal_v0_21__pxrReserved____UsdGeomSphere_t pxr_UsdGeomSphere_t;


/** Returns whether or not this class corresponds to a concrete instantiable
prim type in scene description.  If this is true,
GetStaticPrimDefinition() will return a valid prim definition with
a non-empty typeName. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsConcrete(
    pxr_UsdGeomSphere_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomSphere_IsConcrete pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsConcrete


/** Returns whether or not this class inherits from UsdTyped. Types which
inherit from UsdTyped can impart a typename on a UsdPrim. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsTyped(
    pxr_UsdGeomSphere_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomSphere_IsTyped pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsTyped


/** Returns whether this is an API schema or not. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsAPISchema(
    pxr_UsdGeomSphere_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomSphere_IsAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsAPISchema


/** Returns whether this is an applied API schema or not. If this returns
true this class will have an Apply() method */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsAppliedAPISchema(
    pxr_UsdGeomSphere_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomSphere_IsAppliedAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsAppliedAPISchema


/** Returns whether this is an applied API schema or not. If this returns
true the constructor, Get and Apply methods of this class will take
in the name of the API schema instance. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsMultipleApplyAPISchema(
    pxr_UsdGeomSphere_t const * this_
    , _Bool * return_);
#define pxr_UsdGeomSphere_IsMultipleApplyAPISchema pxrInternal_v0_21__pxrReserved____UsdGeomSphere_IsMultipleApplyAPISchema


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
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomSphere_Define(
    pxr_UsdGeomSphere_t * * return_
    , pxr_UsdStagePtr_t const * stage
    , pxr_SdfPath_t const * path);
#define pxr_UsdGeomSphere_Define pxrInternal_v0_21__pxrReserved____UsdGeomSphere_Define


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdGeomSphere_copy(
    pxr_UsdGeomSphere_t * * this_
    , pxr_UsdGeomSphere_t const * rhs);
#define pxr_UsdGeomSphere_copy pxrInternal_v0_21__pxrReserved____UsdGeomSphere_copy


#ifdef __cplusplus
}
#endif
