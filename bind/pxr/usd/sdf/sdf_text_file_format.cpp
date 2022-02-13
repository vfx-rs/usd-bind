#if 0
#include <pxr/usd/sdf/textFileFormat.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfTextFileFormat
/// 
/// Sdf text file format
struct SdfTextFileFormat {
    using BoundType = pxr::SdfTextFileFormat;

    /// Return the current reference count of this object.
    size_t GetCurrentCount() const;

    /// Return true if only one \c TfRefPtr points to this object.
    bool IsUnique() const;

    const pxr::TfRefCount& GetRefCount() const;

    void SetShouldInvokeUniqueChangedListener(bool shouldCall);

    static void SetUniqueChangedListener(pxr::TfRefBase::UniqueChangedListener listener);

    const pxr::TfWeakBase& __GetTfWeakBase__() const;

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

    /// Returns the schema for this format.
    const pxr::SdfSchemaBase& GetSchema() const;

    /// Returns the format identifier.
    const pxr::TfToken& GetFormatId() const;

    /// Returns the target for this file format.
    const pxr::TfToken& GetTarget() const;

    /// Returns the cookie to be used when writing files with this format.
    const std::string& GetFileCookie() const;

    /// Returns the current version of this file format.
    const pxr::TfToken& GetVersionString() const;

    /// Returns true if this file format is the primary format for the 
    /// extensions it handles.
    bool IsPrimaryFormatForExtensions() const;

    /// Returns a list of extensions that this format supports.
    const std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >& GetFileExtensions() const;

    /// Returns the primary file extension for this format. This is the
    /// extension that is reported for layers using this file format.
    const std::string& GetPrimaryFileExtension() const;

    /// Returns true if \p extension matches one of the extensions returned by
    /// GetFileExtensions.
    bool IsSupportedExtension(const std::string& extension) const;

    /// Returns true if this file format is a package containing other
    /// assets.
    bool IsPackage() const;

    /// Returns the path of the "root" layer contained in the package
    /// layer at \p resolvedPath produced by this file format. If this 
    /// file format is not a package, returns the empty string.
    /// 
    /// The package root layer is the layer in the package layer that 
    /// is used when that package is opened via SdfLayer.
    std::string GetPackageRootLayerPath(const std::string& resolvedPath) const;

    /// Returns the FileFormatArguments that correspond to the default behavior
    /// of this file format when no FileFormatArguments are passed to NewLayer
    /// or InitData.
    pxr::SdfFileFormat::FileFormatArguments GetDefaultFileFormatArguments() const;

    /// This method allows the file format to bind to whatever data container is
    /// appropriate. 
    /// 
    /// Returns a shared pointer to an SdfAbstractData implementation.
    pxr::SdfAbstractDataRefPtr InitData(const pxr::SdfFileFormat::FileFormatArguments& args) const;

    /// Instantiate a layer.
    pxr::SdfLayerRefPtr NewLayer(const pxr::SdfFileFormatConstPtr& fileFormat, const std::string& identifier, const std::string& realPath, const pxr::ArAssetInfo& assetInfo, const pxr::SdfFileFormat::FileFormatArguments& args) const;

    /// Return true if this file format prefers to skip reloading anonymous
    /// layers.
    bool ShouldSkipAnonymousReload() const;

    /// Returns true if anonymous layer identifiers should be passed to Read 
    /// when a layer is opened or reloaded.
    /// 
    /// Anonymous layers will not have an asset backing and thus for most
    /// file formats there is nothing that can be read for an anonymous layer. 
    /// However, there are file formats that use Read to generate dynamic layer 
    /// content without reading any data from the resolved asset associated with
    /// the layer's identifier. 
    /// 
    /// For these types of file formats it is useful to be able to open 
    /// anonymous layers and allow Read to populate them to avoid requiring a
    /// placeholder asset to exist just so Read can populate the layer.
    bool ShouldReadAnonymousLayers() const;

    /// Returns true if \p file can be read by this format.
    bool CanRead(const std::string& file) const;

