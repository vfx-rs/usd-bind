#include <pxr/base/tf/refPtr.h>
#include <pxr/usd/usd/stage.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class TfRefPtr
/// \ingroup group_tf_Memory
/// 
/// Reference-counted smart pointer utility class
/// 
/// The \c TfRefPtr class implements a reference counting on objects
/// that inherit from \c TfRefBase.
/// 
/// For more information, see either the \ref refPtr_QuickStart "Quick Start"
/// example or read the \ref refPtr_DetailedDiscussion "detailed discussion".
template <class T>
struct TfRefPtr {
    using BoundType = pxr::TfRefPtr<T>;

    /// Initializes \c *this to point at \p p's object.
    /// 
    /// Increments \p p's object's reference count.
    TfRefPtr<T>(const pxr::TfRefPtr<T>& p);

    /// Decrements reference count of object being pointed to.
    /// 
    /// If the reference count of the object (if any) that was just pointed at
    /// reaches zero, the object will typically be destroyed at this point.
    ~TfRefPtr<T>();

    /// Dereferences the stored pointer.
    T& operator*() const CPPMM_RENAME(deref);

    /// True if the pointer points to \c NULL.
    bool operator!() const CPPMM_RENAME(is_null);

/*
    /// Initialize pointer to nullptr.
    /// 
    /// The default constructor leaves the pointer initialized to point to the
    /// NULL object. Attempts to use the \c -> operator will cause an abort
    /// until the pointer is given a value.
    TfRefPtr<T>();

    /// Moves the pointer managed by \p p to \c *this.
    /// 
    /// After construction, \c *this will point to the object \p p had
    /// been pointing at and \p p will be pointing at the NULL object. 
    /// The reference count of the object being pointed at does not
    /// change.
    TfRefPtr<T>(pxr::TfRefPtr&& p) CPPMM_IGNORE;

    /// Initializes \c *this to point at \p p's object.
    /// 
    /// Increments \p p's object's reference count.
    TfRefPtr<T>(const pxr::TfRefPtr& p);

    template <typename X, typename U>
    void TfRefPtr<T>(const TfWeakPtrFacade<X, Y>& p, UNKNOWN* dummy);

    template <typename U>
    void TfRefPtr<T>(U* ptr, UNKNOWN* );

    /// Implicit conversion from \a TfNullPtr to TfRefPtr.
    TfRefPtr<T>(pxr::TfNullPtrType );

    /// Implicit conversion from \a nullptr to TfRefPtr.
    TfRefPtr<T>(std::nullptr_t );

    /// Assigns pointer to point at \c p's object, and increments reference
    /// count.
    /// 
    /// The object (if any) pointed at before the assignment has its
    /// reference count decremented, while the object newly pointed at
    /// has its reference count incremented.
    /// If the object previously pointed to now has nobody left to point at it,
    /// the object will typically be destroyed at this point.
    /// 
    /// An assignment
    /// \code
    ///     ptr = TfNullPtr;
    /// \endcode
    /// 
    /// can be used to make \c ptr "forget" where it is pointing; note
    /// however that this has an important side effect, since it
    /// decrements the reference count of the object previously pointed
    /// to by \c ptr, possibly triggering destruction of that object.
    pxr::TfRefPtr& operator=(const pxr::TfRefPtr& p);

    /// Moves the pointer managed by \p p to \c *this and leaves \p p
    /// pointing at the NULL object.
    /// 
    /// The object (if any) pointed at before the assignment has its
    /// reference count decremented, while the reference count of the
    /// object newly pointed at is not changed.
    pxr::TfRefPtr& operator=(pxr::TfRefPtr&& p) CPPMM_IGNORE;

    template <typename U>
    void TfRefPtr<T>(const pxr::TfRefPtr<T>& p);

    template <typename U>
    void TfRefPtr<T>(pxr::TfRefPtr<T>&& p);

    template <typename U>
    pxr::TfRefPtr& operator=(const pxr::TfRefPtr<T>& p);

    template <typename U>
    pxr::TfRefPtr& operator=(pxr::TfRefPtr<T>&& p);

    template <typename U>
    bool operator==(const pxr::TfRefPtr<T>& p) const;

    template <typename U>
    bool operator<(const pxr::TfRefPtr<T>& p) const;

    template <typename U>
    bool operator>(const pxr::TfRefPtr<T>& p) const;

    template <typename U>
    bool operator<=(const pxr::TfRefPtr<T>& p) const;

    template <typename U>
    bool operator>=(const pxr::TfRefPtr<T>& p) const;

    template <typename U>
    bool operator!=(const pxr::TfRefPtr<T>& p) const;

    /// Accessor to \c T's public members.
    T* operator->() const;

    /// True if the pointer points to an object.
    operator const pxrInternal_v0_20__pxrReserved__::TfRefBase *TfRefPtr<T>::*() const;

    /// Swap this pointer with \a other.
    /// After this operation, this pointer will point to what \a other
    /// formerly pointed to, and \a other will point to what this pointer
    /// formerly pointed to.
    void swap(pxr::TfRefPtr& other);

    /// Set this pointer to point to no object.
    /// Equivalent to assignment with TfNullPtr.
    void Reset();

*/

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct TfRefPtr

// TODO: fill in explicit instantiations, e.g.:
// template class TfRefPtr<int>;
// using TfRefPtrInt = pxr::TfRefPtr<int>;

template class TfRefPtr<pxr::UsdStage>;
using UsdStageRefPtr = pxr::UsdStageRefPtr;


#if 0

template <class T>
struct Tf_SupportsUniqueChanged {
    using BoundType = pxr::Tf_SupportsUniqueChanged<T>;

} CPPMM_OPAQUEPTR; // struct Tf_SupportsUniqueChanged

// TODO: fill in explicit instantiations, e.g.:
// template class Tf_SupportsUniqueChanged<int>;
// using Tf_SupportsUniqueChangedInt = pxr::Tf_SupportsUniqueChanged<int>;


void Tf_RefPtrTracker_FirstRef(const void* , const void* );


void Tf_RefPtrTracker_LastRef(const void* , const void* );


void Tf_RefPtrTracker_New(const void* , const void* );


void Tf_RefPtrTracker_Delete(const void* , const void* );


void Tf_RefPtrTracker_Assign(const void* , const void* , const void* );


struct Tf_RefPtr_UniqueChangedCounter {
    using BoundType = pxr::Tf_RefPtr_UniqueChangedCounter;

