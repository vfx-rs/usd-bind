#include <pxr/usd/sdf/abstractData.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfAbstractData
/// 
/// Interface for scene description data storage.
/// 
/// This is not a layer.  SdfAbstractData is an anonymous container holding
/// scene description values.  It is like an STL container, but specialized
/// for holding scene description.
/// 
/// For any given SdfPath, an SdfAbstractData can hold one or more key/value 
/// pairs which we call Fields. Most of the API on SdfAbstractData accesses 
/// or modifies the value stored in a Field for a particular path and field 
/// name.
/// 
/// SdfAbstractData does not provide undo, change notification, or any strong
/// consistency guarantees about the scene description it contains.
/// Instead, it is a basis for building those things.
struct SdfAbstractData {
    using BoundType = pxr::SdfAbstractData;

    /// Return the current reference count of this object.
    size_t GetCurrentCount() const;

    /// Return true if only one \c TfRefPtr points to this object.
    bool IsUnique() const;

    const pxr::TfRefCount& GetRefCount() const;

    void SetShouldInvokeUniqueChangedListener(bool shouldCall);

    static void SetUniqueChangedListener(pxr::TfRefBase::UniqueChangedListener listener);

#if 0
    const pxr::TfWeakBase& __GetTfWeakBase__() const;
#endif

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

    SdfAbstractData();

    ~SdfAbstractData();

    /// Copy the data in \p source into this data object.
    /// 
    /// The default implementation does a spec-by-spec, field-by-field
    /// copy of \p source into this object.
    void CopyFrom(const pxr::SdfAbstractDataConstPtr& source);

    /// Returns true if this data object streams its data to and from its
    /// serialized data store on demand.
    /// 
    /// Sdf will treat layers with streaming data differently to avoid pulling
    /// in data unnecessarily. For example, reloading a streaming layer 
    /// will not perform fine-grained change notification, since doing 
    /// so would require the full contents of the layer to be loaded.
    bool StreamsData() const;

    /// Returns true if this data object has no specs, false otherwise.
    /// 
    /// The default implementation uses a visitor to check if any specs
    /// exist.
    bool IsEmpty() const;

    /// Returns true if this data object contains the same specs and fields
    /// as \a lhs, false otherwise. 
    /// 
    /// The default implementation does a spec-by-spec, field-by-field
    /// comparison.
    bool Equals(const pxr::SdfAbstractDataRefPtr& rhs) const;

    /// Writes the contents of this data object to \p out. This is primarily
    /// for debugging purposes.
    /// 
    /// The default implementation writes out each field for each spec.
    void WriteToStream(std::ostream& out) const;

    /// Create a new spec at \a path with the given \a specType. If the spec
    /// already exists the spec type will be changed.
    void CreateSpec(const pxr::SdfPath& path, pxr::SdfSpecType specType);

    /// Return true if this data has a spec for \a path.
    bool HasSpec(const pxr::SdfPath& path) const;

    /// Erase the spec at \a path and any fields that are on it.
    /// Note that this does not erase child specs.
    void EraseSpec(const pxr::SdfPath& path);

    /// Move the spec at \a oldPath to \a newPath, including all the
    /// fields that are on it. This does not move any child specs.
    void MoveSpec(const pxr::SdfPath& oldPath, const pxr::SdfPath& newPath);

    /// Return the spec type for the spec at \a path. Returns SdfSpecTypeUnknown
    /// if the spec doesn't exist.
    pxr::SdfSpecType GetSpecType(const pxr::SdfPath& path) const;

    /// Visits every spec in this SdfAbstractData object with the given 
    /// \p visitor. The order in which specs are visited is undefined. 
    /// The visitor may not modify the SdfAbstractData object it is visiting.
    /// \sa SdfAbstractDataSpecVisitor
    void VisitSpecs(pxr::SdfAbstractDataSpecVisitor* visitor) const;

    /// Returns whether a value exists for the given \a path and \a fieldName.
    /// Optionally returns the value if it exists.
    bool Has(const pxr::SdfPath& path, const pxr::TfToken& fieldName, pxr::SdfAbstractDataValue* value) const;

    /// Return whether a value exists for the given \a path and \a fieldName.
    /// Optionally returns the value if it exists.
    bool Has(const pxr::SdfPath& path, const pxr::TfToken& fieldName, pxr::VtValue* value) const;

    /// Fill \p specType (which cannot be nullptr) as if by a call to
    /// GetSpecType(path).  If the resulting specType is not SdfSpecTypeUnknown,
    /// then act as if Has(path, fieldName, value) was called and return its
    /// result.  In other words, the semantics of this function must be
    /// identical to this sequence:
    /// 
    /// \code
    /// *specType = GetSpecType(path);
    /// return *specType != SdfSpecTypeUnknown && Has(path, fieldName, value);
    /// \endcode
    bool HasSpecAndField(const pxr::SdfPath& path, const pxr::TfToken& fieldName, pxr::SdfAbstractDataValue* value, pxr::SdfSpecType* specType) const;

