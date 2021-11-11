#pragma once
#include "usd-api-export.h"

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct pxrInternal_v0_20__pxrReserved____UsdPrim_t_s pxrInternal_v0_20__pxrReserved____UsdPrim_t;
typedef pxrInternal_v0_20__pxrReserved____UsdPrim_t pxr_UsdPrim_t;

enum pxrInternal_v0_20__pxrReserved____Usd_PrimFlags_e {
    pxr_Usd_PrimFlags_Usd_PrimActiveFlag = 0,
    pxr_Usd_PrimFlags_Usd_PrimLoadedFlag = 1,
    pxr_Usd_PrimFlags_Usd_PrimModelFlag = 2,
    pxr_Usd_PrimFlags_Usd_PrimGroupFlag = 3,
    pxr_Usd_PrimFlags_Usd_PrimAbstractFlag = 4,
    pxr_Usd_PrimFlags_Usd_PrimDefinedFlag = 5,
    pxr_Usd_PrimFlags_Usd_PrimHasDefiningSpecifierFlag = 6,
    pxr_Usd_PrimFlags_Usd_PrimInstanceFlag = 7,
    pxr_Usd_PrimFlags_Usd_PrimHasPayloadFlag = 8,
    pxr_Usd_PrimFlags_Usd_PrimClipsFlag = 9,
    pxr_Usd_PrimFlags_Usd_PrimDeadFlag = 10,
    pxr_Usd_PrimFlags_Usd_PrimMasterFlag = 11,
    pxr_Usd_PrimFlags_Usd_PrimInstanceProxyFlag = 12,
    pxr_Usd_PrimFlags_Usd_PrimNumFlags = 13,
};
typedef unsigned int pxr_Usd_PrimFlags;

typedef struct pxrInternal_v0_20__pxrReserved____Usd_Term_t_s {
    pxr_Usd_PrimFlags flag;
    _Bool negated;
} USD_CPPMM_ALIGN(4) pxrInternal_v0_20__pxrReserved____Usd_Term_t;
typedef pxrInternal_v0_20__pxrReserved____Usd_Term_t pxr_Usd_Term_t;

typedef struct pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_t_s {
    char data[%SIZEpxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsPredicate%) pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_t;
typedef pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_t pxr_Usd_PrimFlagsPredicate_t;

/** Conjunction of prim flag predicate terms.

Usually clients will implicitly create conjunctions by &&-ing together flag
predicate terms.  For example:
\code
// Get all loaded model children.
prim.GetFilteredChildren(UsdPrimIsModel && UsdPrimIsLoaded)
\endcode

See primFlags.h for more details. */
typedef struct pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_t_s {
    char data[%SIZEpxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsConjunction%) pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_t;
typedef pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_t pxr_Usd_PrimFlagsConjunction_t;

/** Disjunction of prim flag predicate terms.

Usually clients will implicitly create disjunctions by ||-ing together flag
predicate terms.  For example:
\code
// Get all deactivated or undefined children.
prim.GetFilteredChildren(!UsdPrimIsActive || !UsdPrimIsDefined)
\endcode

See primFlags.h for more details. */
typedef struct pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_t_s {
    char data[%SIZEpxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction%];
} USD_CPPMM_ALIGN(%ALIGNpxrInternal_v0_20__pxrReserved__::Usd_PrimFlagsDisjunction%) pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_t;
typedef pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_t pxr_Usd_PrimFlagsDisjunction_t;


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_Term_ctor(
    pxr_Usd_Term_t * this_
    , pxr_Usd_PrimFlags flag);
#define pxr_Usd_Term_ctor pxrInternal_v0_20__pxrReserved____Usd_Term_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_Term_ctor_1(
    pxr_Usd_Term_t * this_
    , pxr_Usd_PrimFlags flag
    , _Bool negated);
#define pxr_Usd_Term_ctor_1 pxrInternal_v0_20__pxrReserved____Usd_Term_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_Term_op_neg(
    pxr_Usd_Term_t const * this_
    , pxr_Usd_Term_t * return_);
#define pxr_Usd_Term_op_neg pxrInternal_v0_20__pxrReserved____Usd_Term_op_neg


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_Term__eq(
    pxr_Usd_Term_t const * this_
    , _Bool * return_
    , pxr_Usd_Term_t other);
#define pxr_Usd_Term__eq pxrInternal_v0_20__pxrReserved____Usd_Term__eq


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_Term__ne(
    pxr_Usd_Term_t const * this_
    , _Bool * return_
    , pxr_Usd_Term_t other);
#define pxr_Usd_Term__ne pxrInternal_v0_20__pxrReserved____Usd_Term__ne


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_Term_copy(
    pxr_Usd_Term_t * this_
    , pxr_Usd_Term_t const * rhs);
