#pragma once
#include "usd-api-export.h"

#include <pxr/usd/pcp/pcp_types.h>
#include <pxr/usd/sdf/sdf_types.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_21__pxrReserved____PcpArc_t_s pxrInternal_v0_21__pxrReserved____PcpArc_t;
typedef pxrInternal_v0_21__pxrReserved____PcpArc_t pxr_PcpArc_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_t_s pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_t;
typedef pxrInternal_v0_21__pxrReserved____PcpLayerStackSite_t pxr_PcpLayerStackSite_t;
typedef struct pxrInternal_v0_21__pxrReserved____PcpMapExpression_t_s pxrInternal_v0_21__pxrReserved____PcpMapExpression_t;
typedef pxrInternal_v0_21__pxrReserved____PcpMapExpression_t pxr_PcpMapExpression_t;
typedef struct pxrInternal_v0_21__pxrReserved____SdfPath_t_s pxrInternal_v0_21__pxrReserved____SdfPath_t;
typedef pxrInternal_v0_21__pxrReserved____SdfPath_t pxr_SdfPath_t;

/** \class PcpNodeRef

PcpNode represents a node in an expression tree for compositing
scene description.

A node represents the opinions from a particular site.  In addition,
it may have child nodes, representing nested expressions that are
composited over/under this node.

Child nodes are stored and composited in strength order.

Each node holds information about the arc to its parent.
This captures both the relative strength of the sub-expression
as well as any value-mapping needed, such as to rename opinions
from a model to use in a particular instance. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpNodeRef_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef_t pxr_PcpNodeRef_t;

/** Hash functor. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef__Hash_t_s {
    char _unused;
} USD_CPPMM_ALIGN(1) pxrInternal_v0_21__pxrReserved____PcpNodeRef__Hash_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef__Hash_t pxr_PcpNodeRef_Hash_t;

/** \class PcpNodeRef_ChildrenIterator

Object used to iterate over child nodes (not all descendant nodes) of a
node in the prim index graph in strong-to-weak order. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_t pxr_PcpNodeRef_ChildrenIterator_t;

/** \class PcpNodeRef_ChildrenReverseIterator

Object used to iterate over nodes in the prim index graph in weak-to-strong
order. */
typedef struct pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_t_s {
    char _unused;
} USD_CPPMM_ALIGN(8) pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_t;
typedef pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_t pxr_PcpNodeRef_ChildrenReverseIterator_t;


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ctor(
    pxr_PcpNodeRef_t * * this_);
#define pxr_PcpNodeRef_ctor pxrInternal_v0_21__pxrReserved____PcpNodeRef_ctor


/** Returns true if this references the same node as \p rhs. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef__eq(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_
    , pxr_PcpNodeRef_t const * rhs);
#define pxr_PcpNodeRef__eq pxrInternal_v0_21__pxrReserved____PcpNodeRef__eq


/** Returns true if this node is 'less' than \p rhs. 
The ordering of nodes is arbitrary and does not indicate the relative
strength of the nodes. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_operator_(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_
    , pxr_PcpNodeRef_t const * rhs);
#define pxr_PcpNodeRef_operator_ pxrInternal_v0_21__pxrReserved____PcpNodeRef_operator_


/** Returns a value that uniquely identifies this node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetUniqueIdentifier(
    pxr_PcpNodeRef_t const * this_
    , void * * return_);
#define pxr_PcpNodeRef_GetUniqueIdentifier pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetUniqueIdentifier


/** Returns the type of arc connecting this node to its parent node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetArcType(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpArcType * return_);
#define pxr_PcpNodeRef_GetArcType pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetArcType


/** Returns this node's immediate parent node. Will return NULL if this
node is a root node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetParentNode(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpNodeRef_GetParentNode pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetParentNode


/** Returns the immediate origin node for this node. The origin node
is the node that caused this node to be brought into the prim index.
In most cases, this is the same as the parent node. For implied 
inherits, the origin is the node from which this node was propagated. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetOriginNode(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpNodeRef_GetOriginNode pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetOriginNode


/** Walk up to the root origin node for this node. This is the very
first node that caused this node to be added to the graph. For
instance, the root origin node of an implied inherit is the
original inherit node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetOriginRootNode(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpNodeRef_GetOriginRootNode pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetOriginRootNode


/** Walk up to the root node of this expression. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetRootNode(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpNodeRef_t * * return_);
#define pxr_PcpNodeRef_GetRootNode pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetRootNode


/** Returns mapping function used to translate paths and values from
this node to its parent node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetMapToParent(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpMapExpression_t const * * return_);
#define pxr_PcpNodeRef_GetMapToParent pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetMapToParent


/** Returns mapping function used to translate paths and values from
this node directly to the root node. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetMapToRoot(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpMapExpression_t const * * return_);
#define pxr_PcpNodeRef_GetMapToRoot pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetMapToRoot


/** Returns this node's index among siblings with the same arc type
at this node's origin. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetSiblingNumAtOrigin(
    pxr_PcpNodeRef_t const * this_
    , int * return_);
#define pxr_PcpNodeRef_GetSiblingNumAtOrigin pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetSiblingNumAtOrigin


/** Returns the absolute namespace depth of the node that introduced
this node. Note that this does *not* count any variant selections. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetNamespaceDepth(
    pxr_PcpNodeRef_t const * this_
    , int * return_);
#define pxr_PcpNodeRef_GetNamespaceDepth pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetNamespaceDepth


/** Return the number of levels of namespace this node's site is
below the level at which it was introduced by an arc. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetDepthBelowIntroduction(
    pxr_PcpNodeRef_t const * this_
    , int * return_);
#define pxr_PcpNodeRef_GetDepthBelowIntroduction pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetDepthBelowIntroduction


/** Returns the path for this node's site when it was introduced. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPathAtIntroduction(
    pxr_PcpNodeRef_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_PcpNodeRef_GetPathAtIntroduction pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPathAtIntroduction


/** Get the path that introduced this node.
Specifically, this is the path the parent node had at the level
of namespace where this node was added as a child.
For a root node, this returns the absolute root path.
See also GetDepthBelowIntroduction(). */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetIntroPath(
    pxr_PcpNodeRef_t const * this_
    , pxr_SdfPath_t * * return_);
