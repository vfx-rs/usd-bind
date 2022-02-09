#include <pxr/usd/pcp/node.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpNodeRef
/// 
/// PcpNode represents a node in an expression tree for compositing
/// scene description.
/// 
/// A node represents the opinions from a particular site.  In addition,
/// it may have child nodes, representing nested expressions that are
/// composited over/under this node.
/// 
/// Child nodes are stored and composited in strength order.
/// 
/// Each node holds information about the arc to its parent.
/// This captures both the relative strength of the sub-expression
/// as well as any value-mapping needed, such as to rename opinions
/// from a model to use in a particular instance.
struct PcpNodeRef {
    using BoundType = pxr::PcpNodeRef;

    PcpNodeRef();

#if 0
    operator unsigned long pxr::PcpNodeRef::*() const;
#endif

    /// Returns true if this references the same node as \p rhs.
    bool operator==(const pxr::PcpNodeRef& rhs) const;

    /// Returns true if this node is 'less' than \p rhs. 
    /// The ordering of nodes is arbitrary and does not indicate the relative
    /// strength of the nodes.
    bool operator<(const pxr::PcpNodeRef& rhs) const;

    /// Returns the graph that this node belongs to.
    pxr::PcpPrimIndex_GraphPtr GetOwningGraph() const;

    /// Returns a value that uniquely identifies this node.
    void* GetUniqueIdentifier() const;

    /// Returns the type of arc connecting this node to its parent node.
    pxr::PcpArcType GetArcType() const;

    /// Returns this node's immediate parent node. Will return NULL if this
    /// node is a root node.
    pxr::PcpNodeRef GetParentNode() const;

    /// Returns an iterator range over the children nodes in strongest to
    /// weakest order.
    pxr::PcpNodeRef::child_const_range GetChildrenRange() const;

    /// Inserts a new child node for \p site, connected to this node via
    /// \p arc.
    pxr::PcpNodeRef InsertChild(const pxr::PcpLayerStackSite& site, const pxr::PcpArc& arc, pxr::PcpErrorBasePtr* error);

    /// Inserts \p subgraph as a child of this node, with the root node of
    /// \p subtree connected to this node via \p arc.
    pxr::PcpNodeRef InsertChildSubgraph(const pxr::PcpPrimIndex_GraphPtr& subgraph, const pxr::PcpArc& arc, pxr::PcpErrorBasePtr* error);

    /// Returns the immediate origin node for this node. The origin node
    /// is the node that caused this node to be brought into the prim index.
    /// In most cases, this is the same as the parent node. For implied 
    /// inherits, the origin is the node from which this node was propagated.
    pxr::PcpNodeRef GetOriginNode() const;

    /// Walk up to the root origin node for this node. This is the very
    /// first node that caused this node to be added to the graph. For
    /// instance, the root origin node of an implied inherit is the
    /// original inherit node.
    pxr::PcpNodeRef GetOriginRootNode() const;

    /// Walk up to the root node of this expression.
    pxr::PcpNodeRef GetRootNode() const;

    /// Returns mapping function used to translate paths and values from
    /// this node to its parent node.
    const pxr::PcpMapExpression& GetMapToParent() const;

    /// Returns mapping function used to translate paths and values from
    /// this node directly to the root node.
    const pxr::PcpMapExpression& GetMapToRoot() const;

    /// Returns this node's index among siblings with the same arc type
    /// at this node's origin.
    int GetSiblingNumAtOrigin() const;

    /// Returns the absolute namespace depth of the node that introduced
    /// this node. Note that this does *not* count any variant selections.
    int GetNamespaceDepth() const;

    /// Return the number of levels of namespace this node's site is
    /// below the level at which it was introduced by an arc.
    int GetDepthBelowIntroduction() const;

    /// Returns the path for this node's site when it was introduced.
    pxr::SdfPath GetPathAtIntroduction() const;

    /// Get the path that introduced this node.
    /// Specifically, this is the path the parent node had at the level
    /// of namespace where this node was added as a child.
    /// For a root node, this returns the absolute root path.
    /// See also GetDepthBelowIntroduction().
    pxr::SdfPath GetIntroPath() const;

    /// Get the site this node represents.
    pxr::PcpLayerStackSite GetSite() const;

    /// Returns the path for the site this node represents.
    const pxr::SdfPath& GetPath() const;

    /// Returns the layer stack for the site this node represents.
    const pxr::PcpLayerStackRefPtr& GetLayerStack() const;

    /// Returns true if this node is the root node of the prim index graph.
    bool IsRootNode() const;

    /// Returns true if this node is due to an ancestral opinion.
    bool IsDueToAncestor() const;

    /// Get/set whether this node provides any symmetry opinions, either
    /// directly or from a namespace ancestor.
    void SetHasSymmetry(bool hasSymmetry);

    bool HasSymmetry() const;

    /// Get/set the permission for this node. This indicates whether specs
    /// on this node can be accessed from other nodes.
    void SetPermission(pxr::SdfPermission perm);

    pxr::SdfPermission GetPermission() const;

    /// Get/set whether this node is inert. An inert node never provides
    /// any opinions to a prim index. Such a node may exist purely as a
    /// marker to represent certain composition structure, but should never 
    /// contribute opinions.
    void SetInert(bool inert);

    bool IsInert() const;

    /// Get/set whether this node is culled. If a node is culled, it and
    /// all descendant nodes provide no opinions to the index. A culled
    /// node is also considered inert.
    void SetCulled(bool culled);

    bool IsCulled() const;

    /// Get/set whether this node is restricted. A restricted node is a
    /// node that cannot contribute opinions to the index due to permissions.
    void SetRestricted(bool restricted);