    /// Fill \p specType (which cannot be nullptr) as if by a call to
    /// GetSpecType(path).  If the resulting specType is not SdfSpecTypeUnknown,
    /// then act as if Has(path, fieldName, value) was called and return its
    /// result.  In other words, the semantics of this function must be
    /// identical to this sequence:
    /// 
    /// \code
    /// *specType = GetSpecType(path);
    /// return *specType != SdfSpecTypeUnknown && Has(path, fieldName, value);
    /// \endcode
    bool HasSpecAndField(const pxr::SdfPath& path, const pxr::TfToken& fieldName, pxr::VtValue* value, pxr::SdfSpecType* specType) const;

    /// Return the value for the given \a path and \a fieldName. Returns an
    /// empty value if none is set.
#if 0
    pxr::VtValue Get(const pxr::SdfPath& path, const pxr::TfToken& fieldName) const;
#endif

    /// Return the type of the value for \p fieldName on spec \p path.  If no
    /// such field exists, return typeid(void).  Derived classes may optionally
    /// override this for performance.  The base implementation is equivalent
    /// to:
    /// 
    /// \code
    /// return Get(path, fieldName).GetTypeid();
    /// \endcode
    const std::type_info& GetTypeid(const pxr::SdfPath& path, const pxr::TfToken& fieldName) const;

    /// Set the value of the given \a path and \a fieldName.
    /// 
    /// It's an error to set a field on a spec that does not exist. Setting a
    /// field to an empty VtValue is the same as calling Erase() on it.
    void Set(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::VtValue& value);

    /// Set the value of the given \a path and \a fieldName.
    /// 
    /// It's an error to set a field on a spec that does not exist.
    void Set(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::SdfAbstractDataConstValue& value);

    /// Remove the field at \p path and \p fieldName, if one exists.
    void Erase(const pxr::SdfPath& path, const pxr::TfToken& fieldName);

    /// Return the names of all the fields that are set at \p path.
    std::vector<pxr::TfToken> List(const pxr::SdfPath& path) const;

    template <typename T>
    T GetAs(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const T& defaultValue) const;

    /// \name Dict key access API
    /// @{
    bool HasDictKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, pxr::SdfAbstractDataValue* value) const;

    bool HasDictKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, pxr::VtValue* value) const;

#if 0
    pxr::VtValue GetDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath) const;
#endif

    void SetDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, const pxr::VtValue& value);

    void SetDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath, const pxr::SdfAbstractDataConstValue& value);

    void EraseDictValueByKey(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath);

    std::vector<pxr::TfToken> ListDictKeys(const pxr::SdfPath& path, const pxr::TfToken& fieldName, const pxr::TfToken& keyPath) const;

    /// \name Time-sample API
    /// 
    /// This API supports narrowly-targeted queries against the
    /// "timeSamples" key of properties.  In particular, it enables
    /// asking for single time samples without pulling on the entire
    /// set of time samples, as well as asking about the set of sample
    /// times without pulling on the actual values at those times.
    /// 
    /// @{
    std::set<double> ListAllTimeSamples() const;

    std::set<double> ListTimeSamplesForPath(const pxr::SdfPath& path) const;

    bool GetBracketingTimeSamples(double time, double* tLower, double* tUpper) const;

    size_t GetNumTimeSamplesForPath(const pxr::SdfPath& path) const;

    bool GetBracketingTimeSamplesForPath(const pxr::SdfPath& path, double time, double* tLower, double* tUpper) const;

    bool QueryTimeSample(const pxr::SdfPath& path, double time, pxr::VtValue* optionalValue) const;

    bool QueryTimeSample(const pxr::SdfPath& path, double time, pxr::SdfAbstractDataValue* optionalValue) const;

    void SetTimeSample(const pxr::SdfPath& path, double time, const pxr::VtValue& value);

    void EraseTimeSample(const pxr::SdfPath& path, double time);

    SdfAbstractData(const pxr::SdfAbstractData& );

    pxr::SdfAbstractData& operator=(const pxr::SdfAbstractData& );

} CPPMM_OPAQUEPTR; // struct SdfAbstractData


/// \class SdfAbstractDataSpecVisitor
/// 
/// Base class for objects used to visit specs in an SdfAbstractData object.
/// 
/// \sa SdfAbstractData::VisitSpecs.
struct SdfAbstractDataSpecVisitor {
    using BoundType = pxr::SdfAbstractDataSpecVisitor;

    ~SdfAbstractDataSpecVisitor();

    /// \c SdfAbstractData::VisitSpecs calls this function for every entry it
    /// contains, passing itself as \p data and the entry's \p path.  Return
    /// false to stop iteration early, true to continue.
    bool VisitSpec(const pxr::SdfAbstractData& data, const pxr::SdfPath& path);

    /// \c SdfAbstractData::VisitSpecs will call this after visitation is
    /// complete, even if some \c VisitSpec() returned \c false.
    void Done(const pxr::SdfAbstractData& data);