#define pxr_Usd_Term_copy pxrInternal_v0_20__pxrReserved____Usd_Term_copy


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_Term_dtor(
    pxr_Usd_Term_t * this_);
#define pxr_Usd_Term_dtor pxrInternal_v0_20__pxrReserved____Usd_Term_dtor


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_sizeof();
#define pxr_Usd_PrimFlagsPredicate_sizeof pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_alignof();
#define pxr_Usd_PrimFlagsPredicate_alignof pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_alignof


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor(
    pxr_Usd_PrimFlagsPredicate_t * this_);
#define pxr_Usd_PrimFlagsPredicate_ctor pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor_1(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_PrimFlags flag);
#define pxr_Usd_PrimFlagsPredicate_ctor_1 pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor_1


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor_2(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_Term_t term);
#define pxr_Usd_PrimFlagsPredicate_ctor_2 pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_ctor_2


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_Tautology(
    pxr_Usd_PrimFlagsPredicate_t * return_);
#define pxr_Usd_PrimFlagsPredicate_Tautology pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_Tautology


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_Contradiction(
    pxr_Usd_PrimFlagsPredicate_t * return_);
#define pxr_Usd_PrimFlagsPredicate_Contradiction pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_Contradiction


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_TraverseInstanceProxies(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_PrimFlagsPredicate_t * * return_
    , _Bool traverse);
#define pxr_Usd_PrimFlagsPredicate_TraverseInstanceProxies pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_TraverseInstanceProxies


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_IncludeInstanceProxiesInTraversal(
    pxr_Usd_PrimFlagsPredicate_t const * this_
    , _Bool * return_);
#define pxr_Usd_PrimFlagsPredicate_IncludeInstanceProxiesInTraversal pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_IncludeInstanceProxiesInTraversal


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_func(
    pxr_Usd_PrimFlagsPredicate_t const * this_
    , _Bool * return_
    , pxr_UsdPrim_t const * prim);
#define pxr_Usd_PrimFlagsPredicate_func pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_func


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_copy(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_PrimFlagsPredicate_t const * rhs);
#define pxr_Usd_PrimFlagsPredicate_copy pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_copy


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_dtor(
    pxr_Usd_PrimFlagsPredicate_t * this_);
#define pxr_Usd_PrimFlagsPredicate_dtor pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate__assign(
    pxr_Usd_PrimFlagsPredicate_t * this_
    , pxr_Usd_PrimFlagsPredicate_t * * return_
    , pxr_Usd_PrimFlagsPredicate_t const * rhs);
#define pxr_Usd_PrimFlagsPredicate__assign pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsPredicate__assign


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_sizeof();
#define pxr_Usd_PrimFlagsConjunction_sizeof pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_alignof();
#define pxr_Usd_PrimFlagsConjunction_alignof pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_alignof


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_Tautology(
    pxr_Usd_PrimFlagsPredicate_t * return_);
#define pxr_Usd_PrimFlagsConjunction_Tautology pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_Tautology


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_Contradiction(
    pxr_Usd_PrimFlagsPredicate_t * return_);
#define pxr_Usd_PrimFlagsConjunction_Contradiction pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_Contradiction


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_TraverseInstanceProxies(
    pxr_Usd_PrimFlagsConjunction_t * this_
    , pxr_Usd_PrimFlagsPredicate_t * * return_
    , _Bool traverse);
#define pxr_Usd_PrimFlagsConjunction_TraverseInstanceProxies pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_TraverseInstanceProxies


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_IncludeInstanceProxiesInTraversal(
    pxr_Usd_PrimFlagsConjunction_t const * this_
    , _Bool * return_);
#define pxr_Usd_PrimFlagsConjunction_IncludeInstanceProxiesInTraversal pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_IncludeInstanceProxiesInTraversal


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_func(
    pxr_Usd_PrimFlagsConjunction_t const * this_
    , _Bool * return_
    , pxr_UsdPrim_t const * prim);
#define pxr_Usd_PrimFlagsConjunction_func pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_func


