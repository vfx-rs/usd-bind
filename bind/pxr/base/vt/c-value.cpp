#include <cppmm_bind.hpp>
#include <pxr/base/vt/value.h>

namespace cppmm_bind {

namespace pxrInternal_v0_21__pxrReserved__ {

#if 0
template <class T> struct Vt_DefaultValueFactory {
  using BoundType = pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueFactory<T>;

  static pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder Invoke();

} CPPMM_OPAQUEBYTES; // struct Vt_DefaultValueFactory
#endif

// TODO: fill in explicit instantiations, e.g.:
// template class Vt_DefaultValueFactory<int>;
// using Vt_DefaultValueFactoryInt =
// pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueFactory<int>;
#if 0
struct Vt_DefaultValueHolder {
  using BoundType = pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder;

  template <typename T>
  static pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder Create();

  template <typename T>
  static pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder
  Create(const T &val);

  const std::type_info &GetType() const;

  const void *GetPointer() const;

  Vt_DefaultValueHolder(
      const pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder &);

  Vt_DefaultValueHolder(
      pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder &&) CPPMM_IGNORE;

  pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder &
  operator=(const pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder &);

  pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder &operator=(
      pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueHolder &&) CPPMM_IGNORE;

  ~Vt_DefaultValueHolder();

} CPPMM_OPAQUEBYTES; // struct Vt_DefaultValueHolder
#endif

struct VtValue {
  using BoundType = pxrInternal_v0_21__pxrReserved__::VtValue;

  VtValue();

#if 0
  VtValue(const pxrInternal_v0_21__pxrReserved__::VtValue &other);

  VtValue(pxrInternal_v0_21__pxrReserved__::VtValue &&other) CPPMM_IGNORE;

  template <typename T> void VtValue(const T &obj);

  template <typename T>
  static pxrInternal_v0_21__pxrReserved__::VtValue Take(T &obj);

  ~VtValue();

  pxrInternal_v0_21__pxrReserved__::VtValue &
  operator=(const pxrInternal_v0_21__pxrReserved__::VtValue &other);

  pxrInternal_v0_21__pxrReserved__::VtValue &
  operator=(pxrInternal_v0_21__pxrReserved__::VtValue &&other) CPPMM_IGNORE;

  template <typename T> UNKNOWN operator=(T obj);

  template <typename T> UNKNOWN operator=(const T &obj);

  pxrInternal_v0_21__pxrReserved__::VtValue &operator=(const char *cstr);

  pxrInternal_v0_21__pxrReserved__::VtValue &operator=(char *cstr);

  pxrInternal_v0_21__pxrReserved__::VtValue &
  Swap(pxrInternal_v0_21__pxrReserved__::VtValue &rhs);

  template <typename T> UNKNOWN Swap(T &rhs);

  template <typename T> UNKNOWN UncheckedSwap(T &rhs);

  void UncheckedSwap(pxrInternal_v0_21__pxrReserved__::VtValue &rhs);

  template <typename T> T Remove();

  template <typename T> T UncheckedRemove();

  template <typename T> bool IsHolding() const;

  bool IsArrayValued() const;

  unsigned long GetArraySize() const;

  const std::type_info &GetTypeid() const;

  const std::type_info &GetElementTypeid() const;

  pxrInternal_v0_21__pxrReserved__::TfType GetType() const;

  std::string GetTypeName() const;

  template <typename T> const T &UncheckedGet() const;

  template <typename T> const T &Get() const;

  template <typename T> T GetWithDefault(const T &def) const;

  template <typename From, typename To>
  static void
      RegisterCast(pxrInternal_v0_21__pxrReserved__::VtValue(
                       const pxrInternal_v0_21__pxrReserved__::VtValue &) *
                   castFn);

  template <typename From, typename To> static void RegisterSimpleCast();

  template <typename From, typename To>
  static void RegisterSimpleBidirectionalCast();

  template <typename T>
  static pxrInternal_v0_21__pxrReserved__::VtValue
  Cast(const pxrInternal_v0_21__pxrReserved__::VtValue &val);

  static pxrInternal_v0_21__pxrReserved__::VtValue
  CastToTypeOf(const pxrInternal_v0_21__pxrReserved__::VtValue &val,
               const pxrInternal_v0_21__pxrReserved__::VtValue &other);

  static pxrInternal_v0_21__pxrReserved__::VtValue
  CastToTypeid(const pxrInternal_v0_21__pxrReserved__::VtValue &val,
               const std::type_info &type);

  static bool CanCastFromTypeidToTypeid(const std::type_info &from,
                                        const std::type_info &to);

  template <typename T> pxrInternal_v0_21__pxrReserved__::VtValue &Cast();

