#if 0
#include <pxr/usd/sdf/layerTree.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfLayerTree
/// 
/// A SdfLayerTree is an immutable tree structure representing a sublayer
/// stack and its recursive structure.
/// 
/// Layers can have sublayers, which can in turn have sublayers of their
/// own.  Clients that want to represent that hierarchical structure in
/// memory can build a SdfLayerTree for that purpose.
/// 
/// We use TfRefPtr<SdfLayerTree> as handles to LayerTrees, as a simple way
/// to pass them around as immutable trees without worrying about lifetime.
struct SdfLayerTree {
    using BoundType = pxr::SdfLayerTree;

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

    /// Create a new layer tree node.
    static pxr::SdfLayerTreeHandle New(const pxr::SdfLayerHandle& layer, const pxr::SdfLayerTreeHandleVector& childTrees, const pxr::SdfLayerOffset& cumulativeOffset);

    /// Returns the layer handle this tree node represents.
    const pxr::SdfLayerHandle& GetLayer() const;

    /// Returns the cumulative layer offset from the root of the tree.
    const pxr::SdfLayerOffset& GetOffset() const;

    /// Returns the children of this tree node.
    const pxr::SdfLayerTreeHandleVector& GetChildTrees() const;

    SdfLayerTree(const pxr::SdfLayerTree& );

    SdfLayerTree(pxr::SdfLayerTree&& ) CPPMM_IGNORE;

    pxr::SdfLayerTree& operator=(const pxr::SdfLayerTree& );

    pxr::SdfLayerTree& operator=(pxr::SdfLayerTree&& ) CPPMM_IGNORE;

    ~SdfLayerTree();

} CPPMM_OPAQUEPTR; // struct SdfLayerTree


    using SdfLayerTreeHandle = pxr::SdfLayerTreeHandle;


    using SdfLayerTreeHandleVector = pxr::SdfLayerTreeHandleVector;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
