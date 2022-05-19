#include <pxr/usd/pcp/errors.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

enum PcpErrorType {
    PcpErrorType_ArcCycle = 0,
    PcpErrorType_ArcPermissionDenied = 1,
    PcpErrorType_IndexCapacityExceeded = 2,
    PcpErrorType_ArcCapacityExceeded = 3,
    PcpErrorType_ArcNamespaceDepthCapacityExceeded = 4,
    PcpErrorType_InconsistentPropertyType = 5,
    PcpErrorType_InconsistentAttributeType = 6,
    PcpErrorType_InconsistentAttributeVariability = 7,
    PcpErrorType_InternalAssetPath = 8,
    PcpErrorType_InvalidPrimPath = 9,
    PcpErrorType_InvalidAssetPath = 10,
    PcpErrorType_InvalidInstanceTargetPath = 11,
    PcpErrorType_InvalidExternalTargetPath = 12,
    PcpErrorType_InvalidTargetPath = 13,
    PcpErrorType_InvalidReferenceOffset = 14,
    PcpErrorType_InvalidSublayerOffset = 15,
    PcpErrorType_InvalidSublayerOwnership = 16,
    PcpErrorType_InvalidSublayerPath = 17,
    PcpErrorType_InvalidVariantSelection = 18,
    PcpErrorType_MutedAssetPath = 19,
    PcpErrorType_OpinionAtRelocationSource = 20,
    PcpErrorType_PrimPermissionDenied = 21,
    PcpErrorType_PropertyPermissionDenied = 22,
    PcpErrorType_SublayerCycle = 23,
    PcpErrorType_TargetPermissionDenied = 24,
    PcpErrorType_UnresolvedPrimPath = 25,
};

/// \class PcpErrorBase
/// 
/// Base class for all error types.
struct PcpErrorBase {
    using BoundType = pxr::PcpErrorBase;

    /// Destructor.
    ~PcpErrorBase();

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    PcpErrorBase(const pxr::PcpErrorBase& );

    pxr::PcpErrorBase& operator=(const pxr::PcpErrorBase& );

} CPPMM_OPAQUEPTR; // struct PcpErrorBase


using PcpErrorBasePtr = pxr::PcpErrorBasePtr;


using PcpErrorVector = pxr::PcpErrorVector;


/// \class PcpErrorArcCycle
/// 
/// Arcs between PcpNodes that form a cycle.
struct PcpErrorArcCycle {
    using BoundType = pxr::PcpErrorArcCycle;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorArcCyclePtr New();

    /// Destructor.
    ~PcpErrorArcCycle();

    PcpErrorArcCycle(const pxr::PcpErrorArcCycle& );

    pxr::PcpErrorArcCycle& operator=(const pxr::PcpErrorArcCycle& );

} CPPMM_OPAQUEPTR; // struct PcpErrorArcCycle


using PcpErrorArcCyclePtr = pxr::PcpErrorArcCyclePtr;


/// \class PcpErrorArcPermissionDenied
/// 
/// Arcs that were not made between PcpNodes because of permission
/// restrictions.
struct PcpErrorArcPermissionDenied {
    using BoundType = pxr::PcpErrorArcPermissionDenied;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorArcPermissionDeniedPtr New();

    /// Destructor.
    ~PcpErrorArcPermissionDenied();

    PcpErrorArcPermissionDenied(const pxr::PcpErrorArcPermissionDenied& );

    pxr::PcpErrorArcPermissionDenied& operator=(const pxr::PcpErrorArcPermissionDenied& );

} CPPMM_OPAQUEPTR; // struct PcpErrorArcPermissionDenied


using PcpErrorArcPermissionDeniedPtr = pxr::PcpErrorArcPermissionDeniedPtr;


/// \class PcpErrorCapacityExceeded
/// 
/// Exceeded the capacity for composition arcs at a single site.
struct PcpErrorCapacityExceeded {
    using BoundType = pxr::PcpErrorCapacityExceeded;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorCapacityExceededPtr New(pxr::PcpErrorType errorType);

    /// Destructor.
    ~PcpErrorCapacityExceeded();

    PcpErrorCapacityExceeded(const pxr::PcpErrorCapacityExceeded& );

    pxr::PcpErrorCapacityExceeded& operator=(const pxr::PcpErrorCapacityExceeded& );

} CPPMM_OPAQUEPTR; // struct PcpErrorCapacityExceeded


using PcpErrorCapacityExceededPtr = pxr::PcpErrorCapacityExceededPtr;


