#include <pxr/usd/sdf/copyUtils.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Utility function for copying spec data at \p srcPath in \p srcLayer to
/// \p destPath in \p destLayer.
/// 
/// Copying is performed recursively: all child specs are copied as well.
/// Any destination specs that already exist will be overwritten.
/// 
/// Parent specs of the destination are not created, and must exist before
/// SdfCopySpec is called, or a coding error will result.  For prim parents,
/// clients may find it convenient to call SdfCreatePrimInLayer before
/// SdfCopySpec.
/// 
/// As a special case, if the top-level object to be copied is a relationship
/// target or a connection, the destination spec must already exist.  That is
/// because we don't want SdfCopySpec to impose any policy on how list edits are
/// made; client code should arrange for relationship targets and connections to
/// be specified as prepended, appended, deleted, and/or ordered, as needed.
/// 
/// Variant specs may be copied to prim paths and vice versa. When copying a
/// variant to a prim, the specifier and typename from the variant's parent
/// prim will be used.
/// 
/// Attribute connections, relationship targets, inherit and specializes paths,
/// and internal sub-root references that target an object beneath \p srcPath 
/// will be remapped to target objects beneath \p dstPath.
bool SdfCopySpec(const pxr::SdfLayerHandle& srcLayer, const pxr::SdfPath& srcPath, const pxr::SdfLayerHandle& dstLayer, const pxr::SdfPath& dstPath);

using SdfShouldCopyValueFn = pxr::SdfShouldCopyValueFn;

/// \class SdfCopySpecsValueEdit
/// Value containing an editing operation for SdfCopySpecs.
/// 
/// The SdfShouldCopyValueFn callback allows users to return a value to copy
/// into the destination spec via the \p valueToCopy parameter. However, there
/// may be cases where it would be more efficient to perform incremental edits 
/// using specific SdfLayer API instead.
/// 
/// To accommodate this, consumers may provide a callback that applies a
/// scene description edit in \p valueToCopy via an SdfCopySpecsValueEdit 
/// object. 
struct SdfCopySpecsValueEdit {
    using BoundType = pxr::SdfCopySpecsValueEdit;

    SdfCopySpecsValueEdit(const pxr::SdfCopySpecsValueEdit::EditFunction& edit);

    const pxr::SdfCopySpecsValueEdit::EditFunction& GetEditFunction() const;

    /// SdfCopySpecsValueEdit objects are not comparable, but must provide
    /// operator== to be stored in a VtValue.
    bool operator==(const pxr::SdfCopySpecsValueEdit& rhs) const;

    bool operator!=(const pxr::SdfCopySpecsValueEdit& rhs) const;

    SdfCopySpecsValueEdit(const pxr::SdfCopySpecsValueEdit& );

    SdfCopySpecsValueEdit(pxr::SdfCopySpecsValueEdit&& ) CPPMM_IGNORE;

    pxr::SdfCopySpecsValueEdit& operator=(const pxr::SdfCopySpecsValueEdit& );

    pxr::SdfCopySpecsValueEdit& operator=(pxr::SdfCopySpecsValueEdit&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct SdfCopySpecsValueEdit

using SdfShouldCopyChildrenFn = pxr::SdfShouldCopyChildrenFn;

/// SdfShouldCopyValueFn used by the simple version of SdfCopySpec.
/// 
/// Copies all values from the source, transforming path-valued fields prefixed
/// with \p srcRootPath to have the prefix \p dstRootPath.
/// 
/// Existing values in the destination will be overwritten by values in the
/// source.  Any fields in the destination that aren't in the source will be
/// cleared.
#if 0
bool SdfShouldCopyValue(const pxr::SdfPath& srcRootPath, const pxr::SdfPath& dstRootPath, pxr::SdfSpecType specType, const pxr::TfToken& field, const pxr::SdfLayerHandle& srcLayer, const pxr::SdfPath& srcPath, bool fieldInSrc, const pxr::SdfLayerHandle& dstLayer, const pxr::SdfPath& dstPath, bool fieldInDst, boost::optional<pxr::VtValue>* valueToCopy);
#endif

/// SdfShouldCopyChildrenFn used by the simple version of SdfCopySpec.
/// 
/// Copies all child values from the source, transforming path-valued fields
/// prefixed with \p srcRootPath to have the prefix \p dstRootPath.
/// 
/// Existing values in the destination will be overwritten by values in the
/// source.  Any fields in the destination that aren't in the source will be
/// cleared.
#if 0
bool SdfShouldCopyChildren(const pxr::SdfPath& srcRootPath, const pxr::SdfPath& dstRootPath, const pxr::TfToken& childrenField, const pxr::SdfLayerHandle& srcLayer, const pxr::SdfPath& srcPath, bool fieldInSrc, const pxr::SdfLayerHandle& dstLayer, const pxr::SdfPath& dstPath, bool fieldInDst, boost::optional<pxrInternal_v0_21__pxrReserved__::VtValue>* srcChildren, boost::optional<pxrInternal_v0_21__pxrReserved__::VtValue>* dstChildren);
#endif

/// Utility function for copying spec data at \p srcPath in \p srcLayer to
/// \p destPath in \p destLayer. Various behaviors (such as which parts of the
/// spec to copy) are controlled by the supplied \p shouldCopyValueFn and
/// \p shouldCopyChildrenFn.
/// 
/// Copying is performed recursively: all child specs are copied as well, except
/// where prevented by \p shouldCopyChildrenFn.
/// 
/// Parent specs of the destination are not created, and must exist before
/// SdfCopySpec is called, or a coding error will result.  For prim parents,
/// clients may find it convenient to call SdfCreatePrimInLayer before
/// SdfCopySpec.
/// 
/// Variant specs may be copied to prim paths and vice versa. When copying a
/// variant to a prim, the specifier and typename from the variant's parent
/// prim will be used.
/// 
/// As a special case, if the top-level object to be copied is a relationship
/// target or a connection, the destination spec must already exist.  That is
/// because we don't want SdfCopySpec to impose any policy on how list edits are
/// made; client code should arrange for relationship targets and connections to
/// be specified as prepended, appended, deleted, and/or ordered, as needed.
bool SdfCopySpec(const pxr::SdfLayerHandle& srcLayer, const pxr::SdfPath& srcPath, const pxr::SdfLayerHandle& dstLayer,
                 const pxr::SdfPath& dstPath, const pxr::SdfShouldCopyValueFn& shouldCopyValueFn,
                 const pxr::SdfShouldCopyChildrenFn& shouldCopyChildrenFn);

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