  pxrInternal_v0_21__pxrReserved__::VtValue &
  CastToTypeOf(const pxrInternal_v0_21__pxrReserved__::VtValue &other);

  pxrInternal_v0_21__pxrReserved__::VtValue &
  CastToTypeid(const std::type_info &type);

  template <typename T> bool CanCast() const;

  bool
  CanCastToTypeOf(const pxrInternal_v0_21__pxrReserved__::VtValue &other) const;

  bool CanCastToTypeid(const std::type_info &type) const;

  bool IsEmpty() const;

  bool CanHash() const;

  unsigned long GetHash() const;

  bool operator==(const pxrInternal_v0_21__pxrReserved__::VtValue &rhs) const;

  bool operator!=(const pxrInternal_v0_21__pxrReserved__::VtValue &rhs) const;

  template <class T> struct _Counted {
    using BoundType = pxrInternal_v0_21__pxrReserved__::VtValue::_Counted<T>;

    _Counted<T>(const T &obj);

    bool IsUnique() const;

    const T &Get() const;

    T &GetMutable();

  } CPPMM_OPAQUEBYTES; // struct _Counted

  // TODO: fill in explicit instantiations, e.g.:
  // template class _Counted<int>;
  // using _CountedInt =
  // pxrInternal_v0_21__pxrReserved__::VtValue::_Counted<int>;

  struct _TypeInfo {
    using BoundType = pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfo;

    void CopyInit(const std::aligned_storage<8, 8>::type &src,
                  std::aligned_storage<8, 8>::type &dst) const;

    void Destroy(std::aligned_storage<8, 8>::type &storage) const;

    void Move(std::aligned_storage<8, 8>::type &src,
              std::aligned_storage<8, 8>::type &dst) const;

    bool CanHash(const std::aligned_storage<8, 8>::type &storage) const;

    unsigned long Hash(const std::aligned_storage<8, 8>::type &storage) const;

    bool Equal(const std::aligned_storage<8, 8>::type &lhs,
               const std::aligned_storage<8, 8>::type &rhs) const;

    bool EqualPtr(const std::aligned_storage<8, 8>::type &lhs,
                  const void *rhs) const;

    void MakeMutable(std::aligned_storage<8, 8>::type &storage) const;

    std::basic_ostream<char> &
    StreamOut(const std::aligned_storage<8, 8>::type &storage,
              std::basic_ostream<char> &out) const;

    bool IsArrayValued(const std::aligned_storage<8, 8>::type &storage) const;

    const std::type_info &
    GetElementTypeid(const std::aligned_storage<8, 8>::type &storage) const;

    const std::type_info &
    GetTypeid(const std::aligned_storage<8, 8>::type &storage) const;

    const pxrInternal_v0_21__pxrReserved__::Vt_ShapeData *
    GetShapeData(const std::aligned_storage<8, 8>::type &storage) const;

    unsigned long
    GetNumElements(const std::aligned_storage<8, 8>::type &storage) const;

    bool ProxyHoldsType(const std::aligned_storage<8, 8>::type &storage,
                        const std::type_info &t) const;

    pxrInternal_v0_21__pxrReserved__::TfType
    GetProxiedType(const std::aligned_storage<8, 8>::type &storage) const;

    const std::type_info &
    GetProxiedTypeid(const std::aligned_storage<8, 8>::type &storage) const;

    pxrInternal_v0_21__pxrReserved__::VtValue
    GetProxiedAsVtValue(const std::aligned_storage<8, 8>::type &storage) const;

    const void *
    GetProxiedObjPtr(const std::aligned_storage<8, 8>::type &storage) const;

    pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfo &
    operator=(const pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfo &);

    pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfo &operator=(
        pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfo &&) CPPMM_IGNORE;

    _TypeInfo(const pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfo &);

    _TypeInfo(pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfo &&)
        CPPMM_IGNORE;

    ~_TypeInfo();

  } CPPMM_OPAQUEBYTES; // struct _TypeInfo

  template <class T, class Enable> struct _ArrayHelper {
    using BoundType =
        pxrInternal_v0_21__pxrReserved__::VtValue::_ArrayHelper<T, Enable>;

    static const pxrInternal_v0_21__pxrReserved__::Vt_ShapeData *
    GetShapeData(const T &);

    static unsigned long GetNumElements(const T &);

    static const std::type_info &GetElementTypeid();

  } CPPMM_OPAQUEBYTES; // struct _ArrayHelper

  // TODO: fill in explicit instantiations, e.g.:
  // template class _ArrayHelper<int, int>;
  // using _ArrayHelperInt =
  // pxrInternal_v0_21__pxrReserved__::VtValue::_ArrayHelper<int, int>;

