#include <pxr/usd/usd/primRange.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class UsdPrimRange
/// 
/// An forward-iterable range that traverses a subtree of prims rooted at a
/// given prim in depth-first order.
/// 
/// In addition to depth-first order, UsdPrimRange provides the optional ability
/// to traverse in depth-first pre- and post-order wher prims appear twice in
/// the range; first before all descendants and then again immediately after all
/// descendants.  This is useful for maintaining state associated with subtrees,
/// in a stack-like fashion.  See UsdPrimRange::iterator::IsPostVisit() to
/// detect when an iterator is visiting a prim for the second time.
/// 
/// There are several constructors providing different levels of 
/// configurability; ultimately, one can provide a prim predicate for a custom
/// iteration, just as one would use UsdPrim::GetFilteredChildren() in a custom
/// recursion.
/// 
/// Why would one want to use a UsdPrimRange rather than just iterating
/// over the results of UsdPrim::GetFilteredDescendants() ?  Primarily, if
/// one of the following applies:
/// \li You need to perform pre-and-post-order processing
/// \li You may want to prune sub-trees from processing (see UsdPrimRange::iterator::PruneChildren())
/// \li You want to treat the root prim itself uniformly with its 
/// descendents (GetFilteredDescendants() will not return the root prim itself,
/// while UsdPrimRange will - see UsdPrimRange::Stage for an exception).
/// 
/// <b>Using UsdPrimRange in C++</b>
/// 
/// UsdPrimRange provides standard container-like semantics.  For example:
/// ```
/// // simple range-for iteration
/// for (UsdPrim prim: UsdPrimRange(rootPrim)) {
///     ProcessPrim(prim);
/// }
/// 
/// // using stl algorithms
/// std::vector<UsdPrim> meshes;
/// auto range = stage->Traverse();
/// std::copy_if(range.begin(), range.end(), std::back_inserter(meshes),
///              [](UsdPrim const &) { return prim.IsA<UsdGeomMesh>(); });
/// 
/// // iterator-based iterating, with subtree pruning
/// UsdPrimRange range(rootPrim);
/// for (auto iter = range.begin(); iter != range.end(); ++iter) {
///     if (UsdModelAPI(*iter).GetKind() == KindTokens->component) {
///         iter.PruneChildren();
///     }
///     else {
///         nonComponents.push_back(*iter);
///     }
/// }
/// ```
/// 
/// <b>Using Usd.PrimRange in python</b>
/// 
/// The python wrapping for PrimRange is python-iterable, so it can
/// used directly as the object of a "for x in..." clause; however in that
/// usage one loses access to PrimRange methods such as PruneChildren() and
/// IsPostVisit().  Simply create the iterator outside the loop to overcome
/// this limitation.  Finally, in python, prim predicates must be combined
/// with bit-wise operators rather than logical operators because the latter
/// are not overridable.
/// ```{.py}
/// # simple iteration
/// for prim in Usd.PrimRange(rootPrim):
///     ProcessPrim(prim)
/// 
/// # filtered range using iterator to invoke iterator methods
/// it = iter(Usd.PrimRange.Stage(stage, Usd.PrimIsLoaded & ~Usd.PrimIsAbstract))
/// for prim in it:
///     if Usd.ModelAPI(prim).GetKind() == Kind.Tokens.component:
///         it.PruneChildren()
///     else:
///         nonComponents.append(prim)
/// ```
/// 
/// Finally, since iterators in python are not directly dereferencable, we
/// provide the *python* *only* methods GetCurrentPrim() and IsValid(),
/// documented in the python help system.
struct UsdPrimRange {
    using BoundType = pxr::UsdPrimRange;

    UsdPrimRange();

    /// Construct a PrimRange that traverses the subtree rooted at *start* in
    /// depth-first order, visiting prims that pass the default predicate (as
    /// defined by #UsdPrimDefaultPredicate).
    UsdPrimRange(const pxr::UsdPrim& start);

    /// Construct a PrimRange that traverses the subtree rooted at *start* in
    /// depth-first order, visiting prims that pass *predicate*.
    UsdPrimRange(const pxr::UsdPrim& start, const pxr::Usd_PrimFlagsPredicate& predicate);

    /// Create a PrimRange that traverses the subtree rooted at *start* in
    /// depth-first order, visiting prims that pass the default predicate (as
    /// defined by #UsdPrimDefaultPredicate) with pre- and post-order
    /// visitation.
    /// 
    /// Pre- and post-order visitation means that each prim appears
    /// twice in the range; not only prior to all its descendants as with an
    /// ordinary traversal but also immediately following its descendants.  This
    /// lets client code maintain state for subtrees.  See
    /// UsdPrimRange::iterator::IsPostVisit().
    static pxr::UsdPrimRange PreAndPostVisit(const pxr::UsdPrim& start);

    /// Create a PrimRange that traverses the subtree rooted at *start* in
    /// depth-first order, visiting prims that pass *predicate* with pre- and
    /// post-order visitation.
    /// 
    /// Pre- and post-order visitation means that each prim appears
    /// twice in the range; not only prior to all its descendants as with an
    /// ordinary traversal but also immediately following its descendants.  This
    /// lets client code maintain state for subtrees.  See
    /// UsdPrimRange::iterator::IsPostVisit().
    static pxr::UsdPrimRange PreAndPostVisit(const pxr::UsdPrim& start, const pxr::Usd_PrimFlagsPredicate& predicate);