    /// Reads scene description from the asset specified by \p resolvedPath
    /// into the layer \p layer.
    /// 
    /// \p metadataOnly is a flag that asks for only the layer metadata
    /// to be read in, which can be much faster if that is all that is
    /// required.  Note that this is just a hint: some FileFormat readers
    /// may disregard this flag and still fully populate the layer contents.
    /// 
    /// Returns true if the asset is successfully read into \p layer,
    /// false otherwise.
    bool Read(pxr::SdfLayer* layer, const std::string& resolvedPath, bool metadataOnly) const;

    /// Writes the content in \p layer into the file at \p filePath. If the
    /// content is successfully written, this method returns true. Otherwise,
    /// false is returned and errors are posted. The default implementation
    /// returns false.
    bool WriteToFile(const pxr::SdfLayer& layer, const std::string& filePath, const std::string& comment, const pxr::SdfFileFormat::FileFormatArguments& args) const;

    /// Reads data in the string \p str into the layer \p layer. If
    /// the file is successfully read, this method returns true. Otherwise,
    /// false is returned and errors are posted.
    bool ReadFromString(pxr::SdfLayer* layer, const std::string& str) const;

    /// Write the provided \p spec to \p out indented \p indent levels.
    bool WriteToStream(const pxr::SdfSpecHandle& spec, std::ostream& out, size_t indent) const;

    /// Writes the content in \p layer to the string \p str. This function
    /// should write a textual representation of \p layer to the stream
    /// that can be read back in via ReadFromString.
    bool WriteToString(const pxr::SdfLayer& layer, std::string* str, const std::string& comment) const;

    /// Returns the set of resolved paths to external asset file dependencies 
    /// for the given \p layer. These are additional dependencies, specific to 
    /// the file format, that are needed when generating the layer's contents
    /// and would not otherwise be discoverable through composition dependencies
    /// (i.e. sublayers, references, and payloads). 
    /// 
    /// The default implementation returns an empty set. Derived file formats 
    /// that depend on external assets to read and generate layer content 
    /// should implement this function to return the external asset paths.
    /// 
    /// \sa SdfLayer::GetExternalAssetDependencies
    /// \sa SdfLayer::Reload
    std::set<std::__cxx11::basic_string<char>, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::__cxx11::basic_string<char> > > GetExternalAssetDependencies(const pxr::SdfLayer& layer) const;

    /// Returns the file extension for path or file name \p s, without the
    /// leading dot character.
    static std::string GetFileExtension(const std::string& s);

    /// Returns a set containing the extension(s) corresponding to 
    /// all registered file formats.
    static std::set<std::__cxx11::basic_string<char>, std::less<std::__cxx11::basic_string<char> >, std::allocator<std::__cxx11::basic_string<char> > > FindAllFileFormatExtensions();

    /// Returns the file format instance with the specified \p formatId
    /// identifier. If a format with a matching identifier is not found, this
    /// returns a null file format pointer.
    static pxr::SdfFileFormatConstPtr FindById(const pxr::TfToken& formatId);

    /// Returns the file format instance that supports the extension for
    /// \p path.  If a format with a matching extension is not found, this
    /// returns a null file format pointer.
    /// 
    /// An extension may be handled by multiple file formats, but each
    /// with a different target. In such cases, if no \p target is specified, 
    /// the file format that is registered as the primary plugin will be
    /// returned. Otherwise, the file format whose target matches \p target
    /// will be returned.
    static pxr::SdfFileFormatConstPtr FindByExtension(const std::string& path, const std::string& target);

    /// Returns a file format instance that supports the extension for \p
    /// path and whose target matches one of those specified by the given
    /// \p args. If the \p args specify no target, then the file format that is
    /// registered as the primary plugin will be returned. If a format with a
    /// matching extension is not found, this returns a null file format
    /// pointer.
    static pxr::SdfFileFormatConstPtr FindByExtension(const std::string& path, const pxr::SdfFileFormat::FileFormatArguments& args);

    SdfTextFileFormat(const pxr::SdfTextFileFormat& );

    pxr::SdfTextFileFormat& operator=(const pxr::SdfTextFileFormat& );

} CPPMM_OPAQUEPTR; // struct SdfTextFileFormat


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