#define pxr_PcpNodeRef_GetIntroPath pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetIntroPath


/** Get the site this node represents. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetSite(
    pxr_PcpNodeRef_t const * this_
    , pxr_PcpLayerStackSite_t * * return_);
#define pxr_PcpNodeRef_GetSite pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetSite


/** Returns the path for the site this node represents. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPath(
    pxr_PcpNodeRef_t const * this_
    , pxr_SdfPath_t const * * return_);
#define pxr_PcpNodeRef_GetPath pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPath


/** Returns true if this node is the root node of the prim index graph. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsRootNode(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_);
#define pxr_PcpNodeRef_IsRootNode pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsRootNode


/** Returns true if this node is due to an ancestral opinion. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsDueToAncestor(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_);
#define pxr_PcpNodeRef_IsDueToAncestor pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsDueToAncestor


/** Get/set whether this node provides any symmetry opinions, either
directly or from a namespace ancestor. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetHasSymmetry(
    pxr_PcpNodeRef_t * this_
    , _Bool hasSymmetry);
#define pxr_PcpNodeRef_SetHasSymmetry pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetHasSymmetry


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_HasSymmetry(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_);
#define pxr_PcpNodeRef_HasSymmetry pxrInternal_v0_21__pxrReserved____PcpNodeRef_HasSymmetry


/** Get/set the permission for this node. This indicates whether specs
on this node can be accessed from other nodes. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetPermission(
    pxr_PcpNodeRef_t * this_
    , pxr_SdfPermission perm);
#define pxr_PcpNodeRef_SetPermission pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetPermission


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPermission(
    pxr_PcpNodeRef_t const * this_
    , pxr_SdfPermission * return_);
#define pxr_PcpNodeRef_GetPermission pxrInternal_v0_21__pxrReserved____PcpNodeRef_GetPermission


/** Get/set whether this node is inert. An inert node never provides
any opinions to a prim index. Such a node may exist purely as a
marker to represent certain composition structure, but should never 
contribute opinions. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetInert(
    pxr_PcpNodeRef_t * this_
    , _Bool inert);
#define pxr_PcpNodeRef_SetInert pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetInert


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsInert(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_);
#define pxr_PcpNodeRef_IsInert pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsInert


/** Get/set whether this node is culled. If a node is culled, it and
all descendant nodes provide no opinions to the index. A culled
node is also considered inert. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetCulled(
    pxr_PcpNodeRef_t * this_
    , _Bool culled);
#define pxr_PcpNodeRef_SetCulled pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetCulled


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsCulled(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_);
#define pxr_PcpNodeRef_IsCulled pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsCulled


/** Get/set whether this node is restricted. A restricted node is a
node that cannot contribute opinions to the index due to permissions. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetRestricted(
    pxr_PcpNodeRef_t * this_
    , _Bool restricted);
#define pxr_PcpNodeRef_SetRestricted pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetRestricted


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsRestricted(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_);
#define pxr_PcpNodeRef_IsRestricted pxrInternal_v0_21__pxrReserved____PcpNodeRef_IsRestricted


/** Returns true if this node is allowed to contribute opinions
for composition, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_CanContributeSpecs(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_);
#define pxr_PcpNodeRef_CanContributeSpecs pxrInternal_v0_21__pxrReserved____PcpNodeRef_CanContributeSpecs


/** Returns true if this node has opinions authored
for composition, false otherwise. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetHasSpecs(
    pxr_PcpNodeRef_t * this_
    , _Bool hasSpecs);
#define pxr_PcpNodeRef_SetHasSpecs pxrInternal_v0_21__pxrReserved____PcpNodeRef_SetHasSpecs


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_HasSpecs(
    pxr_PcpNodeRef_t const * this_
    , _Bool * return_);
#define pxr_PcpNodeRef_HasSpecs pxrInternal_v0_21__pxrReserved____PcpNodeRef_HasSpecs


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_copy(
    pxr_PcpNodeRef_t * * this_
    , pxr_PcpNodeRef_t const * rhs);
#define pxr_PcpNodeRef_copy pxrInternal_v0_21__pxrReserved____PcpNodeRef_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_dtor(
    pxr_PcpNodeRef_t * this_);
#define pxr_PcpNodeRef_dtor pxrInternal_v0_21__pxrReserved____PcpNodeRef_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef__assign(
    pxr_PcpNodeRef_t * this_
    , pxr_PcpNodeRef_t * * return_
    , pxr_PcpNodeRef_t const * rhs);
#define pxr_PcpNodeRef__assign pxrInternal_v0_21__pxrReserved____PcpNodeRef__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef__Hash__op_call(
    pxr_PcpNodeRef_Hash_t const * this_
    , size_t * return_
    , pxr_PcpNodeRef_t const * rhs);
#define pxr_PcpNodeRef_Hash__op_call pxrInternal_v0_21__pxrReserved____PcpNodeRef__Hash__op_call


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator__op_inc(
    pxr_PcpNodeRef_ChildrenIterator_t * this_
    , pxr_PcpNodeRef_ChildrenIterator_t * * return_);
#define pxr_PcpNodeRef_ChildrenIterator__op_inc pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator__op_inc


/** Constructs an invalid iterator. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_ctor(
    pxr_PcpNodeRef_ChildrenIterator_t * * this_);
#define pxr_PcpNodeRef_ChildrenIterator_ctor pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_ctor


/** Constructs an iterator pointing to \p node. Passing a NULL value
for \p node constructs an end iterator. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_ctor_1(
    pxr_PcpNodeRef_ChildrenIterator_t * * this_
    , pxr_PcpNodeRef_t const * node
    , _Bool end);
#define pxr_PcpNodeRef_ChildrenIterator_ctor_1 pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator__assign(
    pxr_PcpNodeRef_ChildrenIterator_t * this_
    , pxr_PcpNodeRef_ChildrenIterator_t * * return_
    , pxr_PcpNodeRef_ChildrenIterator_t const * rhs);
#define pxr_PcpNodeRef_ChildrenIterator__assign pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator__assign


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_dtor(
    pxr_PcpNodeRef_ChildrenIterator_t * this_);
#define pxr_PcpNodeRef_ChildrenIterator_dtor pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_copy(
    pxr_PcpNodeRef_ChildrenIterator_t * * this_
    , pxr_PcpNodeRef_ChildrenIterator_t const * rhs);
#define pxr_PcpNodeRef_ChildrenIterator_copy pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenIterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator__op_inc(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * this_
    , pxr_PcpNodeRef_ChildrenReverseIterator_t * * return_);
#define pxr_PcpNodeRef_ChildrenReverseIterator__op_inc pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator__op_inc


/** Constructs an invalid iterator. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * this_);
#define pxr_PcpNodeRef_ChildrenReverseIterator_ctor pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor


/** Constructs a reverse iterator from a forward iterator. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor_1(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * this_
    , pxr_PcpNodeRef_ChildrenIterator_t const * rhs);
#define pxr_PcpNodeRef_ChildrenReverseIterator_ctor_1 pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor_1


/** Constructs an iterator pointing to \p node. Passing a NULL value
for \p node constructs an end iterator. */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor_2(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * this_
    , pxr_PcpNodeRef_t const * node
    , _Bool end);
#define pxr_PcpNodeRef_ChildrenReverseIterator_ctor_2 pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_ctor_2


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_copy(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * * this_
    , pxr_PcpNodeRef_ChildrenReverseIterator_t const * rhs);
#define pxr_PcpNodeRef_ChildrenReverseIterator_copy pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_copy


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_dtor(
    pxr_PcpNodeRef_ChildrenReverseIterator_t * this_);
#define pxr_PcpNodeRef_ChildrenReverseIterator_dtor pxrInternal_v0_21__pxrReserved____PcpNodeRef_ChildrenReverseIterator_dtor


/** Typedefs and support functions */
USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___hash_value(
    size_t * return_
    , pxr_PcpNodeRef_t const * x);
#define pxr_hash_value pxrInternal_v0_21__pxrReserved___hash_value


USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpNode_GetNonVariantPathElementCount(
    int * return_
    , pxr_SdfPath_t const * path);
#define pxr_PcpNode_GetNonVariantPathElementCount pxrInternal_v0_21__pxrReserved___PcpNode_GetNonVariantPathElementCount


#ifdef __cplusplus
}
#endif