/** Default constructed conjunction is a tautology. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_ctor(
    pxr_Usd_PrimFlagsConjunction_t * this_);
#define pxr_Usd_PrimFlagsConjunction_ctor pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_ctor


/** Construct with a term. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_ctor_1(
    pxr_Usd_PrimFlagsConjunction_t * this_
    , pxr_Usd_Term_t term);
#define pxr_Usd_PrimFlagsConjunction_ctor_1 pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_ctor_1


/** Add an additional term to this conjunction. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_op_bit_and_assign(
    pxr_Usd_PrimFlagsConjunction_t * this_
    , pxr_Usd_PrimFlagsConjunction_t * * return_
    , pxr_Usd_Term_t term);
#define pxr_Usd_PrimFlagsConjunction_op_bit_and_assign pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_op_bit_and_assign


/** Negate this conjunction, producing a disjunction by De Morgan's law.
For instance:

\code
!(UsdPrimIsLoaded && UsdPrimIsModel)
\endcode

Will negate the conjunction in parens to produce a disjunction
equivalent to:

\code
(!UsdPrimIsLoaded || !UsdPrimIsModel)
\endcode

Every expression may be formulated as either a disjunction or a
conjuction, but allowing both affords increased expressiveness. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_op_neg(
    pxr_Usd_PrimFlagsConjunction_t const * this_
    , pxr_Usd_PrimFlagsDisjunction_t * return_);
#define pxr_Usd_PrimFlagsConjunction_op_neg pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_op_neg


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_copy(
    pxr_Usd_PrimFlagsConjunction_t * this_
    , pxr_Usd_PrimFlagsConjunction_t const * rhs);
#define pxr_Usd_PrimFlagsConjunction_copy pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_copy


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_dtor(
    pxr_Usd_PrimFlagsConjunction_t * this_);
#define pxr_Usd_PrimFlagsConjunction_dtor pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsConjunction_dtor


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_sizeof();
#define pxr_Usd_PrimFlagsDisjunction_sizeof pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_sizeof


/** returns the size of this type in bytes */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_alignof();
#define pxr_Usd_PrimFlagsDisjunction_alignof pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_alignof


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_Tautology(
    pxr_Usd_PrimFlagsPredicate_t * return_);
#define pxr_Usd_PrimFlagsDisjunction_Tautology pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_Tautology


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_Contradiction(
    pxr_Usd_PrimFlagsPredicate_t * return_);
#define pxr_Usd_PrimFlagsDisjunction_Contradiction pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_Contradiction


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_TraverseInstanceProxies(
    pxr_Usd_PrimFlagsDisjunction_t * this_
    , pxr_Usd_PrimFlagsPredicate_t * * return_
    , _Bool traverse);
#define pxr_Usd_PrimFlagsDisjunction_TraverseInstanceProxies pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_TraverseInstanceProxies


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_IncludeInstanceProxiesInTraversal(
    pxr_Usd_PrimFlagsDisjunction_t const * this_
    , _Bool * return_);
#define pxr_Usd_PrimFlagsDisjunction_IncludeInstanceProxiesInTraversal pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_IncludeInstanceProxiesInTraversal


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_func(
    pxr_Usd_PrimFlagsDisjunction_t const * this_
    , _Bool * return_
    , pxr_UsdPrim_t const * prim);
#define pxr_Usd_PrimFlagsDisjunction_func pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_func


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_ctor(
    pxr_Usd_PrimFlagsDisjunction_t * this_);
#define pxr_Usd_PrimFlagsDisjunction_ctor pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_ctor


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_ctor_1(
    pxr_Usd_PrimFlagsDisjunction_t * this_
    , pxr_Usd_Term_t term);
#define pxr_Usd_PrimFlagsDisjunction_ctor_1 pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_ctor_1


