#if 0
#include <pxr/usd/sdf/changeList.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfChangeList
/// 
/// A list of scene description modifications, organized by the namespace
/// paths where the changes occur.
struct SdfChangeList {
    using BoundType = pxr::SdfChangeList;

    SdfChangeList();

    SdfChangeList(const pxr::SdfChangeList& );

    SdfChangeList(pxr::SdfChangeList&& ) CPPMM_IGNORE;

    pxr::SdfChangeList& operator=(const pxr::SdfChangeList& );

    pxr::SdfChangeList& operator=(pxr::SdfChangeList&& ) CPPMM_IGNORE;

    void DidReplaceLayerContent();

    void DidReloadLayerContent();

    void DidChangeLayerResolvedPath();

    void DidChangeLayerIdentifier(const std::string& oldIdentifier);

    void DidChangeSublayerPaths(const std::string& subLayerPath, pxr::SdfChangeList::SubLayerChangeType changeType);

    void DidAddPrim(const pxr::SdfPath& primPath, bool inert);

    void DidRemovePrim(const pxr::SdfPath& primPath, bool inert);

    void DidReorderPrims(const pxr::SdfPath& parentPath);

    void DidChangePrimName(const pxr::SdfPath& oldPath, const pxr::SdfPath& newPath);

    void DidChangePrimVariantSets(const pxr::SdfPath& primPath);

    void DidChangePrimInheritPaths(const pxr::SdfPath& primPath);

    void DidChangePrimReferences(const pxr::SdfPath& primPath);

    void DidChangePrimSpecializes(const pxr::SdfPath& primPath);

    void DidAddProperty(const pxr::SdfPath& propPath, bool hasOnlyRequiredFields);

    void DidRemoveProperty(const pxr::SdfPath& propPath, bool hasOnlyRequiredFields);

    void DidReorderProperties(const pxr::SdfPath& propPath);

    void DidChangePropertyName(const pxr::SdfPath& oldPath, const pxr::SdfPath& newPath);

    void DidChangeAttributeTimeSamples(const pxr::SdfPath& attrPath);

    void DidChangeAttributeConnection(const pxr::SdfPath& attrPath);

    void DidChangeRelationshipTargets(const pxr::SdfPath& relPath);

    void DidAddTarget(const pxr::SdfPath& targetPath);

    void DidRemoveTarget(const pxr::SdfPath& targetPath);

    void DidChangeInfo(const pxr::SdfPath& path, const pxr::TfToken& key, const pxr::VtValue& oldValue, const pxr::VtValue& newValue);

    const pxr::SdfChangeList::EntryList& GetEntryList() const;

    const pxr::SdfChangeList::Entry& GetEntry(const pxr::SdfPath& ) const;

    const std::pair<pxrInternal_v0_21__pxrReserved__::SdfPath, pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry>* FindEntry(const pxr::SdfPath& ) const;

    const std::pair<pxrInternal_v0_21__pxrReserved__::SdfPath, pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry>* begin() const;

    const std::pair<pxrInternal_v0_21__pxrReserved__::SdfPath, pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry>* cbegin() const;

    const std::pair<pxrInternal_v0_21__pxrReserved__::SdfPath, pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry>* end() const;

    const std::pair<pxrInternal_v0_21__pxrReserved__::SdfPath, pxrInternal_v0_21__pxrReserved__::SdfChangeList::Entry>* cend() const;

    ~SdfChangeList();


    enum SubLayerChangeType {
        SubLayerAdded = 0,
        SubLayerRemoved = 1,
        SubLayerOffset = 2,
    };

    /// \struct Entry
    /// 
    /// Entry of changes at a single path in namespace.
    /// 
    /// If the path is SdfPath::AbsoluteRootPath(), that indicates a change
    /// to the root of namespace (that is, a layer or stage).
    /// 
    /// Note: Our language for invalidation used to be more precise
    /// about items added, removed, or reordered.  It might seem that
    /// this would afford more opportunities for efficient updates,
    /// but in practice it does not.  Because our derived data typically
    /// must recompose or reinstantiate based on the underlying data,
    /// the particular delta might be ignored, overridden, or invalid.
    /// It is simpler to treat all changes identically, and focus on 
    /// making the common base case fast, rather than have complicated
    /// differential update logic.  It also vastly simplifies the
    /// language of invalidation.
    struct Entry {
        using BoundType = pxr::SdfChangeList::Entry;

        /// Return the iterator in infoChanged whose first element is \p key, or
        /// infoChanged.end() if there is no such element.
        const std::pair<pxrInternal_v0_21__pxrReserved__::TfToken, std::pair<pxrInternal_v0_21__pxrReserved__::VtValue, pxrInternal_v0_21__pxrReserved__::VtValue> >* FindInfoChange(const pxr::TfToken& key) const;

        /// Return true if this entry has an info change for \p key, false
        /// otherwise.
        bool HasInfoChange(const pxr::TfToken& key) const;

        Entry(const pxr::SdfChangeList::Entry& );

        Entry(pxr::SdfChangeList::Entry&& ) CPPMM_IGNORE;

        pxr::SdfChangeList::Entry& operator=(const pxr::SdfChangeList::Entry& );

        pxr::SdfChangeList::Entry& operator=(pxr::SdfChangeList::Entry&& ) CPPMM_IGNORE;

        ~Entry();

        Entry();


        struct _Flags {
            using BoundType = pxr::SdfChangeList::Entry::_Flags;

            _Flags();

            _Flags(const pxr::SdfChangeList::Entry::_Flags& );

            _Flags(pxr::SdfChangeList::Entry::_Flags&& ) CPPMM_IGNORE;

            ~_Flags();

            pxr::SdfChangeList::Entry::_Flags& operator=(const pxr::SdfChangeList::Entry::_Flags& );

            pxr::SdfChangeList::Entry::_Flags& operator=(pxr::SdfChangeList::Entry::_Flags&& ) CPPMM_IGNORE;

        } CPPMM_OPAQUEPTR; // struct _Flags

    } CPPMM_OPAQUEPTR; // struct Entry

} CPPMM_OPAQUEPTR; // struct SdfChangeList


    using SdfLayerChangeListVec = pxr::SdfLayerChangeListVec;


std::ostream& operator<<(std::ostream& , const pxr::SdfChangeList& );


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
