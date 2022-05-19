#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____UsdPrim_t_s pxrInternal_v0_21__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrim_t pxr_UsdPrim_t;
typedef struct pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_t_s pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_t;
typedef pxrInternal_v0_21__pxrReserved____Usd_PrimFlagsPredicate_t pxr_Usd_PrimFlagsPredicate_t;

/** \class UsdPrimRange

An forward-iterable range that traverses a subtree of prims rooted at a
given prim in depth-first order.

In addition to depth-first order, UsdPrimRange provides the optional ability
to traverse in depth-first pre- and post-order wher prims appear twice in
the range; first before all descendants and then again immediately after all
descendants.  This is useful for maintaining state associated with subtrees,
in a stack-like fashion.  See UsdPrimRange::iterator::IsPostVisit() to
detect when an iterator is visiting a prim for the second time.

There are several constructors providing different levels of 
configurability; ultimately, one can provide a prim predicate for a custom
iteration, just as one would use UsdPrim::GetFilteredChildren() in a custom
recursion.

Why would one want to use a UsdPrimRange rather than just iterating
over the results of UsdPrim::GetFilteredDescendants() ?  Primarily, if
one of the following applies:
\li You need to perform pre-and-post-order processing
\li You may want to prune sub-trees from processing (see UsdPrimRange::iterator::PruneChildren())
\li You want to treat the root prim itself uniformly with its 
descendents (GetFilteredDescendants() will not return the root prim itself,
while UsdPrimRange will - see UsdPrimRange::Stage for an exception).

<b>Using UsdPrimRange in C++</b>

UsdPrimRange provides standard container-like semantics.  For example:
\code
// simple range-for iteration
for (UsdPrim prim: UsdPrimRange(rootPrim)) {
    ProcessPrim(prim);
}

// using stl algorithms
std::vector<UsdPrim> meshes;
auto range = stage->Traverse();
std::copy_if(range.begin(), range.end(), std::back_inserter(meshes),
             [](UsdPrim const &) { return prim.IsA<UsdGeomMesh>(); });

// iterator-based iterating, with subtree pruning
UsdPrimRange range(rootPrim);
for (auto iter = range.begin(); iter != range.end(); ++iter) {
    if (UsdModelAPI(*iter).GetKind() == KindTokens->component) {
        iter.PruneChildren();
    }
    else {
        nonComponents.push_back(*iter);
    }
}
\endcode

<b>Using Usd.PrimRange in python</b>

The python wrapping for PrimRange is python-iterable, so it can
used directly as the object of a "for x in..." clause; however in that
usage one loses access to PrimRange methods such as PruneChildren() and
IsPostVisit().  Simply create the iterator outside the loop to overcome
this limitation.  Finally, in python, prim predicates must be combined
with bit-wise operators rather than logical operators because the latter
are not overridable.
\code{.py}
# simple iteration
for prim in Usd.PrimRange(rootPrim):
    ProcessPrim(prim)

# filtered range using iterator to invoke iterator methods
it = iter(Usd.PrimRange.Stage(stage, Usd.PrimIsLoaded & ~Usd.PrimIsAbstract))
for prim in it:
    if Usd.ModelAPI(prim).GetKind() == Kind.Tokens.component:
        it.PruneChildren()
    else:
        nonComponents.append(prim)
\endcode

Finally, since iterators in python are not directly dereferencable, we
provide the \em python \em only methods GetCurrentPrim() and IsValid(),
documented in the python help system. */
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrimRange_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____UsdPrimRange_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrimRange_t pxr_UsdPrimRange_t;

/** \class iterator

A forward iterator into a UsdPrimRange.  Iterators are valid for the
range they were obtained from.  An iterator \em i obtained from a range
\em r is not valid for a range \em c copied from \em r. */
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::UsdPrimRange::iterator%) pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_t pxr_UsdPrimRange_iterator_t;

