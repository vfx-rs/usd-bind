#if 0
#include <pxr/usd/sdf/layerStateDelegate.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfLayerStateDelegateBase
/// 
/// Maintains authoring state information for an associated layer. 
/// 
/// For example, layers rely on a state delegate to determine whether or
/// not they have been dirtied by authoring operations.
/// 
/// A layer's state delegate is invoked on every authoring operation on
/// that layer. The delegate may keep track of these operations for various
/// purposes.
struct SdfLayerStateDelegateBase {
    using BoundType = pxr::SdfLayerStateDelegateBase;

    /// Return the current reference count of this object.
    size_t GetCurrentCount() const;

    /// Return true if only one \c TfRefPtr points to this object.
    bool IsUnique() const;

    const pxr::TfRefCount& GetRefCount() const;

    void SetShouldInvokeUniqueChangedListener(bool shouldCall);

    static void SetUniqueChangedListener(pxr::TfRefBase::UniqueChangedListener listener);

    const pxr::TfWeakBase& __GetTfWeakBase__() const;

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

    ~SdfLayerStateDelegateBase();

    bool IsDirty();

    void SetField(const pxr::SdfPath& path, const pxr::TfToken& field, const pxr::VtValue& value, const pxr::VtValue* oldValue);

    void SetField(const pxr::SdfPath& path, const pxr::TfToken& field, const pxr::SdfAbstractDataConstValue& value, const pxr::VtValue* oldValue);

    void SetFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& field, const pxr::TfToken& keyPath, const pxr::VtValue& value, const pxr::VtValue* oldValue);

    void SetFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& field, const pxr::TfToken& keyPath, const pxr::SdfAbstractDataConstValue& value, const pxr::VtValue* oldValue);

    void SetTimeSample(const pxr::SdfPath& path, double time, const pxr::VtValue& value);

    void SetTimeSample(const pxr::SdfPath& path, double time, const pxr::SdfAbstractDataConstValue& value);

    void CreateSpec(const pxr::SdfPath& path, pxr::SdfSpecType specType, bool inert);

    void DeleteSpec(const pxr::SdfPath& path, bool inert);

    void MoveSpec(const pxr::SdfPath& oldPath, const pxr::SdfPath& newPath);

    void PushChild(const pxr::SdfPath& parentPath, const pxr::TfToken& field, const pxr::TfToken& value);

    void PushChild(const pxr::SdfPath& parentPath, const pxr::TfToken& field, const pxr::SdfPath& value);

    void PopChild(const pxr::SdfPath& parentPath, const pxr::TfToken& field, const pxr::TfToken& oldValue);

    void PopChild(const pxr::SdfPath& parentPath, const pxr::TfToken& field, const pxr::SdfPath& oldValue);

    SdfLayerStateDelegateBase(const pxr::SdfLayerStateDelegateBase& );

    pxr::SdfLayerStateDelegateBase& operator=(const pxr::SdfLayerStateDelegateBase& );

} CPPMM_OPAQUEPTR; // struct SdfLayerStateDelegateBase


/// \class SdfSimpleLayerStateDelegate
/// A layer state delegate that simply records whether any changes have
/// been made to a layer.
struct SdfSimpleLayerStateDelegate {
    using BoundType = pxr::SdfSimpleLayerStateDelegate;

    /// Return the current reference count of this object.
    size_t GetCurrentCount() const;

    /// Return true if only one \c TfRefPtr points to this object.
    bool IsUnique() const;

    const pxr::TfRefCount& GetRefCount() const;

    void SetShouldInvokeUniqueChangedListener(bool shouldCall);

    static void SetUniqueChangedListener(pxr::TfRefBase::UniqueChangedListener listener);

    const pxr::TfWeakBase& __GetTfWeakBase__() const;

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

    bool IsDirty();

    void SetField(const pxr::SdfPath& path, const pxr::TfToken& field, const pxr::VtValue& value, const pxr::VtValue* oldValue);

    void SetField(const pxr::SdfPath& path, const pxr::TfToken& field, const pxr::SdfAbstractDataConstValue& value, const pxr::VtValue* oldValue);

    void SetFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& field, const pxr::TfToken& keyPath, const pxr::VtValue& value, const pxr::VtValue* oldValue);

    void SetFieldDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& field, const pxr::TfToken& keyPath, const pxr::SdfAbstractDataConstValue& value, const pxr::VtValue* oldValue);

    void SetTimeSample(const pxr::SdfPath& path, double time, const pxr::VtValue& value);

    void SetTimeSample(const pxr::SdfPath& path, double time, const pxr::SdfAbstractDataConstValue& value);

    void CreateSpec(const pxr::SdfPath& path, pxr::SdfSpecType specType, bool inert);

    void DeleteSpec(const pxr::SdfPath& path, bool inert);

    void MoveSpec(const pxr::SdfPath& oldPath, const pxr::SdfPath& newPath);

    void PushChild(const pxr::SdfPath& parentPath, const pxr::TfToken& field, const pxr::TfToken& value);

    void PushChild(const pxr::SdfPath& parentPath, const pxr::TfToken& field, const pxr::SdfPath& value);

    void PopChild(const pxr::SdfPath& parentPath, const pxr::TfToken& field, const pxr::TfToken& oldValue);

    void PopChild(const pxr::SdfPath& parentPath, const pxr::TfToken& field, const pxr::SdfPath& oldValue);

    static pxr::SdfSimpleLayerStateDelegateRefPtr New();

    SdfSimpleLayerStateDelegate(const pxr::SdfSimpleLayerStateDelegate& );

    SdfSimpleLayerStateDelegate(pxr::SdfSimpleLayerStateDelegate&& ) CPPMM_IGNORE;

    pxr::SdfSimpleLayerStateDelegate& operator=(const pxr::SdfSimpleLayerStateDelegate& );

    pxr::SdfSimpleLayerStateDelegate& operator=(pxr::SdfSimpleLayerStateDelegate&& ) CPPMM_IGNORE;

    ~SdfSimpleLayerStateDelegate();

} CPPMM_OPAQUEPTR; // struct SdfSimpleLayerStateDelegate


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
