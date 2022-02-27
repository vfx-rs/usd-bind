#include <pxr/usd/sdf/declareHandles.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

using Sdf_IdentityRefPtr = pxr::Sdf_IdentityRefPtr;

/// \class SdfHandle
/// 
/// SdfHandle is a smart ptr that calls IsDormant() on the pointed-to
/// object as an extra expiration check so that dormant objects appear to
/// be expired.
template <class T>
struct SdfHandle {
    using BoundType = pxr::SdfHandle<T>;
    using SpecType = typename pxr::SdfHandle<T>::SpecType;
    using This = typename pxr::SdfHandle<T>::This;

    SdfHandle();

    SdfHandle(pxr::TfNullPtrType empty);

    SdfHandle(const pxr::Sdf_IdentityRefPtr& id);

    SdfHandle(const SpecType& spec);

    template <typename U>
    SdfHandle(const pxr::SdfHandle<U>& x);

    This& operator=(const This& x);

    template <typename U>
    This& operator=(const BoundType& x);

    /// Dereference.  Raises a fatal error if the object is invalid or
    /// dormant.
    SpecType* operator->() const CPPMM_RENAME(deref);

    const SpecType& GetSpec() const;

    void Reset();

#if 0
    /// Returns *true* in a boolean context if the object is valid,
    /// *false* otherwise.
    operator type-parameter-0-0 SdfHandle<T>::*() const;
#endif

    /// Returns *false* in a boolean context if the object is valid,
    /// *true* otherwise.
    bool operator!() const CPPMM_RENAME(not_valid);

#if 0
    template <typename U>
    bool operator==(const BoundType& other) const;

    template <typename U>
    bool operator<(const BoundType& other) const;
#endif

} CPPMM_OPAQUEPTR; // struct SdfHandle

// TODO: fill in explicit instantiations, e.g.:
// template class SdfHandle<int>;
// using SdfHandleInt = pxr::SdfHandle<int>;


template <class T>
struct SdfHandleTo {
    using BoundType = pxr::SdfHandleTo<T>;

} CPPMM_OPAQUEPTR; // struct SdfHandleTo


// TODO: fill in explicit instantiations, e.g.:
// template class SdfHandleTo<int>;
// using SdfHandleToInt = pxr::SdfHandleTo<int>;


template <typename T>
pxr::SdfHandle<T> SdfCreateHandle(typename pxr::SdfHandle<T>::SpecType* p);


typename pxr::SdfHandleTo<pxr::SdfLayer>::Handle SdfCreateHandle(pxr::SdfLayer* p);


template <typename T>
pxr::SdfHandle<T> SdfCreateNonConstHandle(const T* p);


struct Sdf_CastAccess {
    using BoundType = pxr::Sdf_CastAccess;

    template <typename DST, typename SRC>
    static DST CastSpec(const SRC& spec);

} CPPMM_OPAQUEPTR; // struct Sdf_CastAccess


bool Sdf_CanCastToType(const pxr::SdfSpec& srcSpec, const std::type_info& destType);


bool Sdf_CanCastToTypeCheckSchema(const pxr::SdfSpec& srcSpec, const std::type_info& destType);


template <class DST, class SRC>
struct Sdf_SpecTypesAreDirectlyRelated {
    using BoundType = pxr::Sdf_SpecTypesAreDirectlyRelated<DST, SRC>;

} CPPMM_OPAQUEPTR; // struct Sdf_SpecTypesAreDirectlyRelated

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_SpecTypesAreDirectlyRelated<int, int>;
// using Sdf_SpecTypesAreDirectlyRelatedInt = pxr::Sdf_SpecTypesAreDirectlyRelated<int, int>;


/// Convert SdfHandle<SRC> *x* to an SdfHandle<DST>. This function
/// behaves similar to a dynamic_cast. If class DST cannot represent 
/// the spec pointed to be *x*, or if the classes DST and SRC are 
/// not directly related to each other in the C++ type hierarchy, 
/// the conversion fails and an invalid handle is returned.
/// 
/// XXX: The second condition in the above statement is currently untrue.
///      This function will allow casting between spec classes even if
///      they are not directly related. Doing so could lead to schema
///      mismatches and other buggy behavior. 
template <typename DST, typename SRC>
pxr::SdfHandle<DST> TfDynamic_cast(const pxr::SdfHandle<SRC>& x);


template <typename DST, typename SRC>
pxr::SdfHandle<DST> TfSafeDynamic_cast(const pxr::SdfHandle<SRC>& x);


/// Convert SdfHandle<SRC> *x* to an SdfHandle<DST>. This function
/// behaves similar to a static_cast. No runtime checks are performed
/// to ensure the conversion is valid; it is up to the consumer to
/// ensure this.
template <typename DST, typename SRC>
pxr::SdfHandle<DST> TfStatic_cast(const pxr::SdfHandle<SRC>& x);


template <typename T>
pxr::SdfHandle<T> TfConst_cast(const pxr::SdfHandle<T>& x);


/// Convert SdfHandle<SRC> *x* to an SdfHandle<DST>. This function is
/// similar to TfDynamic_cast, but it allows the SRC and DST spec to be
/// indirectly related, so long as the schema associated with the DST
/// spec type is a subclass of the schema associated with *x*.
template <typename DST, typename SRC>
pxr::SdfHandle<DST> SdfSpecDynamic_cast(const pxr::SdfHandle<SRC>& x);


/// Convert SdfHandle<SRC> *x* to an SdfHandle<DST>. This function is
/// similar to TfStatic_cast, but it allows the SRC and DST spec to be
/// indirectly related.
template <typename DST, typename SRC>
pxr::SdfHandle<DST> SdfSpecStatic_cast(const pxr::SdfHandle<SRC>& x);


#if 0
/// Convert SRC_SPEC to a DST_SPEC.
template <typename DST_SPEC, typename SRC_SPEC>
DST_SPEC SdfSpecStatic_cast(const SRC& x);


using SdfLayerRefPtr = pxr::SdfLayerRefPtr;

using SdfLayerRefPtrVector = pxr::SdfLayerRefPtrVector;

using SdfLayerHandleSet = pxr::SdfLayerHandleSet;
#endif

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::SdfHandle<int>;
// template class pxr::SdfHandleTo<int>;
// template class pxr::Sdf_SpecTypesAreDirectlyRelated<int, int>;
