#include <pxr/usd/usdGeom/metrics.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Fetch and return \p stage 's upAxis.  If unauthored, will return the
/// value provided by UsdGeomGetFallbackUpAxis().  Exporters, however, are
/// strongly encouraged to always set the upAxis for every USD file they create.
/// 
/// \return one of: UsdGeomTokens->y or UsdGeomTokens->z, unless there was
/// an error, in which case returns an empty TfToken
/// 
/// \sa UsdGeomUpAxis_group
pxr::TfToken UsdGeomGetStageUpAxis(const pxr::UsdStageWeakPtr& stage);


/// Set \p stage 's upAxis to \p axis, which must be one of UsdGeomTokens->y
/// or UsdGeomTokens->z
/// 
/// UpAxis is stage-level metadata, therefore see UsdStage::SetMetadata().
/// 
/// \return true if upAxis was successfully set.  The stage's UsdEditTarget
/// must be either its root layer or session layer.
/// \sa UsdGeomUpAxis_group
bool UsdGeomSetStageUpAxis(const pxr::UsdStageWeakPtr& stage, const pxr::TfToken& axis);


/// Return the site-level fallback up axis as a TfToken.
/// 
/// In a generic installation of USD, the fallback will be "Y".  This can be
/// changed to "Z" by adding, in a plugInfo.json file discoverable by USD's
/// PlugPlugin mechanism:
/// \code{json}
///    "UsdGeomMetrics": {
///        "upAxis": "Z"
///    }
/// \endcode
/// 
/// If more than one such entry is discovered and the values for upAxis differ,
/// we will issue a warning during the first call to this function, and ignore
/// all of them, so that we devolve to deterministic behavior of Y up axis
/// until the problem is rectified.
pxr::TfToken UsdGeomGetFallbackUpAxis();


/// Return *stage*'s authored *metersPerUnit*, or 0.01 if unauthored.
/// \sa UsdGeomLinearUnits_group
double UsdGeomGetStageMetersPerUnit(const pxr::UsdStageWeakPtr& stage);


/// Return whether *stage* has an authored *metersPerUnit*.
/// \sa UsdGeomLinearUnits_group
bool UsdGeomStageHasAuthoredMetersPerUnit(const pxr::UsdStageWeakPtr& stage);


/// Author *stage*'s *metersPerUnit*.
/// 
/// \return true if metersPerUnit was successfully set.  The stage's
/// UsdEditTarget must be either its root layer or session layer.
/// \sa UsdGeomLinearUnits_group
bool UsdGeomSetStageMetersPerUnit(const pxr::UsdStageWeakPtr& stage, double metersPerUnit);


/// Return *true* if the two given metrics are within the provided
/// relative *epsilon* of each other, when you need to know an absolute
/// metric rather than a scaling factor.  
/// 
/// Use like so:
/// \code
/// double stageUnits = UsdGeomGetStageMetersPerUnit(stage);
/// 
/// if (UsdGeomLinearUnitsAre(stageUnits, UsdGeomLinearUnits::meters))
///     // do something for meters
/// else if (UsdGeomLinearUnitsAre(stageUnits, UsdGeomLinearUnits::feet))
///     // do something for feet
/// \endcode
/// 
/// \return *false* if either input is zero or negative, otherwise relative
/// floating-point comparison between the two inputs.
/// \sa UsdGeomLinearUnits_group
bool UsdGeomLinearUnitsAre(double authoredUnits, double standardUnits, double epsilon);


/// \class UsdGeomLinearUnits
/// Container class for static double-precision symbols representing common
/// units of measure expressed in meters.
/// \sa UsdGeomLinearUnits_group
struct UsdGeomLinearUnits {
    using BoundType = pxr::UsdGeomLinearUnits;

} CPPMM_OPAQUEPTR; // struct UsdGeomLinearUnits


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