  template <class T, class Enable> struct _ProxyHelper {
    using BoundType =
        pxrInternal_v0_21__pxrReserved__::VtValue::_ProxyHelper<T, Enable>;

    static bool CanHash(const T &);

    static unsigned long Hash(const T &obj);

    static bool Equal(const T &a, const T &b);

    static std::basic_ostream<char> &StreamOut(const T &obj,
                                               std::basic_ostream<char> &out);

    static const pxrInternal_v0_21__pxrReserved__::Vt_ShapeData *
    GetShapeData(const T &obj);

    static unsigned long GetNumElements(const T &obj);

    static bool IsArrayValued(const T &);

    static const std::type_info &GetTypeid(const T &);

    static const std::type_info &GetElementTypeid(const T &);

    static pxrInternal_v0_21__pxrReserved__::VtValue
    GetProxiedAsVtValue(const T &obj);

    static bool HoldsType(const T &tp, const std::type_info &query);

    static pxrInternal_v0_21__pxrReserved__::TfType GetTfType(const T &tp);

    static const void *GetObjPtr(const T &tp);

  } CPPMM_OPAQUEBYTES; // struct _ProxyHelper

  // TODO: fill in explicit instantiations, e.g.:
  // template class _ProxyHelper<int, int>;
  // using _ProxyHelperInt =
  // pxrInternal_v0_21__pxrReserved__::VtValue::_ProxyHelper<int, int>;

  template <class T, class Container, class Derived> struct _TypeInfoImpl {
    using BoundType =
        pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfoImpl<T, Container,
                                                                 Derived>;

    void CopyInit(const std::aligned_storage<8, 8>::type &src,
                  std::aligned_storage<8, 8>::type &dst) const;

    void Destroy(std::aligned_storage<8, 8>::type &storage) const;

    void Move(std::aligned_storage<8, 8>::type &src,
              std::aligned_storage<8, 8>::type &dst) const;

    bool CanHash(const std::aligned_storage<8, 8>::type &storage) const;

    unsigned long Hash(const std::aligned_storage<8, 8>::type &storage) const;

    bool Equal(const std::aligned_storage<8, 8>::type &lhs,
               const std::aligned_storage<8, 8>::type &rhs) const;

    bool EqualPtr(const std::aligned_storage<8, 8>::type &lhs,
                  const void *rhs) const;

    void MakeMutable(std::aligned_storage<8, 8>::type &storage) const;

    std::basic_ostream<char> &
    StreamOut(const std::aligned_storage<8, 8>::type &storage,
              std::basic_ostream<char> &out) const;

    bool IsArrayValued(const std::aligned_storage<8, 8>::type &storage) const;

    const std::type_info &
    GetElementTypeid(const std::aligned_storage<8, 8>::type &storage) const;

    const std::type_info &
    GetTypeid(const std::aligned_storage<8, 8>::type &storage) const;

    const pxrInternal_v0_21__pxrReserved__::Vt_ShapeData *
    GetShapeData(const std::aligned_storage<8, 8>::type &storage) const;

    unsigned long
    GetNumElements(const std::aligned_storage<8, 8>::type &storage) const;

    bool ProxyHoldsType(const std::aligned_storage<8, 8>::type &storage,
                        const std::type_info &t) const;

    pxrInternal_v0_21__pxrReserved__::TfType
    GetProxiedType(const std::aligned_storage<8, 8>::type &storage) const;

    const std::type_info &
    GetProxiedTypeid(const std::aligned_storage<8, 8>::type &storage) const;

    pxrInternal_v0_21__pxrReserved__::VtValue
    GetProxiedAsVtValue(const std::aligned_storage<8, 8>::type &storage) const;

    const void *
    GetProxiedObjPtr(const std::aligned_storage<8, 8>::type &storage) const;

    _TypeInfoImpl<T, Container, Derived>();

    static const T &GetObj(const std::aligned_storage<8, 8>::type &storage);

    static T &GetMutableObj(std::aligned_storage<8, 8>::type &storage);

    static void CopyInitObj(const T &objSrc,
                            std::aligned_storage<8, 8>::type &dst);

  } CPPMM_OPAQUEBYTES; // struct _TypeInfoImpl

  // TODO: fill in explicit instantiations, e.g.:
  // template class _TypeInfoImpl<int, int, int>;
  // using _TypeInfoImplInt =
  // pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfoImpl<int, int, int>;

  template <class T> struct _LocalTypeInfo {
    using BoundType =
        pxrInternal_v0_21__pxrReserved__::VtValue::_LocalTypeInfo<T>;

    _LocalTypeInfo<T>();

    static T &_GetMutableObj(T &obj);

    static const T &_GetObj(const T &obj);

    static void _PlaceCopy(T *dst, const T &src);

  } CPPMM_OPAQUEBYTES; // struct _LocalTypeInfo