    static int AddRef(const pxr::TfRefBase* refBase);

    static bool RemoveRef(const pxr::TfRefBase* refBase);

    static bool AddRefIfNonzero(const pxr::TfRefBase* ptr);

    static bool _RemoveRef(const pxr::TfRefBase* refBase);

    static int _AddRef(const pxr::TfRefBase* refBase);

    static bool _AddRefIfNonzero(const pxr::TfRefBase* refBase);

} CPPMM_OPAQUEPTR; // struct Tf_RefPtr_UniqueChangedCounter


struct Tf_RefPtr_Counter {
    using BoundType = pxr::Tf_RefPtr_Counter;

    static int AddRef(const pxr::TfRefBase* refBase);

    static bool RemoveRef(const pxr::TfRefBase* ptr);

    static bool AddRefIfNonzero(const pxr::TfRefBase* ptr);

} CPPMM_OPAQUEPTR; // struct Tf_RefPtr_Counter


void Tf_PostNullSmartPtrDereferenceFatalError(const pxr::TfCallContext& , const std::type_info& );


template <class U>
struct Rebind {
    using BoundType = pxr::Rebind<U>;

} CPPMM_OPAQUEPTR; // struct Rebind

// TODO: fill in explicit instantiations, e.g.:
// template class Rebind<int>;
// using RebindInt = pxr::Rebind<int>;


struct _CreateRefPtr {
    using BoundType = pxr::_CreateRefPtr;

} CPPMM_OPAQUEPTR; // struct _CreateRefPtr


template <typename T>
bool operator==(const pxr::TfRefPtr<T>& p, std::nullptr_t );


template <typename T>
bool operator==(std::nullptr_t , const pxr::TfRefPtr<T>& p);


template <typename T>
bool operator!=(const pxr::TfRefPtr<T>& p, std::nullptr_t );


template <typename T>
bool operator!=(std::nullptr_t , const pxr::TfRefPtr<T>& p);


template <typename T>
bool operator<(const pxr::TfRefPtr<T>& p, std::nullptr_t );


template <typename T>
bool operator<(std::nullptr_t , const pxr::TfRefPtr<T>& p);


template <typename T>
bool operator<=(const pxr::TfRefPtr<T>& p, std::nullptr_t );


template <typename T>
bool operator<=(std::nullptr_t , const pxr::TfRefPtr<T>& p);


template <typename T>
bool operator>(const pxr::TfRefPtr<T>& p, std::nullptr_t );


template <typename T>
bool operator>(std::nullptr_t , const pxr::TfRefPtr<T>& p);


template <typename T>
bool operator>=(const pxr::TfRefPtr<T>& p, std::nullptr_t );


template <typename T>
bool operator>=(std::nullptr_t , const pxr::TfRefPtr<T>& p);


template <typename T>
pxr::TfRefPtr<T> TfCreateRefPtr(T* ptr);


template <typename T>
const std::type_info& TfTypeid(const pxr::TfRefPtr<T>& ptr);


template <typename D, typename T>
pxr::TfRefPtr<T> TfDynamic_cast(const pxr::TfRefPtr<T>& ptr);


template <typename D, typename T>
pxr::TfRefPtr<T> TfSafeDynamic_cast(const pxr::TfRefPtr<T>& ptr);


template <typename D, typename T>
pxr::TfRefPtr<T> TfStatic_cast(const pxr::TfRefPtr<T>& ptr);


template <typename T>
pxr::TfRefPtr<T> TfConst_cast(const pxr::TfRefPtr<T>& ptr);


struct TfTypeFunctions {
    using BoundType = pxr::TfTypeFunctions;

    static T* GetRawPtr(const pxr::TfRefPtr<T>& t);

    static pxr::TfRefPtr<T> ConstructFromRawPtr(T* ptr);

    static bool IsNull(const pxr::TfRefPtr<T>& t);

    static void Class_Object_MUST_Be_Passed_By_Address();

    static void Class_Object_MUST_Not_Be_Const();

} CPPMM_OPAQUEPTR; // struct TfTypeFunctions


template <typename T>
void swap(pxr::TfRefPtr<T>& lhs, pxr::TfRefPtr<T>& rhs);


template <typename T>
size_t hash_value(const pxr::TfRefPtr<T>& ptr);

#endif


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
template class pxr::TfRefPtr<pxr::UsdStage>;
// template class pxr::Tf_SupportsUniqueChanged<int>;
// template class pxr::Rebind<int>;