/// ////////////////////////////////////////////////////////////////////////////
struct PcpErrorInconsistentPropertyBase {
    using BoundType = pxr::PcpErrorInconsistentPropertyBase;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Destructor.
    ~PcpErrorInconsistentPropertyBase();

    PcpErrorInconsistentPropertyBase(const pxr::PcpErrorInconsistentPropertyBase& );

    pxr::PcpErrorInconsistentPropertyBase& operator=(const pxr::PcpErrorInconsistentPropertyBase& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInconsistentPropertyBase


/// \class PcpErrorInconsistentPropertyType
/// 
/// Properties that have specs with conflicting definitions.
struct PcpErrorInconsistentPropertyType {
    using BoundType = pxr::PcpErrorInconsistentPropertyType;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInconsistentPropertyTypePtr New();

    /// Destructor.
    ~PcpErrorInconsistentPropertyType();

    PcpErrorInconsistentPropertyType(const pxr::PcpErrorInconsistentPropertyType& );

    pxr::PcpErrorInconsistentPropertyType& operator=(const pxr::PcpErrorInconsistentPropertyType& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInconsistentPropertyType


using PcpErrorInconsistentPropertyTypePtr = pxr::PcpErrorInconsistentPropertyTypePtr;


/// \class PcpErrorInconsistentAttributeType
/// 
/// Attributes that have specs with conflicting definitions.
struct PcpErrorInconsistentAttributeType {
    using BoundType = pxr::PcpErrorInconsistentAttributeType;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInconsistentAttributeTypePtr New();

    /// Destructor.
    ~PcpErrorInconsistentAttributeType();

    PcpErrorInconsistentAttributeType(const pxr::PcpErrorInconsistentAttributeType& );

    pxr::PcpErrorInconsistentAttributeType& operator=(const pxr::PcpErrorInconsistentAttributeType& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInconsistentAttributeType


using PcpErrorInconsistentAttributeTypePtr = pxr::PcpErrorInconsistentAttributeTypePtr;


/// \class PcpErrorInconsistentAttributeVariability
/// 
/// Attributes that have specs with conflicting variability.
struct PcpErrorInconsistentAttributeVariability {
    using BoundType = pxr::PcpErrorInconsistentAttributeVariability;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInconsistentAttributeVariabilityPtr New();

    /// Destructor.
    ~PcpErrorInconsistentAttributeVariability();

    PcpErrorInconsistentAttributeVariability(const pxr::PcpErrorInconsistentAttributeVariability& );

    pxr::PcpErrorInconsistentAttributeVariability& operator=(const pxr::PcpErrorInconsistentAttributeVariability& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInconsistentAttributeVariability


using PcpErrorInconsistentAttributeVariabilityPtr = pxr::PcpErrorInconsistentAttributeVariabilityPtr;


/// \class PcpErrorInternalAssetPath
/// 
/// Error about an arc that is prohibited due to being internal to an asset.
struct PcpErrorInternalAssetPath {
    using BoundType = pxr::PcpErrorInternalAssetPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInternalAssetPathPtr New();

    /// Destructor.
    ~PcpErrorInternalAssetPath();

    PcpErrorInternalAssetPath(const pxr::PcpErrorInternalAssetPath& );

    pxr::PcpErrorInternalAssetPath& operator=(const pxr::PcpErrorInternalAssetPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInternalAssetPath


using PcpErrorInternalAssetPathPtr = pxr::PcpErrorInternalAssetPathPtr;


/// \class PcpErrorInvalidPrimPath
/// 
/// Invalid prim paths used by references or payloads.
struct PcpErrorInvalidPrimPath {
    using BoundType = pxr::PcpErrorInvalidPrimPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidPrimPathPtr New();

    /// Destructor.
    ~PcpErrorInvalidPrimPath();

    PcpErrorInvalidPrimPath(const pxr::PcpErrorInvalidPrimPath& );

    pxr::PcpErrorInvalidPrimPath& operator=(const pxr::PcpErrorInvalidPrimPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidPrimPath


using PcpErrorInvalidPrimPathPtr = pxr::PcpErrorInvalidPrimPathPtr;


struct PcpErrorInvalidAssetPathBase {
    using BoundType = pxr::PcpErrorInvalidAssetPathBase;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Destructor.
    ~PcpErrorInvalidAssetPathBase();

    PcpErrorInvalidAssetPathBase(const pxr::PcpErrorInvalidAssetPathBase& );

    pxr::PcpErrorInvalidAssetPathBase& operator=(const pxr::PcpErrorInvalidAssetPathBase& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidAssetPathBase


using PcpErrorInvalidAssetPathBasePtr = pxr::PcpErrorInvalidAssetPathBasePtr;


/// \class PcpErrorInvalidAssetPath
/// 
/// Invalid asset paths used by references or payloads.
struct PcpErrorInvalidAssetPath {
    using BoundType = pxr::PcpErrorInvalidAssetPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidAssetPathPtr New();

    /// Destructor.
    ~PcpErrorInvalidAssetPath();

    PcpErrorInvalidAssetPath(const pxr::PcpErrorInvalidAssetPath& );

    pxr::PcpErrorInvalidAssetPath& operator=(const pxr::PcpErrorInvalidAssetPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidAssetPath


using PcpErrorInvalidAssetPathPtr = pxr::PcpErrorInvalidAssetPathPtr;


/// \class PcpErrorMutedAssetPath
/// 
/// Muted asset paths used by references or payloads.
struct PcpErrorMutedAssetPath {
    using BoundType = pxr::PcpErrorMutedAssetPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorMutedAssetPathPtr New();

    /// Destructor.
    ~PcpErrorMutedAssetPath();

    PcpErrorMutedAssetPath(const pxr::PcpErrorMutedAssetPath& );

    pxr::PcpErrorMutedAssetPath& operator=(const pxr::PcpErrorMutedAssetPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorMutedAssetPath


using PcpErrorMutedAssetPathPtr = pxr::PcpErrorMutedAssetPathPtr;


/// \class PcpErrorTargetPathBase
/// 
/// Base class for composition errors related to target or connection paths.
struct PcpErrorTargetPathBase {
    using BoundType = pxr::PcpErrorTargetPathBase;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Destructor.
    ~PcpErrorTargetPathBase();

    PcpErrorTargetPathBase(const pxr::PcpErrorTargetPathBase& );

    pxr::PcpErrorTargetPathBase& operator=(const pxr::PcpErrorTargetPathBase& );

} CPPMM_OPAQUEPTR; // struct PcpErrorTargetPathBase


using PcpErrorTargetPathBasePtr = pxr::PcpErrorTargetPathBasePtr;


/// \class PcpErrorInvalidInstanceTargetPath
/// 
/// Invalid target or connection path authored in an inherited
/// class that points to an instance of that class.
struct PcpErrorInvalidInstanceTargetPath {
    using BoundType = pxr::PcpErrorInvalidInstanceTargetPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidInstanceTargetPathPtr New();

    /// Destructor.
    ~PcpErrorInvalidInstanceTargetPath();

    PcpErrorInvalidInstanceTargetPath(const pxr::PcpErrorInvalidInstanceTargetPath& );

    pxr::PcpErrorInvalidInstanceTargetPath& operator=(const pxr::PcpErrorInvalidInstanceTargetPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidInstanceTargetPath


using PcpErrorInvalidInstanceTargetPathPtr = pxr::PcpErrorInvalidInstanceTargetPathPtr;


/// \class PcpErrorInvalidExternalTargetPath
/// 
/// Invalid target or connection path in some scope that points to
/// an object outside of that scope.
struct PcpErrorInvalidExternalTargetPath {
    using BoundType = pxr::PcpErrorInvalidExternalTargetPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidExternalTargetPathPtr New();

    /// Destructor.
    ~PcpErrorInvalidExternalTargetPath();

    PcpErrorInvalidExternalTargetPath(const pxr::PcpErrorInvalidExternalTargetPath& );

    pxr::PcpErrorInvalidExternalTargetPath& operator=(const pxr::PcpErrorInvalidExternalTargetPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidExternalTargetPath


using PcpErrorInvalidExternalTargetPathPtr = pxr::PcpErrorInvalidExternalTargetPathPtr;


/// \class PcpErrorInvalidTargetPath
/// 
/// Invalid target or connection path.
struct PcpErrorInvalidTargetPath {
    using BoundType = pxr::PcpErrorInvalidTargetPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidTargetPathPtr New();

    /// Destructor.
    ~PcpErrorInvalidTargetPath();

    PcpErrorInvalidTargetPath(const pxr::PcpErrorInvalidTargetPath& );

    pxr::PcpErrorInvalidTargetPath& operator=(const pxr::PcpErrorInvalidTargetPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidTargetPath


using PcpErrorInvalidTargetPathPtr = pxr::PcpErrorInvalidTargetPathPtr;


/// \class PcpErrorInvalidSublayerOffset
/// 
/// Sublayers that use invalid layer offsets.
struct PcpErrorInvalidSublayerOffset {
    using BoundType = pxr::PcpErrorInvalidSublayerOffset;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidSublayerOffsetPtr New();

    /// Destructor.
    ~PcpErrorInvalidSublayerOffset();

    PcpErrorInvalidSublayerOffset(const pxr::PcpErrorInvalidSublayerOffset& );

    pxr::PcpErrorInvalidSublayerOffset& operator=(const pxr::PcpErrorInvalidSublayerOffset& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidSublayerOffset


using PcpErrorInvalidSublayerOffsetPtr = pxr::PcpErrorInvalidSublayerOffsetPtr;


/// \class PcpErrorInvalidReferenceOffset
/// 
/// Sublayers that use invalid layer offsets.
struct PcpErrorInvalidReferenceOffset {
    using BoundType = pxr::PcpErrorInvalidReferenceOffset;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidReferenceOffsetPtr New();

    /// Destructor.
    ~PcpErrorInvalidReferenceOffset();

    PcpErrorInvalidReferenceOffset(const pxr::PcpErrorInvalidReferenceOffset& );

    pxr::PcpErrorInvalidReferenceOffset& operator=(const pxr::PcpErrorInvalidReferenceOffset& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidReferenceOffset


using PcpErrorInvalidReferenceOffsetPtr = pxr::PcpErrorInvalidReferenceOffsetPtr;


/// \class PcpErrorInvalidSublayerOwnership
/// 
/// Sibling layers that have the same owner.
struct PcpErrorInvalidSublayerOwnership {
    using BoundType = pxr::PcpErrorInvalidSublayerOwnership;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidSublayerOwnershipPtr New();

    /// Destructor.
    ~PcpErrorInvalidSublayerOwnership();

    PcpErrorInvalidSublayerOwnership(const pxr::PcpErrorInvalidSublayerOwnership& );

    pxr::PcpErrorInvalidSublayerOwnership& operator=(const pxr::PcpErrorInvalidSublayerOwnership& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidSublayerOwnership


using PcpErrorInvalidSublayerOwnershipPtr = pxr::PcpErrorInvalidSublayerOwnershipPtr;


/// \class PcpErrorInvalidSublayerPath
/// 
/// Asset paths that could not be both resolved and loaded.
struct PcpErrorInvalidSublayerPath {
    using BoundType = pxr::PcpErrorInvalidSublayerPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidSublayerPathPtr New();

    /// Destructor.
    ~PcpErrorInvalidSublayerPath();

    PcpErrorInvalidSublayerPath(const pxr::PcpErrorInvalidSublayerPath& );

    pxr::PcpErrorInvalidSublayerPath& operator=(const pxr::PcpErrorInvalidSublayerPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidSublayerPath


using PcpErrorInvalidSublayerPathPtr = pxr::PcpErrorInvalidSublayerPathPtr;


/// \class PcpErrorInvalidVariantSelection
/// 
/// Invalid variant selections.
struct PcpErrorInvalidVariantSelection {
    using BoundType = pxr::PcpErrorInvalidVariantSelection;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorInvalidVariantSelectionPtr New();

    /// Destructor.
    ~PcpErrorInvalidVariantSelection();

    PcpErrorInvalidVariantSelection(const pxr::PcpErrorInvalidVariantSelection& );

    pxr::PcpErrorInvalidVariantSelection& operator=(const pxr::PcpErrorInvalidVariantSelection& );

} CPPMM_OPAQUEPTR; // struct PcpErrorInvalidVariantSelection


using PcpErrorInvalidVariantSelectionPtr = pxr::PcpErrorInvalidVariantSelectionPtr;


/// \class PcpErrorOpinionAtRelocationSource
/// 
/// Opinions were found at a relocation source path.
struct PcpErrorOpinionAtRelocationSource {
    using BoundType = pxr::PcpErrorOpinionAtRelocationSource;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorOpinionAtRelocationSourcePtr New();

    /// Destructor.
    ~PcpErrorOpinionAtRelocationSource();

    PcpErrorOpinionAtRelocationSource(const pxr::PcpErrorOpinionAtRelocationSource& );

    pxr::PcpErrorOpinionAtRelocationSource& operator=(const pxr::PcpErrorOpinionAtRelocationSource& );

} CPPMM_OPAQUEPTR; // struct PcpErrorOpinionAtRelocationSource


using PcpErrorOpinionAtRelocationSourcePtr = pxr::PcpErrorOpinionAtRelocationSourcePtr;


/// \class PcpErrorPrimPermissionDenied
/// 
/// Layers with illegal opinions about private prims.
struct PcpErrorPrimPermissionDenied {
    using BoundType = pxr::PcpErrorPrimPermissionDenied;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorPrimPermissionDeniedPtr New();

    /// Destructor.
    ~PcpErrorPrimPermissionDenied();

    PcpErrorPrimPermissionDenied(const pxr::PcpErrorPrimPermissionDenied& );

    pxr::PcpErrorPrimPermissionDenied& operator=(const pxr::PcpErrorPrimPermissionDenied& );

} CPPMM_OPAQUEPTR; // struct PcpErrorPrimPermissionDenied


using PcpErrorPrimPermissionDeniedPtr = pxr::PcpErrorPrimPermissionDeniedPtr;


/// \class PcpErrorPropertyPermissionDenied
/// 
/// Layers with illegal opinions about private properties.
struct PcpErrorPropertyPermissionDenied {
    using BoundType = pxr::PcpErrorPropertyPermissionDenied;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorPropertyPermissionDeniedPtr New();

    /// Destructor.
    ~PcpErrorPropertyPermissionDenied();

    PcpErrorPropertyPermissionDenied(const pxr::PcpErrorPropertyPermissionDenied& );

    pxr::PcpErrorPropertyPermissionDenied& operator=(const pxr::PcpErrorPropertyPermissionDenied& );

} CPPMM_OPAQUEPTR; // struct PcpErrorPropertyPermissionDenied


using PcpErrorPropertyPermissionDeniedPtr = pxr::PcpErrorPropertyPermissionDeniedPtr;


/// \class PcpErrorSublayerCycle
/// 
/// Layers that recursively sublayer themselves.
struct PcpErrorSublayerCycle {
    using BoundType = pxr::PcpErrorSublayerCycle;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorSublayerCyclePtr New();

    /// Destructor.
    ~PcpErrorSublayerCycle();

    PcpErrorSublayerCycle(const pxr::PcpErrorSublayerCycle& );

    pxr::PcpErrorSublayerCycle& operator=(const pxr::PcpErrorSublayerCycle& );

} CPPMM_OPAQUEPTR; // struct PcpErrorSublayerCycle


using PcpErrorSublayerCyclePtr = pxr::PcpErrorSublayerCyclePtr;


/// \class PcpErrorTargetPermissionDenied
/// 
/// Paths with illegal opinions about private targets.
struct PcpErrorTargetPermissionDenied {
    using BoundType = pxr::PcpErrorTargetPermissionDenied;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorTargetPermissionDeniedPtr New();

    /// Destructor.
    ~PcpErrorTargetPermissionDenied();

    PcpErrorTargetPermissionDenied(const pxr::PcpErrorTargetPermissionDenied& );

    pxr::PcpErrorTargetPermissionDenied& operator=(const pxr::PcpErrorTargetPermissionDenied& );

} CPPMM_OPAQUEPTR; // struct PcpErrorTargetPermissionDenied


using PcpErrorTargetPermissionDeniedPtr = pxr::PcpErrorTargetPermissionDeniedPtr;


/// \class PcpErrorUnresolvedPrimPath
/// 
/// Asset paths that could not be both resolved and loaded.
struct PcpErrorUnresolvedPrimPath {
    using BoundType = pxr::PcpErrorUnresolvedPrimPath;

    /// Converts error to string message.
    std::string ToString() const;

    /// Return true if this type of error should be reported at most
    /// once for a given prim.
    bool ShouldReportAtMostOnce() const;

    /// Returns a new error object.
    static pxr::PcpErrorUnresolvedPrimPathPtr New();

    /// Destructor.
    ~PcpErrorUnresolvedPrimPath();

    PcpErrorUnresolvedPrimPath(const pxr::PcpErrorUnresolvedPrimPath& );

    pxr::PcpErrorUnresolvedPrimPath& operator=(const pxr::PcpErrorUnresolvedPrimPath& );

} CPPMM_OPAQUEPTR; // struct PcpErrorUnresolvedPrimPath


using PcpErrorUnresolvedPrimPathPtr = pxr::PcpErrorUnresolvedPrimPathPtr;


/// Raise the given errors as runtime errors.
void PcpRaiseErrors(const pxr::PcpErrorVector& errors);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