/** Add an additional term to this disjunction. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_op_bit_or_assign(
    pxr_Usd_PrimFlagsDisjunction_t * this_
    , pxr_Usd_PrimFlagsDisjunction_t * * return_
    , pxr_Usd_Term_t term);
#define pxr_Usd_PrimFlagsDisjunction_op_bit_or_assign pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_op_bit_or_assign


/** Negate this disjunction, producing a disjunction by De Morgan's law.
For instance:

\code
!(UsdPrimIsLoaded || UsdPrimIsModel)
\endcode

Will negate the disjunction in parens to produce a conjunction
equivalent to:

\code
(!UsdPrimIsLoaded && !UsdPrimIsModel)
\endcode

Every expression may be formulated as either a disjunction or a
conjuction, but allowing both affords increased expressiveness. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_op_neg(
    pxr_Usd_PrimFlagsDisjunction_t const * this_
    , pxr_Usd_PrimFlagsConjunction_t * return_);
#define pxr_Usd_PrimFlagsDisjunction_op_neg pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_op_neg


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_copy(
    pxr_Usd_PrimFlagsDisjunction_t * this_
    , pxr_Usd_PrimFlagsDisjunction_t const * rhs);
#define pxr_Usd_PrimFlagsDisjunction_copy pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_copy


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_dtor(
    pxr_Usd_PrimFlagsDisjunction_t * this_);
#define pxr_Usd_PrimFlagsDisjunction_dtor pxrInternal_v0_20__pxrReserved____Usd_PrimFlagsDisjunction_dtor


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_neg(
    pxr_Usd_Term_t * return_
    , pxr_Usd_PrimFlags flag);
#define pxr_op_neg pxrInternal_v0_20__pxrReserved___op_neg


/** Combine two terms to make a conjunction. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_and(
    pxr_Usd_PrimFlagsConjunction_t * return_
    , pxr_Usd_Term_t lhs
    , pxr_Usd_Term_t rhs);
#define pxr_op_and pxrInternal_v0_20__pxrReserved___op_and


/** Create a new conjunction with the term \p rhs added. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_and_1(
    pxr_Usd_PrimFlagsConjunction_t * return_
    , pxr_Usd_PrimFlagsConjunction_t const * conjunction
    , pxr_Usd_Term_t rhs);
#define pxr_op_and_1 pxrInternal_v0_20__pxrReserved___op_and_1


/** Create a new conjunction with the term \p lhs added. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_and_2(
    pxr_Usd_PrimFlagsConjunction_t * return_
    , pxr_Usd_Term_t lhs
    , pxr_Usd_PrimFlagsConjunction_t const * conjunction);
#define pxr_op_and_2 pxrInternal_v0_20__pxrReserved___op_and_2


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_and_3(
    pxr_Usd_PrimFlagsConjunction_t * return_
    , pxr_Usd_PrimFlags lhs
    , pxr_Usd_PrimFlags rhs);
#define pxr_op_and_3 pxrInternal_v0_20__pxrReserved___op_and_3


/** Combine two terms to make a disjunction. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_or(
    pxr_Usd_PrimFlagsDisjunction_t * return_
    , pxr_Usd_Term_t lhs
    , pxr_Usd_Term_t rhs);
#define pxr_op_or pxrInternal_v0_20__pxrReserved___op_or


/** Create a new disjunction with the term \p rhs added. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_or_1(
    pxr_Usd_PrimFlagsDisjunction_t * return_
    , pxr_Usd_PrimFlagsDisjunction_t const * disjunction
    , pxr_Usd_Term_t rhs);
#define pxr_op_or_1 pxrInternal_v0_20__pxrReserved___op_or_1


/** Create a new disjunction with the term \p lhs added. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_or_2(
    pxr_Usd_PrimFlagsDisjunction_t * return_
    , pxr_Usd_Term_t lhs
    , pxr_Usd_PrimFlagsDisjunction_t const * disjunction);
#define pxr_op_or_2 pxrInternal_v0_20__pxrReserved___op_or_2


USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___op_or_3(
    pxr_Usd_PrimFlagsDisjunction_t * return_
    , pxr_Usd_PrimFlags lhs
    , pxr_Usd_PrimFlags rhs);
#define pxr_op_or_3 pxrInternal_v0_20__pxrReserved___op_or_3


/** This function is used to allow the prim traversal functions listed under
\ref Usd_PrimFlags "Prim predicate flags" to traverse beneath instance
prims and return descendants that pass the specified \p predicate
as instance proxy prims.  For example:

\code
// Return all children of the specified prim.  
// If prim is an instance, return all children as instance proxy prims.
prim.GetFilteredChildren(
    UsdTraverseInstanceProxies(UsdPrimAllPrimsPredicate))

// Return children of the specified prim that pass the default predicate.
// If prim is an instance, return the children that pass this predicate
// as instance proxy prims.
prim.GetFilteredChildren(UsdTraverseInstanceProxies());

// Return all model or group children of the specified prim.
// If prim is an instance, return the children that pass this predicate 
// as instance proxy prims.
prim.GetFilteredChildren(UsdTraverseInstanceProxies(UsdPrimIsModel || UsdPrimIsGroup));
\endcode

Users may also call Usd_PrimFlagsPredicate::TraverseInstanceProxies to
enable traversal beneath instance prims.  This function is equivalent to:
\code
predicate.TraverseInstanceProxies(true);
\endcode

However, this function may be more convenient, especially when calling
a prim traversal function with a default-constructed tautology predicate. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___UsdTraverseInstanceProxies(
    pxr_Usd_PrimFlagsPredicate_t * return_
    , pxr_Usd_PrimFlagsPredicate_t predicate);
#define pxr_UsdTraverseInstanceProxies pxrInternal_v0_20__pxrReserved___UsdTraverseInstanceProxies


/** \overload
Convenience method equivalent to calling UsdTraverseInstanceProxies
with the UsdPrimDefaultPredicate that is used by default for prim 
traversals. */
USD_CPPMM_API unsigned int pxrInternal_v0_20__pxrReserved___UsdTraverseInstanceProxies_1(
    pxr_Usd_PrimFlagsPredicate_t * return_);
#define pxr_UsdTraverseInstanceProxies_1 pxrInternal_v0_20__pxrReserved___UsdTraverseInstanceProxies_1


#ifdef __cplusplus
}
#endif
