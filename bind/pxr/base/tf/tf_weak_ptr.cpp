#include <cppmm_bind.hpp>
#include <pxr/base/tf/weakPtr.h>
#include <pxr/usd/sdf/layer.h>
#include <pxr/usd/usd/stage.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class TfWeakPtr
/// \ingroup group_tf_Memory
///
/// Pointer storage with deletion detection.
///
/// <b>Overview</b>
///
/// A *TfWeakPtr* is used to cache a pointer to an object; before
/// retrieving/using this pointer, one queries the *TfWeakPtr* object to
/// verify that the objected pointed to has not been deleted in the interim.
///
/// \include test/weakPtr.cpp
///
/// In the code above, if *PossiblyDeleteLemur*() deletes the object pointed
/// to by *lemur*, then the test *if*(lPtr) returns false.  Otherwise, it is
/// safe to call a method on *lPtr*.
///
/// To declare a *TfWeakPtr*<T>, the type *T* must publicly derive from \c
/// TfWeakBase.
///
/// <b>Basic Use</b>
///
/// A *TfWeakPtr*<T> can access *T*'s public members by the **-> operator
/// and can be dereferenced by the "***" operator.
///
/// A *TfWeakPtr* converts to a *true* bool value (for example, in an *if*
/// statement) only if the pointer points to an unexpired object.  Otherwise,
/// if the pointer was either initialized to NULL, or points to an expired
/// object, the test returns false.
///
/// Occasionally, it is useful to distinguish between a *TfWeakPtr* being
/// explicitly initialized to NULL versus a *TfWeakPtr* whose object has
/// expired: the member function *IsInvalid*() returns *true* only if the
/// pointer points to an expired object.
///
/// <b>Opaqueness</b>
///
/// See the parallel discussion about these concepts in the documentation for
/// *TfRefPtr*; the same concepts apply.
///
/// <b>Comparisons, Const and Non-Const, Inheritance and Casting</b>
///
/// See the parallel discussion about these concepts in the documentation for
/// *TfRefPtr*; the same concepts apply.
///
/// While it is possible to create TfWeakPtrs to const contents, we recommend
/// against it.  TfCreateNonConstWeakPtr will always create a non-const weak
/// pointer even when passed a const argument (it casts away const).
///
/// The recommendation against use of weak pointers to const content is due to
/// the fact that weak pointers cannot be implicitly cast for both inheritance
/// (derived to base) and const-ness (non-const to const) at the same time.
/// Because of this, using weak pointers to const content is most often much
/// more trouble than the benefit it gives.  Therefore our policy is to not
/// use them.
///
/// <b>Pointer Generality</b>
///
/// While *TfWeakPtr*<TfWeakBase> is specifically forbidden (you cannot
/// construct this kind of object), you can assign any *TfWeakPtr*<T> to a \c
/// TfWeakPtr<void> or TfWeakPtr<const void>.  The only thing you can do with
/// the latter is check to see if it points to an object that has expired.
/// You cannot manipulate the object itself (i.e. access its member
/// functions).
///
/// This is useful when you need to watch for object expiration without being
/// bound by the type(s) of the objects you're watching.  Similarly, you can
/// create a TfWeakPtr<void> from a *TfWeakBase* * using \c
/// TfCreateWeakPtr().
///
/// <b>Performance</b>
///
/// Deriving from *TfWeakBase* results in a single *TfRefPtr* variable being
/// added to a class, which is the size of a regular pointer.  The cost of
/// deleting an object derived from *TfWeakBase* is an extra inline boolean
/// comparison, and possible decrement of a reference count if the object's
/// address was ever given out as a *TfWeakPtr*.
///
/// The cost to create a *TfWeakPtr* is as follows: initial creation of the
/// pointer from a *TfWeakBase* object dynamically creates an object called a
/// \e remnant, whose size is that of two pointers. Subsequent transfers of
/// the same object's address to another *TfWeakPtr* merely bump a reference
/// count to the remnant. When all *TfWeakPtrs* to the object (and the object
/// itself) are destroyed, the remnant is deleted.  An object can have a
/// remnant created and destroyed at most once, regardless of how many times
/// its address is given out in the form of a *TfWeakPtr*.
///
/// Summarizing, the cost of guarding an object is a small amount of extra
/// space, and near-zero runtime cost if the guarding is never used.  Even if
/// the guarding is used, the overhead at deletion time is minimal.
///
/// The time to test if a *TfWeakPtr* is NULL, or to call a member function
/// through a *TfWeakPtr* is small, involving only a single inline boolean
/// comparison.
template <class T> struct TfWeakPtr {
    using BoundType = pxr::TfWeakPtr<T>;

    TfWeakPtr();

    ~TfWeakPtr();

    /// Copy construction
    TfWeakPtr(const pxr::TfWeakPtr<T>& p);

    T& operator*() const CPPMM_RENAME(deref);

    TfWeakPtr(const pxr::TfRefPtr<T>& p) CPPMM_RENAME(from_ref) CPPMM_MANUAL;

    /// True if the pointer points to *NULL*.
    bool operator!() const CPPMM_RENAME(is_null);

    /*
    template <typename U>
    void TfWeakPtr<T>(U* p, UNKNOWN* dummy);

    template <typename U>
    void TfWeakPtr<T>(const pxr::TfWeakPtr<T>& p, UNKNOWN* dummy);

    /// Construction, implicit conversion from TfNullPtr.
    TfWeakPtr(pxr::TfNullPtrType );

    /// Construction, implicit conversion from nullptr.
    TfWeakPtr(std::nullptr_t );
    */

    bool IsExpired() const;

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct TfWeakPtr

// TODO: fill in explicit instantiations, e.g.:
// template class TfWeakPtr<int>;
// using TfWeakPtrInt = pxr::TfWeakPtr<int>;

template class TfWeakPtr<pxr::SdfLayer>;
using SdfLayerHandle = pxr::SdfLayerHandle;

template class TfWeakPtr<pxr::UsdStage>;
using UsdStagePtr = pxr::UsdStagePtr;

template <typename U> pxr::TfWeakPtr<U> TfCreateWeakPtr(U* p);

template <typename U> pxr::TfWeakPtr<U> TfCreateNonConstWeakPtr(const U* p);

/*

template <class U>
struct Rebind {
    using BoundType = pxr::Rebind<U>;

} CPPMM_OPAQUEPTR; // struct Rebind

// TODO: fill in explicit instantiations, e.g.:
// template class Rebind<int>;
// using RebindInt = pxr::Rebind<int>;


template <typename U>
pxr::TfWeakPtr<T> TfCreateWeakPtr(U* p);


template <typename U>
pxr::TfWeakPtr<T> TfCreateNonConstWeakPtr(const U* p);


/// Thread-safe creation of a Tf ref pointer from a Tf weak pointer.
///
/// This is thread-safe in the sense that the result will be either a ref
/// pointer to a live object with non-zero ref-count, or a NULL ref pointer.
/// However, this depends on the client to provide a guarantee to protect the
/// pointed-to object.
///
/// Specifically, the caller must guarantee that the TfRefBase part of the
/// pointed-to object is not destroyed during this call. It is fine if the
/// destruction process for the object begins (due to the ref-count going to
/// zero as another thread drops the last ref) as long as the TfRefBase
/// portion is not destroyed. If object destruction begins because the
/// ref-count goes to zero before this call completes, this function will
/// reliably return a NULL ref pointer.
///
/// Note that this is not a general mechanism for safely converting weak
/// pointers to ref pointers, because it relies on the type T to provide the
/// above guarantee.
template <typename T>
TfRefPtr<U> TfCreateRefPtrFromProtectedWeakPtr(const pxr::TfWeakPtr<T>& p);


template <class T>
struct Tf_HasGetWeakBase {
    using BoundType = pxr::Tf_HasGetWeakBase<T>;

} CPPMM_OPAQUEPTR; // struct Tf_HasGetWeakBase

// TODO: fill in explicit instantiations, e.g.:
// template class Tf_HasGetWeakBase<int>;
// using Tf_HasGetWeakBaseInt = pxr::Tf_HasGetWeakBase<int>;


template <class T>
struct Tf_SupportsWeakPtr {
    using BoundType = pxr::Tf_SupportsWeakPtr<T>;

} CPPMM_OPAQUEPTR; // struct Tf_SupportsWeakPtr

// TODO: fill in explicit instantiations, e.g.:
// template class Tf_SupportsWeakPtr<int>;
// using Tf_SupportsWeakPtrInt = pxr::Tf_SupportsWeakPtr<int>;
//
// */

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::TfWeakPtr<int>;

template class pxr::TfWeakPtr<pxr::SdfLayer>;

template class pxr::TfWeakPtr<pxr::UsdStage>;

// template class pxr::Rebind<int>;
// template class pxr::Tf_HasGetWeakBase<int>;
// template class pxr::Tf_SupportsWeakPtr<int>;