  // TODO: fill in explicit instantiations, e.g.:
  // template class _LocalTypeInfo<int>;
  // using _LocalTypeInfoInt =
  // pxrInternal_v0_21__pxrReserved__::VtValue::_LocalTypeInfo<int>;

  template <class T> struct _RemoteTypeInfo {
    using BoundType =
        pxrInternal_v0_21__pxrReserved__::VtValue::_RemoteTypeInfo<T>;

    _RemoteTypeInfo<T>();

    static T &_GetMutableObj(intrusive_ptr<T> &ptr);

    static const T &_GetObj(const intrusive_ptr<T> &ptr);

    static void _PlaceCopy(intrusive_ptr<T> *dst, const T &src);

  } CPPMM_OPAQUEBYTES; // struct _RemoteTypeInfo

  // TODO: fill in explicit instantiations, e.g.:
  // template class _RemoteTypeInfo<int>;
  // using _RemoteTypeInfoInt =
  // pxrInternal_v0_21__pxrReserved__::VtValue::_RemoteTypeInfo<int>;

  template <class T> struct _TypeInfoFor {
    using BoundType =
        pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfoFor<T>;

  } CPPMM_OPAQUEBYTES; // struct _TypeInfoFor

  // TODO: fill in explicit instantiations, e.g.:
  // template class _TypeInfoFor<int>;
  // using _TypeInfoForInt =
  // pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfoFor<int>;

  struct _HoldAside {
    using BoundType = pxrInternal_v0_21__pxrReserved__::VtValue::_HoldAside;

    _HoldAside(pxrInternal_v0_21__pxrReserved__::VtValue *val);

    ~_HoldAside();

    _HoldAside(const pxrInternal_v0_21__pxrReserved__::VtValue::_HoldAside &);

  } CPPMM_OPAQUEBYTES; // struct _HoldAside

#endif

} CPPMM_OPAQUEBYTES; // struct VtValue

#if 0
std::basic_ostream<char> &VtStreamOut(
    const std::vector<pxrInternal_v0_21__pxrReserved__::VtValue,
                      std::allocator<pxrInternal_v0_21__pxrReserved__::VtValue>>
        &val,
    std::basic_ostream<char> &);

template <class T> struct Vt_ValueStoredType {
  using BoundType = pxrInternal_v0_21__pxrReserved__::Vt_ValueStoredType<T>;

} CPPMM_OPAQUEBYTES; // struct Vt_ValueStoredType

// TODO: fill in explicit instantiations, e.g.:
// template class Vt_ValueStoredType<int>;
// using Vt_ValueStoredTypeInt =
// pxrInternal_v0_21__pxrReserved__::Vt_ValueStoredType<int>;

template <class T> struct Vt_ValueGetStored {
  using BoundType = pxrInternal_v0_21__pxrReserved__::Vt_ValueGetStored<T>;

} CPPMM_OPAQUEBYTES; // struct Vt_ValueGetStored

// TODO: fill in explicit instantiations, e.g.:
// template class Vt_ValueGetStored<int>;
// using Vt_ValueGetStoredInt =
// pxrInternal_v0_21__pxrReserved__::Vt_ValueGetStored<int>;

struct Vt_ValueShapeDataAccess {
  using BoundType = pxrInternal_v0_21__pxrReserved__::Vt_ValueShapeDataAccess;

  static const pxrInternal_v0_21__pxrReserved__::Vt_ShapeData *
  _GetShapeData(const pxrInternal_v0_21__pxrReserved__::VtValue &value);

  static unsigned long
  _GetNumElements(const pxrInternal_v0_21__pxrReserved__::VtValue &value);

} CPPMM_OPAQUEBYTES; // struct Vt_ValueShapeDataAccess
#endif

} // namespace pxrInternal_v0_21__pxrReserved__

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxrInternal_v0_21__pxrReserved__::Vt_DefaultValueFactory<int>;
// template class pxrInternal_v0_21__pxrReserved__::VtValue::_Counted<int>;
// template class pxrInternal_v0_21__pxrReserved__::VtValue::_ArrayHelper<int,
// int>; template class
// pxrInternal_v0_21__pxrReserved__::VtValue::_ProxyHelper<int, int>; template
// class pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfoImpl<int, int,
// int>; template class
// pxrInternal_v0_21__pxrReserved__::VtValue::_LocalTypeInfo<int>; template
// class pxrInternal_v0_21__pxrReserved__::VtValue::_RemoteTypeInfo<int>;
// template class pxrInternal_v0_21__pxrReserved__::VtValue::_TypeInfoFor<int>;
// template class pxrInternal_v0_21__pxrReserved__::Vt_ValueStoredType<int>;
// template class pxrInternal_v0_21__pxrReserved__::Vt_ValueGetStored<int>;
