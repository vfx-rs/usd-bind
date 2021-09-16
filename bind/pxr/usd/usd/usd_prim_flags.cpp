#include <pxr/usd/usd/primFlags.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

enum Usd_PrimFlags {
    Usd_PrimActiveFlag = 0,
    Usd_PrimLoadedFlag = 1,
    Usd_PrimModelFlag = 2,
    Usd_PrimGroupFlag = 3,
    Usd_PrimAbstractFlag = 4,
    Usd_PrimDefinedFlag = 5,
    Usd_PrimHasDefiningSpecifierFlag = 6,
    Usd_PrimInstanceFlag = 7,
    Usd_PrimHasPayloadFlag = 8,
    Usd_PrimClipsFlag = 9,
    Usd_PrimDeadFlag = 10,
    Usd_PrimMasterFlag = 11,
    Usd_PrimInstanceProxyFlag = 12,
    Usd_PrimNumFlags = 13,
} CPPMM_RUSTIFY_ENUM CPPMM_ENUM_PREFIX(Usd_) CPPMM_ENUM_SUFFIX(Flag);

/*
using Usd_PrimFlagBits = pxr::Usd_PrimFlagBits;
*/

struct Usd_Term {
    using BoundType = pxr::Usd_Term;

    Usd_Term(pxr::Usd_PrimFlags flag);

    Usd_Term(pxr::Usd_PrimFlags flag, bool negated);

    pxr::Usd_Term operator!() const CPPMM_RENAME(op_neg);

    bool operator==(pxr::Usd_Term other) const;

    bool operator!=(pxr::Usd_Term other) const;

    Usd_Term(const pxr::Usd_Term& );

    Usd_Term(pxr::Usd_Term&& ) CPPMM_IGNORE;

    ~Usd_Term();

} CPPMM_VALUETYPE; // struct Usd_Term


pxr::Usd_Term operator!(pxr::Usd_PrimFlags flag) CPPMM_RENAME(op_neg);


struct Usd_PrimFlagsPredicate {
    using BoundType = pxr::Usd_PrimFlagsPredicate;

    Usd_PrimFlagsPredicate();

    Usd_PrimFlagsPredicate(pxr::Usd_PrimFlags flag);

    Usd_PrimFlagsPredicate(pxr::Usd_Term term);

    static pxr::Usd_PrimFlagsPredicate Tautology();

    static pxr::Usd_PrimFlagsPredicate Contradiction();

    pxr::Usd_PrimFlagsPredicate& TraverseInstanceProxies(bool traverse);

    bool IncludeInstanceProxiesInTraversal() const;

    bool operator()(const pxr::UsdPrim& prim) const CPPMM_RENAME(func);

    Usd_PrimFlagsPredicate(const pxr::Usd_PrimFlagsPredicate& );

    Usd_PrimFlagsPredicate(pxr::Usd_PrimFlagsPredicate&& ) CPPMM_IGNORE;

    ~Usd_PrimFlagsPredicate();

    pxr::Usd_PrimFlagsPredicate& operator=(const pxr::Usd_PrimFlagsPredicate& );