    /// Construct a PrimRange that traverses the subtree rooted at *start* in
    /// depth-first order, visiting all prims (including deactivated, undefined,
    /// and abstract prims).
    static pxr::UsdPrimRange AllPrims(const pxr::UsdPrim& start);

    /// Construct a PrimRange that traverses the subtree rooted at *start* in
    /// depth-first order, visiting all prims (including deactivated, undefined,
    /// and abstract prims) with pre- and post-order visitation.
    /// 
    /// Pre- and post-order visitation means that each prim appears
    /// twice in the range; not only prior to all its descendants as with an
    /// ordinary traversal but also immediately following its descendants.  This
    /// lets client code maintain state for subtrees.  See
    /// UsdPrimRange::iterator::IsPostVisit().
    static pxr::UsdPrimRange AllPrimsPreAndPostVisit(const pxr::UsdPrim& start);

    /*
    /// Create a PrimRange that traverses all the prims on *stage*, and
    /// visits those that pass the default predicate (as defined by
    /// #UsdPrimDefaultPredicate).
    static pxr::UsdPrimRange Stage(const pxr::UsdStagePtr& stage, const pxr::Usd_PrimFlagsPredicate& predicate);
    */

    /// Return an iterator to the start of this range.
    pxr::UsdPrimRange::iterator begin() const;

    /// Return a const_iterator to the start of this range.
    pxr::UsdPrimRange::const_iterator cbegin() const;

    /// Return the first element of this range.  The range must not be empty().
    pxr::UsdPrim front() const;

    /// Return the past-the-end iterator for this range.
    pxr::UsdPrimRange::iterator end() const;

    /// Return the past-the-end const_iterator for this range.
    pxr::UsdPrimRange::const_iterator cend() const;

    /// Modify this range by advancing the beginning by one.  The range must not
    /// be empty, and the range must not be a pre- and post-order range.
    void increment_begin();

    /// Set the start of this range to *newBegin*.  The *newBegin* iterator
    /// must be within this range's begin() and end(), and must not have
    /// UsdPrimRange::iterator::IsPostVisit() be true.
    void set_begin(const pxr::UsdPrimRange::iterator& newBegin);

    /// Return true if this range contains no prims, false otherwise.
    bool empty() const;

    /// Return true if this range contains one or more prims, false otherwise.
    operator bool() const;

    /// Return true if this range is equivalent to *other*.
    bool operator==(const pxr::UsdPrimRange& other) const;

    /// Return true if this range is not equivalent to *other*.
    bool operator!=(const pxr::UsdPrimRange& other) const;

    UsdPrimRange(const pxr::UsdPrimRange& );

    UsdPrimRange(pxr::UsdPrimRange&& ) CPPMM_IGNORE;

    ~UsdPrimRange();


    /// \class iterator
    /// 
    /// A forward iterator into a UsdPrimRange.  Iterators are valid for the
    /// range they were obtained from.  An iterator *i* obtained from a range
    /// *r* is not valid for a range *c* copied from *r*.
    struct iterator {
        using BoundType = pxr::UsdPrimRange::iterator;

        pxr::UsdPrim operator*() const CPPMM_RENAME(deref);

        /*
        boost::iterators::detail::iterator_facade_base::pointer operator->() const;
        */

        pxr::UsdPrimRange::iterator& operator++();

        /* const pxr::Usd_PrimData* base() const; */

        iterator();

        /// Allow implicit conversion from EndSentinel.
        iterator(pxr::UsdPrimRange::EndSentinel e);

        /// Return true if the iterator points to a prim visited the second time
        /// (in post order) for a pre- and post-order iterator, false otherwise.
        bool IsPostVisit() const;

        /// Behave as if the current prim has no children when next advanced.
        /// Issue an error if this is a pre- and post-order iterator that
        /// IsPostVisit().
        void PruneChildren();

        /// Return true if this iterator is equivalent to *other*.
        bool operator==(const pxr::UsdPrimRange::iterator& other) const;

        /// Return true if this iterator is equivalent to *other*.
        bool operator==(const pxr::UsdPrimRange::EndSentinel& other) const;

        /// Return true if this iterator is not equivalent to *other*.
        bool operator!=(const pxr::UsdPrimRange::iterator& other) const;

        /// Return true if this iterator is not equivalent to *other*.
        bool operator!=(const pxr::UsdPrimRange::EndSentinel& other) const;

        iterator(const pxr::UsdPrimRange::iterator& );

        iterator(pxr::UsdPrimRange::iterator&& ) CPPMM_IGNORE;

        ~iterator();

    } CPPMM_OPAQUEBYTES CPPMM_DERIVE("Copy, Clone"); // struct iterator


    /// \class EndSentinel
    /// 
    /// This class lets us represent past-the-end without the full weight of an
    /// iterator.
    struct EndSentinel {
        using BoundType = pxr::UsdPrimRange::EndSentinel;

        EndSentinel(const pxr::UsdPrimRange::EndSentinel& );

        EndSentinel(pxr::UsdPrimRange::EndSentinel&& ) CPPMM_IGNORE;

        ~EndSentinel();

    } CPPMM_OPAQUEBYTES; // struct EndSentinel

} CPPMM_OPAQUEPTR; // struct UsdPrimRange


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
