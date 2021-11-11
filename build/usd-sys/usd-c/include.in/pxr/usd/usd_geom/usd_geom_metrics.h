#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____TfToken_t_s pxrInternal_v0_21__pxrReserved____TfToken_t;
typedef pxrInternal_v0_21__pxrReserved____TfToken_t pxr_TfToken_t;
typedef struct pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t_s pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t;
typedef pxrInternal_v0_21__pxrReserved____TfWeakPtr_pxr__UsdStage__t pxr_UsdStagePtr_t;

/** \class UsdGeomLinearUnits
Container class for static double-precision symbols representing common
units of measure expressed in meters.
\sa UsdGeomLinearUnits_group */
typedef struct pxrInternal_v0_21__pxrReserved____UsdGeomLinearUnits_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____UsdGeomLinearUnits_t;
typedef pxrInternal_v0_21__pxrReserved____UsdGeomLinearUnits_t pxr_UsdGeomLinearUnits_t;


/** Fetch and return \p stage 's upAxis.  If unauthored, will return the
value provided by UsdGeomGetFallbackUpAxis().  Exporters, however, are
strongly encouraged to always set the upAxis for every USD file they create.

\return one of: UsdGeomTokens->y or UsdGeomTokens->z, unless there was
an error, in which case returns an empty TfToken

\sa UsdGeomUpAxis_group */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomGetStageUpAxis(
    pxr_TfToken_t * return_
    , pxr_UsdStagePtr_t const * stage);
#define pxr_UsdGeomGetStageUpAxis pxrInternal_v0_21__pxrReserved___UsdGeomGetStageUpAxis


/** Set \p stage 's upAxis to \p axis, which must be one of UsdGeomTokens->y
or UsdGeomTokens->z

UpAxis is stage-level metadata, therefore see UsdStage::SetMetadata().

\return true if upAxis was successfully set.  The stage's UsdEditTarget
must be either its root layer or session layer.
\sa UsdGeomUpAxis_group */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomSetStageUpAxis(
    _Bool * return_
    , pxr_UsdStagePtr_t const * stage
    , pxr_TfToken_t const * axis);
#define pxr_UsdGeomSetStageUpAxis pxrInternal_v0_21__pxrReserved___UsdGeomSetStageUpAxis


/** Return the site-level fallback up axis as a TfToken.

In a generic installation of USD, the fallback will be "Y".  This can be
changed to "Z" by adding, in a plugInfo.json file discoverable by USD's
PlugPlugin mechanism:
\code{json}
   "UsdGeomMetrics": {
       "upAxis": "Z"
   }
\endcode

If more than one such entry is discovered and the values for upAxis differ,
we will issue a warning during the first call to this function, and ignore
all of them, so that we devolve to deterministic behavior of Y up axis
until the problem is rectified. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomGetFallbackUpAxis(
    pxr_TfToken_t * return_);
#define pxr_UsdGeomGetFallbackUpAxis pxrInternal_v0_21__pxrReserved___UsdGeomGetFallbackUpAxis


/** Return *stage*'s authored *metersPerUnit*, or 0.01 if unauthored.
\sa UsdGeomLinearUnits_group */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomGetStageMetersPerUnit(
    double * return_
    , pxr_UsdStagePtr_t const * stage);
#define pxr_UsdGeomGetStageMetersPerUnit pxrInternal_v0_21__pxrReserved___UsdGeomGetStageMetersPerUnit


/** Return whether *stage* has an authored *metersPerUnit*.
\sa UsdGeomLinearUnits_group */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomStageHasAuthoredMetersPerUnit(
    _Bool * return_
    , pxr_UsdStagePtr_t const * stage);
#define pxr_UsdGeomStageHasAuthoredMetersPerUnit pxrInternal_v0_21__pxrReserved___UsdGeomStageHasAuthoredMetersPerUnit


/** Author *stage*'s *metersPerUnit*.

\return true if metersPerUnit was successfully set.  The stage's
UsdEditTarget must be either its root layer or session layer.
\sa UsdGeomLinearUnits_group */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomSetStageMetersPerUnit(
    _Bool * return_
    , pxr_UsdStagePtr_t const * stage
    , double metersPerUnit);
#define pxr_UsdGeomSetStageMetersPerUnit pxrInternal_v0_21__pxrReserved___UsdGeomSetStageMetersPerUnit


/** Return *true* if the two given metrics are within the provided
relative *epsilon* of each other, when you need to know an absolute
metric rather than a scaling factor.  

Use like so:
\code
double stageUnits = UsdGeomGetStageMetersPerUnit(stage);

if (UsdGeomLinearUnitsAre(stageUnits, UsdGeomLinearUnits::meters))
    // do something for meters
else if (UsdGeomLinearUnitsAre(stageUnits, UsdGeomLinearUnits::feet))
    // do something for feet
\endcode

\return *false* if either input is zero or negative, otherwise relative
floating-point comparison between the two inputs.
\sa UsdGeomLinearUnits_group */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___UsdGeomLinearUnitsAre(
    _Bool * return_
    , double authoredUnits
    , double standardUnits
    , double epsilon);
#define pxr_UsdGeomLinearUnitsAre pxrInternal_v0_21__pxrReserved___UsdGeomLinearUnitsAre


#ifdef __cplusplus
}
#endif
