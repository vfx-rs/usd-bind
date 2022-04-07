#include <pxr/usd/sdf/mapEditor.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class Sdf_MapEditor
/// 
/// Interface for private implementations used by SdfMapEditProxy.
template <class MapType>
struct Sdf_MapEditor {
    using BoundType = pxr::Sdf_MapEditor<MapType>;
    using key_type = typename pxr::Sdf_MapEditor<MapType>::key_type;
    using mapped_type = typename pxr::Sdf_MapEditor<MapType>::mapped_type;
    using value_type = typename pxr::Sdf_MapEditor<MapType>::value_type;

    ~Sdf_MapEditor<MapType>();

    /// Returns a string describing the location of the map being edited.
    /// This is used for debugging and error messages.
    std::string GetLocation() const;

    /// Returns owner of the map being edited.
    pxr::SdfSpecHandle GetOwner() const;

    /// Returns true if the map being edited is expired, false otherwise.
    bool IsExpired() const;

    /// Returns const pointer to map being edited.
    const MapType* GetData() const;

    /// Returns non-const pointer to map being edited. 
    /// All edits to the map should be done using the editing functions below.
    /// This function is primarily here for convenience. Ideally, only the
    /// const version of this function would exist.
    MapType* GetData();

    /// \name Editing Operations
    /// @{
    void Copy(const MapType& other);

    void Set(const key_type& key, const mapped_type& other);

#if 0
    UNKNOWN Insert(const pxr::Sdf_MapEditor::value_type& value);
#endif

    bool Erase(const key_type& key);

    pxr::SdfAllowed IsValidKey(const key_type& key) const;

    pxr::SdfAllowed IsValidValue(const mapped_type& value) const;

} CPPMM_OPAQUEPTR; // struct Sdf_MapEditor

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_MapEditor<int>;
// using Sdf_MapEditorInt = pxr::Sdf_MapEditor<int>;

#if 0
template <typename T>
UNKNOWN Sdf_CreateMapEditor(const pxr::SdfSpecHandle& owner, const pxr::TfToken& field);
#endif


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_MapEditor<int>;
