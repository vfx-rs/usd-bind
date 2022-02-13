#if 0
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

    void Set(const pxr::Sdf_MapEditor::key_type& key, const pxr::Sdf_MapEditor::mapped_type& other);

    UNKNOWN Insert(const pxr::Sdf_MapEditor::value_type& value);

    bool Erase(const pxr::Sdf_MapEditor::key_type& key);

    pxr::SdfAllowed IsValidKey(const pxr::Sdf_MapEditor::key_type& key) const;

    pxr::SdfAllowed IsValidValue(const pxr::Sdf_MapEditor::mapped_type& value) const;

} CPPMM_OPAQUEPTR; // struct Sdf_MapEditor

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_MapEditor<int>;
// using Sdf_MapEditorInt = pxr::Sdf_MapEditor<int>;


template <typename T>
UNKNOWN Sdf_CreateMapEditor(const pxr::SdfSpecHandle& owner, const pxr::TfToken& field);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_MapEditor<int>;
#endif