/** \class EndSentinel

This class lets us represent past-the-end without the full weight of an
iterator. */
typedef struct pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_t_s {
    char data[%SIZEpxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_21__pxrReserved__::UsdPrimRange::EndSentinel%) pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_t;
typedef pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_t pxr_UsdPrimRange_EndSentinel_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_ctor(
    pxr_UsdPrimRange_t * * this_);
#define pxr_UsdPrimRange_ctor pxrInternal_v0_21__pxrReserved____UsdPrimRange_ctor


/** Construct a PrimRange that traverses the subtree rooted at \p start in
depth-first order, visiting prims that pass the default predicate (as
defined by #UsdPrimDefaultPredicate). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_ctor_1(
    pxr_UsdPrimRange_t * * this_
    , pxr_UsdPrim_t const * start);
#define pxr_UsdPrimRange_ctor_1 pxrInternal_v0_21__pxrReserved____UsdPrimRange_ctor_1


/** Construct a PrimRange that traverses the subtree rooted at \p start in
depth-first order, visiting prims that pass \p predicate. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_ctor_2(
    pxr_UsdPrimRange_t * * this_
    , pxr_UsdPrim_t const * start
    , pxr_Usd_PrimFlagsPredicate_t const * predicate);
#define pxr_UsdPrimRange_ctor_2 pxrInternal_v0_21__pxrReserved____UsdPrimRange_ctor_2


/** Create a PrimRange that traverses the subtree rooted at \p start in
depth-first order, visiting prims that pass the default predicate (as
defined by #UsdPrimDefaultPredicate) with pre- and post-order
visitation.

Pre- and post-order visitation means that each prim appears
twice in the range; not only prior to all its descendants as with an
ordinary traversal but also immediately following its descendants.  This
lets client code maintain state for subtrees.  See
UsdPrimRange::iterator::IsPostVisit(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_PreAndPostVisit(
    pxr_UsdPrimRange_t * * return_
    , pxr_UsdPrim_t const * start);
#define pxr_UsdPrimRange_PreAndPostVisit pxrInternal_v0_21__pxrReserved____UsdPrimRange_PreAndPostVisit


/** Create a PrimRange that traverses the subtree rooted at \p start in
depth-first order, visiting prims that pass \p predicate with pre- and
post-order visitation.

Pre- and post-order visitation means that each prim appears
twice in the range; not only prior to all its descendants as with an
ordinary traversal but also immediately following its descendants.  This
lets client code maintain state for subtrees.  See
UsdPrimRange::iterator::IsPostVisit(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_PreAndPostVisit_1(
    pxr_UsdPrimRange_t * * return_
    , pxr_UsdPrim_t const * start
    , pxr_Usd_PrimFlagsPredicate_t const * predicate);
#define pxr_UsdPrimRange_PreAndPostVisit_1 pxrInternal_v0_21__pxrReserved____UsdPrimRange_PreAndPostVisit_1


/** Construct a PrimRange that traverses the subtree rooted at \p start in
depth-first order, visiting all prims (including deactivated, undefined,
and abstract prims). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_AllPrims(
    pxr_UsdPrimRange_t * * return_
    , pxr_UsdPrim_t const * start);
#define pxr_UsdPrimRange_AllPrims pxrInternal_v0_21__pxrReserved____UsdPrimRange_AllPrims


/** Construct a PrimRange that traverses the subtree rooted at \p start in
depth-first order, visiting all prims (including deactivated, undefined,
and abstract prims) with pre- and post-order visitation.

Pre- and post-order visitation means that each prim appears
twice in the range; not only prior to all its descendants as with an
ordinary traversal but also immediately following its descendants.  This
lets client code maintain state for subtrees.  See
UsdPrimRange::iterator::IsPostVisit(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_AllPrimsPreAndPostVisit(
    pxr_UsdPrimRange_t * * return_
    , pxr_UsdPrim_t const * start);
#define pxr_UsdPrimRange_AllPrimsPreAndPostVisit pxrInternal_v0_21__pxrReserved____UsdPrimRange_AllPrimsPreAndPostVisit


/** Return an iterator to the start of this range. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_begin(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrimRange_iterator_t * return_);
#define pxr_UsdPrimRange_begin pxrInternal_v0_21__pxrReserved____UsdPrimRange_begin


/** Return a const_iterator to the start of this range. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_cbegin(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrimRange_iterator_t * return_);
#define pxr_UsdPrimRange_cbegin pxrInternal_v0_21__pxrReserved____UsdPrimRange_cbegin


/** Return the first element of this range.  The range must not be empty(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_front(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdPrimRange_front pxrInternal_v0_21__pxrReserved____UsdPrimRange_front


/** Return the past-the-end iterator for this range. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_end(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrimRange_iterator_t * return_);
#define pxr_UsdPrimRange_end pxrInternal_v0_21__pxrReserved____UsdPrimRange_end


/** Return the past-the-end const_iterator for this range. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_cend(
    pxr_UsdPrimRange_t const * this_
    , pxr_UsdPrimRange_iterator_t * return_);
#define pxr_UsdPrimRange_cend pxrInternal_v0_21__pxrReserved____UsdPrimRange_cend


/** Modify this range by advancing the beginning by one.  The range must not
be empty, and the range must not be a pre- and post-order range. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_increment_begin(
    pxr_UsdPrimRange_t * this_);
#define pxr_UsdPrimRange_increment_begin pxrInternal_v0_21__pxrReserved____UsdPrimRange_increment_begin


/** Set the start of this range to \p newBegin.  The \p newBegin iterator
must be within this range's begin() and end(), and must not have
UsdPrimRange::iterator::IsPostVisit() be true. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_set_begin(
    pxr_UsdPrimRange_t * this_
    , pxr_UsdPrimRange_iterator_t const * newBegin);
#define pxr_UsdPrimRange_set_begin pxrInternal_v0_21__pxrReserved____UsdPrimRange_set_begin


/** Return true if this range contains no prims, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_empty(
    pxr_UsdPrimRange_t const * this_
    , _Bool * return_);
#define pxr_UsdPrimRange_empty pxrInternal_v0_21__pxrReserved____UsdPrimRange_empty


/** Return true if this range contains one or more prims, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_operatorbool(
    pxr_UsdPrimRange_t const * this_
    , _Bool * return_);
#define pxr_UsdPrimRange_operatorbool pxrInternal_v0_21__pxrReserved____UsdPrimRange_operatorbool


/** Return true if this range is equivalent to \p other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__eq(
    pxr_UsdPrimRange_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_t const * other);
#define pxr_UsdPrimRange__eq pxrInternal_v0_21__pxrReserved____UsdPrimRange__eq


/** Return true if this range is not equivalent to \p other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__ne(
    pxr_UsdPrimRange_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_t const * other);
#define pxr_UsdPrimRange__ne pxrInternal_v0_21__pxrReserved____UsdPrimRange__ne


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_copy(
    pxr_UsdPrimRange_t * * this_
    , pxr_UsdPrimRange_t const * rhs);
#define pxr_UsdPrimRange_copy pxrInternal_v0_21__pxrReserved____UsdPrimRange_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange_dtor(
    pxr_UsdPrimRange_t * this_);
#define pxr_UsdPrimRange_dtor pxrInternal_v0_21__pxrReserved____UsdPrimRange_dtor


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_sizeof();
#define pxr_UsdPrimRange_iterator_sizeof pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_alignof();
#define pxr_UsdPrimRange_iterator_alignof pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_alignof


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_deref(
    pxr_UsdPrimRange_iterator_t const * this_
    , pxr_UsdPrim_t * * return_);
#define pxr_UsdPrimRange_iterator_deref pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_deref


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__op_inc(
    pxr_UsdPrimRange_iterator_t * this_
    , pxr_UsdPrimRange_iterator_t * * return_);
#define pxr_UsdPrimRange_iterator__op_inc pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__op_inc


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_ctor(
    pxr_UsdPrimRange_iterator_t * this_);
#define pxr_UsdPrimRange_iterator_ctor pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_ctor


/** Allow implicit conversion from EndSentinel. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_ctor_1(
    pxr_UsdPrimRange_iterator_t * this_
    , pxr_UsdPrimRange_EndSentinel_t e);
#define pxr_UsdPrimRange_iterator_ctor_1 pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_ctor_1


/** Return true if the iterator points to a prim visited the second time
(in post order) for a pre- and post-order iterator, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_IsPostVisit(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_);
#define pxr_UsdPrimRange_iterator_IsPostVisit pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_IsPostVisit


/** Behave as if the current prim has no children when next advanced.
Issue an error if this is a pre- and post-order iterator that
IsPostVisit(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_PruneChildren(
    pxr_UsdPrimRange_iterator_t * this_);
#define pxr_UsdPrimRange_iterator_PruneChildren pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_PruneChildren


/** Return true if this iterator is equivalent to \p other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__eq(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_iterator_t const * other);
#define pxr_UsdPrimRange_iterator__eq pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__eq


/** Return true if this iterator is equivalent to \p other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__eq_1(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_EndSentinel_t const * other);
#define pxr_UsdPrimRange_iterator__eq_1 pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__eq_1


/** Return true if this iterator is not equivalent to \p other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__ne(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_iterator_t const * other);
#define pxr_UsdPrimRange_iterator__ne pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__ne


/** Return true if this iterator is not equivalent to \p other. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__ne_1(
    pxr_UsdPrimRange_iterator_t const * this_
    , _Bool * return_
    , pxr_UsdPrimRange_EndSentinel_t const * other);
#define pxr_UsdPrimRange_iterator__ne_1 pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator__ne_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_copy(
    pxr_UsdPrimRange_iterator_t * this_
    , pxr_UsdPrimRange_iterator_t const * rhs);
#define pxr_UsdPrimRange_iterator_copy pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_dtor(
    pxr_UsdPrimRange_iterator_t * this_);
#define pxr_UsdPrimRange_iterator_dtor pxrInternal_v0_21__pxrReserved____UsdPrimRange__iterator_dtor


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_sizeof();
#define pxr_UsdPrimRange_EndSentinel_sizeof pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_alignof();
#define pxr_UsdPrimRange_EndSentinel_alignof pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_alignof


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_copy(
    pxr_UsdPrimRange_EndSentinel_t * this_
    , pxr_UsdPrimRange_EndSentinel_t const * rhs);
#define pxr_UsdPrimRange_EndSentinel_copy pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_dtor(
    pxr_UsdPrimRange_EndSentinel_t * this_);
#define pxr_UsdPrimRange_EndSentinel_dtor pxrInternal_v0_21__pxrReserved____UsdPrimRange__EndSentinel_dtor


#ifdef __cplusplus
}
#endif
