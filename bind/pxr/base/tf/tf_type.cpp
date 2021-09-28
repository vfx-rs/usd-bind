#include <pxr/base/tf/type.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class TfType
/// 
/// TfType represents a dynamic runtime type.
/// 
/// TfTypes are created and discovered at runtime, rather than compile
/// time.
/// 
/// Features:
/// 
/// - unique typename
/// - safe across DSO boundaries
/// - can represent C++ types, pure Python types, or Python subclasses of
///   wrapped C++ types
/// - lightweight value semantics -- you can copy and default construct
///   TfType, unlike *std*::type_info.
/// - totally ordered -- can use as a *std*::map key
struct TfType {
    using BoundType = pxr::TfType;

    /// Construct an TfType representing an unknown type.
    /// 
    /// To actually register a new type with the TfType system, see
    /// TfType::Declare().
    /// 
    /// Note that this always holds true:
    /// ```
    ///     TfType().IsUnknown() == true
    /// ```
    TfType();

    TfType(const pxr::TfType& );

    TfType(pxr::TfType&& ) CPPMM_IGNORE;

    ~TfType();

    /// Return an empty TfType, representing the unknown type.
    /// 
    /// This is equivalento the default constructor, TfType().  This form exists
    /// as a clearer way to express intent in code explicitly dealing with
    /// unknown types.
    /// 
    /// \see IsUnknown()
    static const pxr::TfType& GetUnknownType();

    /// Return true if this type is the same as or derived from *queryType*.
    /// If *queryType* is unknown, this always returns *false*.
    bool IsA(pxr::TfType queryType) const;

    /// Return true if this is the unknown type, representing a type
    /// unknown to the TfType system.
    /// 
    /// The unknown type does not derive from the root type, or any
    /// other type.
    bool IsUnknown() const;

    /// Return true if this is the root type.
    bool IsRoot() const;

    /// Return true if this is an enum type.
    bool IsEnumType() const;

    /// Return true if this is a plain old data type, as defined by C++.
    bool IsPlainOldDataType() const;

    /// Return the size required to hold an instance of this type on the stack
    /// (does not include any heap allocated memory the instance uses).
    /// 
    /// This is what the C++ sizeof operator returns for the type, so this
    /// value is not very useful for Python types (it will always be
    /// sizeof(boost::python::object)).
    size_t GetSizeof() const;

    bool operator==(const pxr::TfType& t) const;

