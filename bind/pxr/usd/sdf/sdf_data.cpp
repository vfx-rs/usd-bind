#include <pxr/usd/sdf/data.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfData
/// 
/// SdfData provides concrete scene description data storage.
/// 
/// An SdfData is an implementation of SdfAbstractData that simply
/// stores specs and fields in a map keyed by path.
struct SdfData {
    using BoundType = pxr::SdfData;

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
    std::set<double, std::less<double>, std::allocator<double> > ListAllTimeSamples() const;

    std::set<double, std::less<double>, std::allocator<double> > ListTimeSamplesForPath(const pxr::SdfPath& path) const;

    bool GetBracketingTimeSamples(double time, double* tLower, double* tUpper) const;

    size_t GetNumTimeSamplesForPath(const pxr::SdfPath& path) const;

    bool GetBracketingTimeSamplesForPath(const pxr::SdfPath& path, double time, double* tLower, double* tUpper) const;

    bool QueryTimeSample(const pxr::SdfPath& path, double time, pxr::VtValue* optionalValue) const;

    bool QueryTimeSample(const pxr::SdfPath& path, double time, pxr::SdfAbstractDataValue* optionalValue) const;

    void SetTimeSample(const pxr::SdfPath& path, double time, const pxr::VtValue& value);

    void EraseTimeSample(const pxr::SdfPath& path, double time);

    SdfData();

    ~SdfData();

#if 0
    bool QueryTimeSample(const pxr::SdfPath& path, double time, pxr::VtValue* value) const;
#endif

    SdfData(const pxr::SdfData& );

    pxr::SdfData& operator=(const pxr::SdfData& );

#if 0
    struct _SpecData {
        using BoundType = pxr::SdfData::_SpecData;

        _SpecData();

        _SpecData(const pxr::SdfData::_SpecData& );

        _SpecData(pxr::SdfData::_SpecData&& ) CPPMM_IGNORE;

        pxr::SdfData::_SpecData& operator=(const pxr::SdfData::_SpecData& );

        pxr::SdfData::_SpecData& operator=(pxr::SdfData::_SpecData&& ) CPPMM_IGNORE;

        ~_SpecData();

    } CPPMM_OPAQUEPTR; // struct _SpecData
#endif

} CPPMM_OPAQUEPTR; // struct SdfData

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