    pxr::SdfAbstractDataSpecVisitor& operator=(const pxr::SdfAbstractDataSpecVisitor& );

} CPPMM_OPAQUEPTR; // struct SdfAbstractDataSpecVisitor


/// \class SdfAbstractDataConstValue
/// 
/// A type-erased container for a const field value in an SdfAbstractData.
/// 
/// \sa SdfAbstractDataConstTypedValue
#if 0
struct SdfAbstractDataConstValue {
    using BoundType = pxr::SdfAbstractDataConstValue;

    bool GetValue(pxr::VtValue* value) const;

    template <typename T>
    bool GetValue(T* v) const;

    bool IsEqual(const pxr::VtValue& value) const;

#if 0
    pxr::SdfAbstractDataConstValue& operator=(const pxr::SdfAbstractDataConstValue& );
    pxr::SdfAbstractDataConstValue& operator=(pxr::SdfAbstractDataConstValue&& ) CPPMM_IGNORE;
#endif

    ~SdfAbstractDataConstValue();

#if 0
    SdfAbstractDataConstValue(const pxr::SdfAbstractDataConstValue& );

    SdfAbstractDataConstValue(pxr::SdfAbstractDataConstValue&& ) CPPMM_IGNORE;
#endif

} CPPMM_OPAQUEPTR; // struct SdfAbstractDataConstValue
#endif


/// \class SdfAbstractDataValue
/// 
/// A type-erased container for a field value in an SdfAbstractData.
/// 
/// \sa SdfAbstractDataTypedValue
#if 0
struct SdfAbstractDataValue {
    using BoundType = pxr::SdfAbstractDataValue;

    bool StoreValue(const pxr::VtValue& value);

    template <typename T>
    bool StoreValue(const T& v);

    bool StoreValue(const pxr::SdfValueBlock& block);

    pxr::SdfAbstractDataValue& operator=(const pxr::SdfAbstractDataValue& );
    pxr::SdfAbstractDataValue& operator=(pxr::SdfAbstractDataValue&& ) CPPMM_IGNORE;

    ~SdfAbstractDataValue();

} CPPMM_OPAQUEPTR; // struct SdfAbstractDataValue
#endif


/// \class SdfAbstractDataTypedValue
/// 
/// The fully-typed container for a field value in an \c SdfAbstractData.
/// An \c SdfAbstractDataTypedValue allows a consumer to pass a pointer to
/// an object through the virtual \c SdfAbstractData interface along with
/// information about that object's type. That information may allow
/// implementations of \c SdfAbstractData to populate the contained object
/// in a more efficient way, avoiding unnecessary boxing/unboxing of data.
/// 
/// SdfAbstractDataTypedValue objects are intended to be transient; they
/// are solely used to get pointer information into and out of an 
/// SdfAbstractData container.
#if 0
template <class T>
struct SdfAbstractDataTypedValue {
    using BoundType = pxr::SdfAbstractDataTypedValue<T>;

    bool StoreValue(const pxr::VtValue& value);

    template <typename T>
    bool StoreValue(const T& v);

    bool StoreValue(const pxr::SdfValueBlock& block);

    SdfAbstractDataTypedValue<T>(T* value);

    bool StoreValue(const pxr::VtValue& v);

} CPPMM_OPAQUEPTR; // struct SdfAbstractDataTypedValue
#endif

// TODO: fill in explicit instantiations, e.g.:
// template class SdfAbstractDataTypedValue<int>;
// using SdfAbstractDataTypedValueInt = pxr::SdfAbstractDataTypedValue<int>;


/// \class SdfAbstractDataConstTypedValue
/// 
/// The fully-typed container for a field value in an \c SdfAbstractData.
/// An \c SdfAbstractDataConstTypedValue allows a consumer to pass a pointer to
/// an object through the virtual \c SdfAbstractData interface along with
/// information about that object's type. That information may allow
/// implementations of \c SdfAbstractData to store the contained object
/// in a more efficient way, avoiding unnecessary boxing/unboxing of data.
/// 
/// SdfAbstractDataConstTypedValue objects are intended to be transient; they
/// are solely used to get pointer information into an SdfAbstractData 
/// container.
#if 0
template <class T>
struct SdfAbstractDataConstTypedValue {
    using BoundType = pxr::SdfAbstractDataConstTypedValue<T>;

    bool GetValue(pxr::VtValue* value) const;

    template <typename T>
    bool GetValue(T* v) const;

    bool IsEqual(const pxr::VtValue& value) const;

    SdfAbstractDataConstTypedValue<T>(const T* value);

    bool GetValue(pxr::VtValue* v) const;

    bool IsEqual(const pxr::VtValue& v) const;

} CPPMM_OPAQUEPTR; // struct SdfAbstractDataConstTypedValue
#endif

// TODO: fill in explicit instantiations, e.g.:
// template class SdfAbstractDataConstTypedValue<int>;
// using SdfAbstractDataConstTypedValueInt = pxr::SdfAbstractDataConstTypedValue<int>;


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::SdfAbstractDataTypedValue<int>;
// template class pxr::SdfAbstractDataConstTypedValue<int>;