    /*
    /// Equality operator.
    /// 
    /// > All unknown types (see IsUnknown()) are considered equal.
    /// This is so all unknown types will only occupy one key when used in
    /// an associative map.

    bool operator!=(const pxr::TfType& t) const;

    /// Comparison operator.
    bool operator<(const pxr::TfType& t) const;

    bool operator>(const pxr::TfType& t) const;

    bool operator<=(const pxr::TfType& t) const;

    bool operator>=(const pxr::TfType& t) const;

    template <typename T>
    static const pxr::TfType& Find();

    template <typename T>
    static const pxr::TfType& Find(const T& obj);

    /// Retrieve the *TfType* corresponding to an obj with the
    /// given *type_info*.
    static const pxr::TfType& Find(const std::type_info& t);

    /// Retrieve the *TfType* corresponding to an obj with the
    /// given *type_info*.
    static const pxr::TfType& FindByTypeid(const std::type_info& t);

    /// Retrieve the *TfType* corresponding to the given *name*.
    /// 
    /// Every type defined in the TfType system has a unique, implementation
    /// independent name.  In addition, aliases can be added to identify
    /// a type underneath a specific base type; see TfType::AddAlias().
    /// The given name will first be tried as an alias under the root type,
    /// and subsequently as a typename.
    /// 
    /// This method is equivalent to:
    /// ```
    ///    TfType::GetRoot().FindDerivedByName(name)
    /// ```
    /// 
    /// For any object *obj*,
    /// ```
    ///    Find(obj) == FindByName( Find(obj).GetTypeName() )
    /// ```
    static const pxr::TfType& FindByName(const std::string& name);

    /// Return the root type of the type hierarchy.
    /// 
    /// All known types derive (directly or indirectly) from the root.
    /// If a type is specified with no bases, it is implicitly
    /// considered to derive from the root type.
    static const pxr::TfType& GetRoot();

    /// Return the machine-independent name for this type.
    /// This name is specified when the TfType is declared.
    /// \see Declare()
    const std::string& GetTypeName() const;

    /// Return a C++ RTTI type_info for this type.
    /// 
    /// If this type is unknown or has not yet had a C++ type defined,
    /// *typeid*(void) will be returned.
    /// 
    /// \see Define()
    const std::type_info& GetTypeid() const;

    /// Return the canonical typeName used for a given std::type_info.
    /// 
    /// Exactly how the canonical name is generated is left undefined,
    /// but in practice it is likely to be the demangled RTTI name
    /// of the type_info, stripped of namespaces.  The real answer
    /// is implemented by this method.
    static std::string GetCanonicalTypeName(const std::type_info& );

    template <typename T>
    bool IsA() const;

    /// Retrieve the *TfType* that derives from this type and has the
    /// given alias or typename.
    /// 
    /// \see AddAlias
    const pxr::TfType& FindDerivedByName(const std::string& name) const;

    template <typename BASE>
    static const pxr::TfType& FindDerivedByName(const std::string& name);

    /// Retrieve the *TfType* corresponding to an obj with the
    /// given Python class *classObj*.
    static const pxr::TfType& FindByPythonClass(const pxr::TfPyObjWrapper& classObj);

    /// Returns a vector of the aliases registered for the derivedType
    /// under this, the base type.
    /// \see AddAlias()
    std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > > GetAliases(pxr::TfType derivedType) const;

    /// Return the Python class object for this type.
    /// 
    /// If this type is unknown or has not yet had a Python class
    /// defined, this will return *None*, as an empty
    /// *TfPyObjWrapper*
    /// 
    /// \see DefinePythonClass()
    pxr::TfPyObjWrapper GetPythonClass() const;

    /// Return a vector of types from which this type was derived.
    std::vector<pxrInternal_v0_20__pxrReserved__::TfType, std::allocator<pxrInternal_v0_20__pxrReserved__::TfType> > GetBaseTypes() const;

    /// Copy the first *maxBases* base types of *this* type to *out*, or all
    /// the base types if this type has *maxBases* or fewer base types.  Return
    /// *this* type's number of base types.
    /// 
    /// Note that it is supported to change a TfType to its first base type by
    /// calling this function.  For example:
    /// ```
    ///     TfType t = ...;
    ///     t.GetNBaseTypes(&t, 1);
    /// ```
    size_t GetNBaseTypes(pxr::TfType* out, size_t maxBases) const;

    /// Return a vector of types derived directly from this type.
    std::vector<pxrInternal_v0_20__pxrReserved__::TfType, std::allocator<pxrInternal_v0_20__pxrReserved__::TfType> > GetDirectlyDerivedTypes() const;

    /// Return the canonical type for this type.
    const pxr::TfType& GetCanonicalType() const;

    /// Return the set of all types derived (directly or indirectly)
    /// from this type.
    void GetAllDerivedTypes(std::set<pxrInternal_v0_20__pxrReserved__::TfType, std::less<pxrInternal_v0_20__pxrReserved__::TfType>, std::allocator<pxrInternal_v0_20__pxrReserved__::TfType> >* result) const;

    /// Build a vector of all ancestor types inherited by this type.
    /// The starting type is itself included, as the first element of
    /// the results vector.
    /// 
    /// Types are given in "C3" resolution order, as used for new-style
    /// classes starting in Python 2.3.  This algorithm is more complicated
    /// than a simple depth-first traversal of base classes, in order to
    /// prevent some subtle errors with multiple-inheritance.  See the
    /// references below for more background.
    /// 
    /// > This can be expensive; consider caching the results.  TfType
    ///   does not cache this itself since it is not needed internally.
    /// 
    /// \see Guido van Rossum.
    ///   "Unifying types and classes in Python 2.2: Method resolution order."
    ///   http://www.python.org/download/releases/2.2.2/descrintro/#mro
    /// 
    /// \see Barrett, Cassels, Haahr, Moon, Playford, Withington.
    ///   "A Monotonic Superclass Linearization for Dylan."  OOPSLA 96.
    ///   http://www.webcom.com/haahr/dylan/linearization-oopsla96.html
    void GetAllAncestorTypes(std::vector<pxrInternal_v0_20__pxrReserved__::TfType, std::allocator<pxrInternal_v0_20__pxrReserved__::TfType> >* result) const;

    /// Convert to bool -- return true if this type is not unknown, false
    /// otherwise.
    operator pxrInternal_v0_20__pxrReserved__::TfType::_TypeInfo *pxrInternal_v0_20__pxrReserved__::TfType::*() const;

    /// Boolean not operator -- return true if this type is unknown, false
    /// otherwise.
    bool operator!() const;

    /// Declare a TfType with the given *typeName*, but no base type
    /// information.  This just establishes the minimal stub for the
    /// type to exist, prior to it being fleshed out with more
    /// declarations (specifying base types) or a definition.
    static const pxr::TfType& Declare(const std::string& typeName);

    /// Declare a TfType with the given *typeName* and *bases*.
    /// If the bases vector is empty, the type will be marked as
    /// deriving from the root TfType (see TfType::GetRootType()).
    /// The *definitionCallback*, if given, will be invoked later to
    /// define the type when needed.
    /// 
    /// It is ok to redeclare a type that has already been declared.
    /// The given bases will supplement any existing bases.  An
    /// example use of this is the Plugin system, where only a single
    /// base may be known in the plugin metadata, but when the code
    /// is loaded later, a full set of bases is specified.
    /// 
    /// It is an error to redeclare a type's definitionCallback.
    static const pxr::TfType& Declare(const std::string& typeName, const std::vector<pxrInternal_v0_20__pxrReserved__::TfType, std::allocator<pxrInternal_v0_20__pxrReserved__::TfType> >& bases, void (pxrInternal_v0_20__pxrReserved__::TfType)* definitionCallback);

    template <typename T, typename BaseTypes>
    static const pxr::TfType& Declare();

    template <typename T, typename B>
    static const pxr::TfType& Define();

    template <typename T>
    static const pxr::TfType& Define();

    /// Define the Python class object corresponding to this TfType.
    /// \see TfTypePythonClass
    void DefinePythonClass(const pxr::TfPyObjWrapper& classObj) const;

    template <typename Base, typename Derived>
    static void AddAlias(const std::string& name);

    /// Add an alias name for this type under the given base type.
    /// 
    /// Aliases are similar to typedefs in C++: they provide an
    /// alternate name for a type.  The alias is defined with respect
    /// to the given *base* type; aliases must be unique beneath that
    /// base type.
    void AddAlias(pxr::TfType base, const std::string& name) const;

    /// Convenience method to add an alias and return *this.
    /// \see AddAlias()
    const pxr::TfType& Alias(pxr::TfType base, const std::string& name) const;

    /// Cast *addr* to the address corresponding to the type *ancestor*.
    /// 
    /// (This is a dangerous function; there's probably a much better way to
    /// do whatever it is you're trying to do.)
    /// 
    /// With multiple inheritance, you can't do a reinterpret_cast back to an
    /// ancestor type; this function figures out how to cast addr to the
    /// address corresponding to the type ancestor if in fact ancestor is
    /// really an ancestor of the type corresponding to ***this.
    /// 
    /// In order for this function to work correctly, *addr* must have been a
    /// pointer of type corresponding to ***this, which was cast to void; and
    /// of course the type of *ancestor* must be an ancestor of the type of
    /// ***this.
    /// 
    /// \warning You are warned: this is deadly dangerous stuff, and you
    /// shouldn't be doing it!
    void* CastToAncestor(pxr::TfType ancestor, void* addr) const;

    const void* CastToAncestor(pxr::TfType ancestor, const void* addr) const;

    /// Cast *addr*, which pointed to the ancestor type *ancestor*, to the
    /// type of ***this.
    /// 
    /// This function is the opposite of *CastToAncestor*(); the assumption
    /// is that *addr* was a pointer to the type corresponding to \c
    /// ancestor, and was then reinterpret-cast to *void**, but now you wish
    /// to turn cast the pointer to the type corresponding to ***this.  While
    /// the fact that *addr* was a pointer of type *ancestor* is taken on
    /// faith, a runtime check is performed to verify that the underlying
    /// object pointed to by *addr* is of type ***this (or derived from \c
    /// *this).
    /// 
    /// \warning Again, this is dangerous territory, and there's probably
    /// something much better than using this function.
    void* CastFromAncestor(pxr::TfType ancestor, void* addr) const;

    const void* CastFromAncestor(pxr::TfType ancestor, const void* addr) const;

    /// Sets the factory object for this type.  A type's factory typically
    /// has methods to instantiate the type given various arguments and must
    /// inherit from *FactoryBase*.  The factory cannot be changed once set.
    void SetFactory(std::unique_ptr<pxrInternal_v0_20__pxrReserved__::TfType::FactoryBase, std::default_delete<pxrInternal_v0_20__pxrReserved__::TfType::FactoryBase> > factory) const;

    template <typename T>
    void SetFactory(UNKNOWN& factory) const;

    template <typename T>
    void SetFactory() const;

    /// Sets the factory object for this type.  A type's factory typically
    /// has methods to instantiate the type given various arguments and must
    /// inherit from *FactoryBase*.  The factory cannot be changed once set.
    const pxr::TfType& Factory(std::unique_ptr<pxrInternal_v0_20__pxrReserved__::TfType::FactoryBase, std::default_delete<pxrInternal_v0_20__pxrReserved__::TfType::FactoryBase> > factory) const;

    template <typename T>
    const pxr::TfType& Factory(UNKNOWN& factory) const;

    template <typename T>
    const pxr::TfType& Factory() const;

    template <typename T>
    T* GetFactory() const;


    /// Base class of all factory types.
    struct FactoryBase {
        using BoundType = pxr::TfType::FactoryBase;

        ~FactoryBase();

        pxr::TfType::FactoryBase& operator=(const pxr::TfType::FactoryBase& );

    } CPPMM_OPAQUEPTR; // struct FactoryBase


    enum LegacyFlags {
        ABSTRACT = 1,
        CONCRETE = 2,
        MANUFACTURABLE = 8,
    };

    struct PyPolymorphicBase {
        using BoundType = pxr::TfType::PyPolymorphicBase;

        pxr::TfType::PyPolymorphicBase& operator=(const pxr::TfType::PyPolymorphicBase& );

    } CPPMM_OPAQUEPTR; // struct PyPolymorphicBase


    /// A type-list of C++ base types.
    /// \see TfType::Define()
    template <class Args>
    struct Bases {
        using BoundType = pxr::TfType::Bases<Args>;

    } CPPMM_OPAQUEPTR; // struct Bases

    */

    // TODO: fill in explicit instantiations, e.g.:
    // template class Bases<int>;
// using BasesInt = pxr::TfType::Bases<int>;

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct TfType


/*
/// Output a TfType, using the machine-independent type name.
/// \ingroup group_tf_DebuggingOutput
std::ostream& operator<<(std::ostream& out, const pxr::TfType& t);


/// Metafunction returning sizeof(T) for a type T (or 0 if T is a void type).
template <class T>
struct TfSizeofType {
    using BoundType = pxr::TfSizeofType<T>;

} CPPMM_OPAQUEBYTES; // struct TfSizeofType
*/

// TODO: fill in explicit instantiations, e.g.:
// template class TfSizeofType<int>;
// using TfSizeofTypeInt = pxr::TfSizeofType<int>;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::TfType::Bases<int>;
// template class pxr::TfSizeofType<int>;