    pxr::Usd_PrimFlagsPredicate& operator=(pxr::Usd_PrimFlagsPredicate&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEBYTES; // struct Usd_PrimFlagsPredicate


/// Conjunction of prim flag predicate terms.
/// 
/// Usually clients will implicitly create conjunctions by &&-ing together flag
/// predicate terms.  For example:
/// ```
/// // Get all loaded model children.
/// prim.GetFilteredChildren(UsdPrimIsModel && UsdPrimIsLoaded)
/// ```
/// 
/// See primFlags.h for more details.
struct Usd_PrimFlagsConjunction {
    using BoundType = pxr::Usd_PrimFlagsConjunction;

    static pxr::Usd_PrimFlagsPredicate Tautology();

    static pxr::Usd_PrimFlagsPredicate Contradiction();

    pxr::Usd_PrimFlagsPredicate& TraverseInstanceProxies(bool traverse);

    bool IncludeInstanceProxiesInTraversal() const;

    bool operator()(const pxr::UsdPrim& prim) const CPPMM_RENAME(func);

    /// Default constructed conjunction is a tautology.
    Usd_PrimFlagsConjunction();

    /// Construct with a term.
    Usd_PrimFlagsConjunction(pxr::Usd_Term term);

    /// Add an additional term to this conjunction.
    pxr::Usd_PrimFlagsConjunction& operator&=(pxr::Usd_Term term) CPPMM_RENAME(op_bit_and_assign);

    /// Negate this conjunction, producing a disjunction by De Morgan's law.
    /// For instance:
    /// 
    /// ```
    /// !(UsdPrimIsLoaded && UsdPrimIsModel)
    /// ```
    /// 
    /// Will negate the conjunction in parens to produce a disjunction
    /// equivalent to:
    /// 
    /// ```
    /// (!UsdPrimIsLoaded || !UsdPrimIsModel)
    /// ```
    /// 
    /// Every expression may be formulated as either a disjunction or a
    /// conjuction, but allowing both affords increased expressiveness.
    pxr::Usd_PrimFlagsDisjunction operator!() const CPPMM_RENAME(op_neg);

    Usd_PrimFlagsConjunction(const pxr::Usd_PrimFlagsConjunction& );

    Usd_PrimFlagsConjunction(pxr::Usd_PrimFlagsConjunction&& ) CPPMM_IGNORE;

    ~Usd_PrimFlagsConjunction();

} CPPMM_OPAQUEBYTES; // struct Usd_PrimFlagsConjunction


/// Disjunction of prim flag predicate terms.
/// 
/// Usually clients will implicitly create disjunctions by ||-ing together flag
/// predicate terms.  For example:
/// ```
/// // Get all deactivated or undefined children.
/// prim.GetFilteredChildren(!UsdPrimIsActive || !UsdPrimIsDefined)
/// ```
/// 
/// See primFlags.h for more details.
struct Usd_PrimFlagsDisjunction {
    using BoundType = pxr::Usd_PrimFlagsDisjunction;

    static pxr::Usd_PrimFlagsPredicate Tautology();

    static pxr::Usd_PrimFlagsPredicate Contradiction();

    pxr::Usd_PrimFlagsPredicate& TraverseInstanceProxies(bool traverse);

    bool IncludeInstanceProxiesInTraversal() const;

    bool operator()(const pxr::UsdPrim& prim) const CPPMM_RENAME(func);

    Usd_PrimFlagsDisjunction();

    Usd_PrimFlagsDisjunction(pxr::Usd_Term term);

    /// Add an additional term to this disjunction.
    pxr::Usd_PrimFlagsDisjunction& operator|=(pxr::Usd_Term term) CPPMM_RENAME(op_bit_or_assign);

    /// Negate this disjunction, producing a disjunction by De Morgan's law.
    /// For instance:
    /// 
    /// ```
    /// !(UsdPrimIsLoaded || UsdPrimIsModel)
    /// ```
    /// 
    /// Will negate the disjunction in parens to produce a conjunction
    /// equivalent to:
    /// 
    /// ```
    /// (!UsdPrimIsLoaded && !UsdPrimIsModel)
    /// ```
    /// 
    /// Every expression may be formulated as either a disjunction or a
    /// conjuction, but allowing both affords increased expressiveness.
    pxr::Usd_PrimFlagsConjunction operator!() const CPPMM_RENAME(op_neg);

    Usd_PrimFlagsDisjunction(const pxr::Usd_PrimFlagsDisjunction& );

    Usd_PrimFlagsDisjunction(pxr::Usd_PrimFlagsDisjunction&& ) CPPMM_IGNORE;

    ~Usd_PrimFlagsDisjunction();

} CPPMM_OPAQUEBYTES; // struct Usd_PrimFlagsDisjunction


pxr::Usd_PrimFlagsConjunction operator&&(pxr::Usd_Term lhs, pxr::Usd_Term rhs) CPPMM_RENAME(op_and);


pxr::Usd_PrimFlagsConjunction operator&&(const pxr::Usd_PrimFlagsConjunction& conjunction, pxr::Usd_Term rhs) CPPMM_RENAME(op_and);


pxr::Usd_PrimFlagsConjunction operator&&(pxr::Usd_Term lhs, const pxr::Usd_PrimFlagsConjunction& conjunction) CPPMM_RENAME(op_and);


pxr::Usd_PrimFlagsConjunction operator&&(pxr::Usd_PrimFlags lhs, pxr::Usd_PrimFlags rhs) CPPMM_RENAME(op_and);


pxr::Usd_PrimFlagsDisjunction operator||(pxr::Usd_Term lhs, pxr::Usd_Term rhs) CPPMM_RENAME(op_or);


pxr::Usd_PrimFlagsDisjunction operator||(const pxr::Usd_PrimFlagsDisjunction& disjunction, pxr::Usd_Term rhs) CPPMM_RENAME(op_or);


pxr::Usd_PrimFlagsDisjunction operator||(pxr::Usd_Term lhs, const pxr::Usd_PrimFlagsDisjunction& disjunction) CPPMM_RENAME(op_or);


pxr::Usd_PrimFlagsDisjunction operator||(pxr::Usd_PrimFlags lhs, pxr::Usd_PrimFlags rhs) CPPMM_RENAME(op_or);


/// This function is used to allow the prim traversal functions listed under
/// \ref Usd_PrimFlags "Prim predicate flags" to traverse beneath instance
/// prims and return descendants that pass the specified \p predicate
/// as instance proxy prims.  For example:
/// 
/// ```
/// // Return all children of the specified prim.  
/// // If prim is an instance, return all children as instance proxy prims.
/// prim.GetFilteredChildren(
///     UsdTraverseInstanceProxies(UsdPrimAllPrimsPredicate))
/// 
/// // Return children of the specified prim that pass the default predicate.
/// // If prim is an instance, return the children that pass this predicate
/// // as instance proxy prims.
/// prim.GetFilteredChildren(UsdTraverseInstanceProxies());
/// 
/// // Return all model or group children of the specified prim.
/// // If prim is an instance, return the children that pass this predicate 
/// // as instance proxy prims.
/// prim.GetFilteredChildren(UsdTraverseInstanceProxies(UsdPrimIsModel || UsdPrimIsGroup));
/// ```
/// 
/// Users may also call Usd_PrimFlagsPredicate::TraverseInstanceProxies to
/// enable traversal beneath instance prims.  This function is equivalent to:
/// ```
/// predicate.TraverseInstanceProxies(true);
/// ```
/// 
/// However, this function may be more convenient, especially when calling
/// a prim traversal function with a default-constructed tautology predicate.
pxr::Usd_PrimFlagsPredicate UsdTraverseInstanceProxies(pxr::Usd_PrimFlagsPredicate predicate);


/// \overload
/// Convenience method equivalent to calling UsdTraverseInstanceProxies
/// with the UsdPrimDefaultPredicate that is used by default for prim 
/// traversals.
pxr::Usd_PrimFlagsPredicate UsdTraverseInstanceProxies();


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