    bool IsRestricted() const;

    /// Returns true if this node is allowed to contribute opinions
    /// for composition, false otherwise.
    bool CanContributeSpecs() const;

    /// Returns true if this node has opinions authored
    /// for composition, false otherwise.
    void SetHasSpecs(bool hasSpecs);

    bool HasSpecs() const;

    /// @}
    pxr::Pcp_CompressedSdSite GetCompressedSdSite(size_t layerIndex) const;

    PcpNodeRef(const pxr::PcpNodeRef& );

#if 0
    PcpNodeRef(pxr::PcpNodeRef&& ) CPPMM_IGNORE;
#endif

    ~PcpNodeRef();

    pxr::PcpNodeRef& operator=(const pxr::PcpNodeRef& );

#if 0
    pxr::PcpNodeRef& operator=(pxr::PcpNodeRef&& ) CPPMM_IGNORE;
#endif


    /// Hash functor.
    struct Hash {
        using BoundType = pxr::PcpNodeRef::Hash;

        size_t operator()(const pxr::PcpNodeRef& rhs) const;

    } CPPMM_OPAQUEPTR; // struct Hash

} CPPMM_OPAQUEPTR; // struct PcpNodeRef


/// \class PcpNodeRef_ChildrenIterator
/// 
/// Object used to iterate over child nodes (not all descendant nodes) of a
/// node in the prim index graph in strong-to-weak order.
struct PcpNodeRef_ChildrenIterator {
    using BoundType = pxr::PcpNodeRef_ChildrenIterator;

#if 0
    boost::iterators::detail::iterator_facade_base::reference operator*() const;

    boost::iterators::detail::iterator_facade_base::pointer operator->() const;
#endif

    pxr::PcpNodeRef_ChildrenIterator& operator++();

    /// Constructs an invalid iterator.
    PcpNodeRef_ChildrenIterator();

    /// Constructs an iterator pointing to \p node. Passing a NULL value
    /// for \p node constructs an end iterator.
    PcpNodeRef_ChildrenIterator(const pxr::PcpNodeRef& node, bool end);

    pxr::PcpNodeRef_ChildrenIterator& operator=(const pxr::PcpNodeRef_ChildrenIterator& );

#if 0
    pxr::PcpNodeRef_ChildrenIterator& operator=(pxr::PcpNodeRef_ChildrenIterator&& ) CPPMM_IGNORE;
#endif

    ~PcpNodeRef_ChildrenIterator();

    PcpNodeRef_ChildrenIterator(const pxr::PcpNodeRef_ChildrenIterator& );

#if 0
    PcpNodeRef_ChildrenIterator(pxr::PcpNodeRef_ChildrenIterator&& ) CPPMM_IGNORE;
#endif

} CPPMM_OPAQUEPTR; // struct PcpNodeRef_ChildrenIterator


/// \class PcpNodeRef_ChildrenReverseIterator
/// 
/// Object used to iterate over nodes in the prim index graph in weak-to-strong
/// order.
struct PcpNodeRef_ChildrenReverseIterator {
    using BoundType = pxr::PcpNodeRef_ChildrenReverseIterator;

#if 0
    boost::iterators::detail::iterator_facade_base::reference operator*() const;

    boost::iterators::detail::iterator_facade_base::pointer operator->() const;
#endif

    pxr::PcpNodeRef_ChildrenReverseIterator& operator++();

    /// Constructs an invalid iterator.
    PcpNodeRef_ChildrenReverseIterator();

    /// Constructs a reverse iterator from a forward iterator.
    PcpNodeRef_ChildrenReverseIterator(const pxr::PcpNodeRef_ChildrenIterator& );

    /// Constructs an iterator pointing to \p node. Passing a NULL value
    /// for \p node constructs an end iterator.
    PcpNodeRef_ChildrenReverseIterator(const pxr::PcpNodeRef& node, bool end);

    PcpNodeRef_ChildrenReverseIterator(const pxr::PcpNodeRef_ChildrenReverseIterator& );

#if 0
    PcpNodeRef_ChildrenReverseIterator(pxr::PcpNodeRef_ChildrenReverseIterator&& ) CPPMM_IGNORE;
#endif

    ~PcpNodeRef_ChildrenReverseIterator();

} CPPMM_OPAQUEPTR; // struct PcpNodeRef_ChildrenReverseIterator


using PcpErrorBasePtr = pxr::PcpErrorBasePtr;


/// Typedefs and support functions
size_t hash_value(const pxr::PcpNodeRef& x);


using PcpNodeRefHashSet = pxr::PcpNodeRefHashSet;


using PcpNodeRefVector = pxr::PcpNodeRefVector;


#if 0
struct Tf_IteratorInterface {
    using BoundType = pxr::Tf_IteratorInterface;

    static pxr::Tf_IteratorInterface::IteratorType Begin(const pxr::PcpNodeRef::child_const_range& c);

    static pxr::Tf_IteratorInterface::IteratorType End(const pxr::PcpNodeRef::child_const_range& c);

} CPPMM_OPAQUEPTR; // struct Tf_IteratorInterface
#endif

#if 0
struct Tf_ShouldIterateOverCopy {
    using BoundType = pxr::Tf_ShouldIterateOverCopy;

    template <typename T>
    static T& dereference(T* p);

#if 0
    operator const mpl_::bool_<true> &() const;
#endif

    operator bool() const;

} CPPMM_OPAQUEPTR; // struct Tf_ShouldIterateOverCopy
#endif


int PcpNode_GetNonVariantPathElementCount(const pxr::SdfPath& path);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
