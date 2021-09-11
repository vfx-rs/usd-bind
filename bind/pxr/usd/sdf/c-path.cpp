#include <pxr/usd/sdf/path.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/*
/// \class SdfPathAncestorsRange
/// 
/// Range representing a path and ancestors, and providing methods for
/// iterating over them.
/// 
/// An ancestor range represents a path and all of its ancestors ordered from
/// nearest to furthest (root-most).
/// For example, given a path like `/a/b.prop`, the range represents paths
/// `/a/b.prop`, `/a/b` and `/a`, in that order.
/// A range accepts relative paths as well: For path `a/b.prop`, the range
/// represents paths 'a/b.prop`, `a/b` and `a`.
/// If a path contains parent path elements, (`..`), those elements are treated
/// as elements of the range. For instance, given path `../a/b`, the range
/// represents paths `../a/b`, `../a` and `..`.
/// This represents the same of set of `prefix` paths as SdfPath::GetPrefixes,
/// but in reverse order.
struct SdfPathAncestorsRange {
    using BoundType = pxr::SdfPathAncestorsRange;

    SdfPathAncestorsRange(const pxr::SdfPath& path);

    const pxr::SdfPath& GetPath() const;

    pxr::SdfPathAncestorsRange::iterator begin() const;

    pxr::SdfPathAncestorsRange::iterator end() const;


    struct iterator {
        using BoundType = pxr::SdfPathAncestorsRange::iterator;

        iterator(const pxr::SdfPath& path);

        iterator();

        pxr::SdfPathAncestorsRange::iterator& operator++();

        const pxr::SdfPath& operator*() const;

        const pxr::SdfPath* operator->() const;

        bool operator==(const pxr::SdfPathAncestorsRange::iterator& o) const;

        bool operator!=(const pxr::SdfPathAncestorsRange::iterator& o) const;

        iterator(const pxr::SdfPathAncestorsRange::iterator& );

        iterator(pxr::SdfPathAncestorsRange::iterator&& ) CPPMM_IGNORE;

        ~iterator();

    } CPPMM_OPAQUEPTR; // struct iterator

} CPPMM_OPAQUEPTR; // struct SdfPathAncestorsRange


    using Sdf_PathNodeConstRefPtr = pxr::Sdf_PathNodeConstRefPtr;


void intrusive_ptr_add_ref(const pxr::Sdf_PathNode* );


void intrusive_ptr_release(const pxr::Sdf_PathNode* );


    using Sdf_PathPrimPartPool = pxr::Sdf_PathPrimPartPool;


    using Sdf_PathPropPartPool = pxr::Sdf_PathPropPartPool;


    using Sdf_PathPrimHandle = pxr::Sdf_PathPrimHandle;


    using Sdf_PathPropHandle = pxr::Sdf_PathPropHandle;


template <class Handle, class Counted, class PathNode>
struct Sdf_PathNodeHandleImpl {
    using BoundType = pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>;

    Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>();

    Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>(const pxr::Sdf_PathNode* p, bool add_ref);

    Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>(Handle h, bool add_ref);

    Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>(const pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& rhs);

    ~Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>();

    pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& operator=(const pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& rhs);

    Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>(pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>&& rhs) CPPMM_IGNORE;

    pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& operator=(pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>&& rhs) CPPMM_IGNORE;

    pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& operator=(const pxr::Sdf_PathNode* rhs);

    void reset();

    const pxr::Sdf_PathNode* get() const;

    const pxr::Sdf_PathNode& operator*() const;

    const pxr::Sdf_PathNode* operator->() const;

    operator bool() const;

    void swap(pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& rhs);

    bool operator==(const pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& rhs) const;

    bool operator!=(const pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& rhs) const;

    bool operator<(const pxr::Sdf_PathNodeHandleImpl<Handle, Counted, PathNode>& rhs) const;

} CPPMM_OPAQUEPTR; // struct Sdf_PathNodeHandleImpl

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_PathNodeHandleImpl<int, int, int>;
// using Sdf_PathNodeHandleImplInt = pxr::Sdf_PathNodeHandleImpl<int, int, int>;


    using Sdf_PathPrimNodeHandle = pxr::Sdf_PathPrimNodeHandle;


    using Sdf_PathPropNodeHandle = pxr::Sdf_PathPropNodeHandle;
*/


/// \class SdfPath 
/// 
/// A path value used to locate objects in layers or scenegraphs.
/// 
/// \section sec_SdfPath_Overview Overview
/// 
/// SdfPath is used in several ways:
/// \li As a storage key for addressing and accessing values held in a SdfLayer
/// \li As a namespace identity for scenegraph objects
/// \li As a way to refer to other scenegraph objects through relative paths
/// 
/// The paths represented by an SdfPath class may be either relative or
/// absolute.  Relative paths are relative to the prim object that contains them
/// (that is, if an SdfRelationshipSpec target is relative, it is relative to
/// the SdfPrimSpec object that owns the SdfRelationshipSpec object).
/// 
/// SdfPath objects can be readily created from and converted back to strings,
/// but as SdfPath objects, they have behaviors that make it easy and efficient
/// to work with them. The SdfPath class provides a full range of methods for
/// manipulating scene paths by appending a namespace child, appending a
/// relationship target, getting the parent path,
/// and so on.  Since the SdfPath class uses a node-based representation
/// internally, you should use the editing functions rather than converting to
/// and from strings if possible.
/// 
/// \section sec_SdfPath_Syntax Path Syntax
/// 
/// Like a filesystem path, an SdfPath is conceptually just a sequence of
/// path components.  Unlike a filesystem path, each component has a type,
/// and the type is indicated by the syntax.
/// 
/// Two separators are used between parts of a path. A slash ("/") following an
/// identifier is used to introduce a namespace child. A period (".") following
/// an identifier is used to introduce a property.  A property may also have
/// several non-sequential colons (':') in its name to provide a rudimentary
/// namespace within properties but may not end or begin with a colon.
/// 
/// A leading slash in the string representation of an SdfPath object indicates
/// an absolute path.  Two adjacent periods indicate the parent namespace.
/// 
/// Brackets ("[" and "]") are used to indicate relationship target paths for
/// relational attributes.
/// 
/// The first part in a path is assumed to be a namespace child unless
/// it is preceded by a period.  That means:
/// \li <c>/Foo</c> is an absolute path specifying the root prim Foo.
/// \li <c>/Foo/Bar</c> is an absolute path specifying namespace child Bar
///     of root prim Foo.
/// \li <c>/Foo/Bar.baz</c> is an absolute path specifying property \c baz of
///     namespace child Bar of root prim Foo.
/// \li <c>Foo</c> is a relative path specifying namespace child Foo of
///     the current prim.
/// \li <c>Foo/Bar</c> is a relative path specifying namespace child Bar of
///     namespace child Foo of the current prim.
/// \li <c>Foo/Bar.baz</c> is a relative path specifying property \c baz of
///     namespace child Bar of namespace child Foo of the current prim.
/// \li <c>.foo</c> is a relative path specifying the property \c foo of the
///     current prim.
/// \li <c>/Foo.bar[/Foo.baz].attrib</c> is a relational attribute path. The
///     relationship <c>/Foo.bar</c> has a target <c>/Foo.baz</c>. There is a
///     relational attribute \c attrib on that relationship-&gt;target pair.
/// 
/// \section sec_SdfPath_ThreadSafety A Note on Thread-Safety
/// 
/// SdfPath is strongly thread-safe, in the sense that zero additional
/// synchronization is required between threads creating or using SdfPath
/// values. Just like TfToken, SdfPath values are immutable. Internally,
/// SdfPath uses a global prefix tree to efficiently share representations
/// of paths, and provide fast equality/hashing operations, but
/// modifications to this table are internally synchronized. Consequently,
/// as with TfToken, for best performance it is important to minimize
/// the number of values created (since it requires synchronized access to
/// this table) or copied (since it requires atomic ref-counting operations).
struct SdfPath {
    using BoundType = pxr::SdfPath;

    /// The empty path value, equivalent to SdfPath().
    static const pxr::SdfPath& EmptyPath();

    /// The absolute path representing the top of the
    /// namespace hierarchy.
    static const pxr::SdfPath& AbsoluteRootPath();

    /// The relative path representing "self".
    static const pxr::SdfPath& ReflexiveRelativePath();

    /// Constructs the default, empty path.
    SdfPath();

    /// default destructor
    ~SdfPath();

    /// Creates a path from the given string.
    /// 
    /// If the given string is not a well-formed path, this will raise
    /// a Tf error.  Note that passing an empty std::string() will also
    /// raise an error; the correct way to get the empty path is SdfPath().
    /// 
    /// Internal dot-dots will be resolved by removing the first dot-dot,
    /// the element preceding it, and repeating until no internal dot-dots
    /// remain.
    /// 
    /// Note that most often new paths are expected to be created by
    /// asking existing paths to return modified versions of themselves.
    SdfPath(const std::string& path) CPPMM_RENAME(from_string);

    SdfPath(const pxr::SdfPath& );

    SdfPath(pxr::SdfPath&& ) CPPMM_IGNORE;

    /// Returns the number of path elements in this path.
    size_t GetPathElementCount() const;

    /// Returns whether the path is absolute.
    bool IsAbsolutePath() const;

    /// Return true if this path is the AbsoluteRootPath().
    bool IsAbsoluteRootPath() const;

    /// Returns whether the path identifies a prim.
    bool IsPrimPath() const;

    /// Returns whether the path identifies a prim or the absolute root.
    bool IsAbsoluteRootOrPrimPath() const;

    /// Returns whether the path identifies a root prim.
    /// 
    /// the path must be absolute and have a single element
    /// (for example <c>/foo</c>).
    bool IsRootPrimPath() const;

    /// Returns whether the path identifies a property.
    /// 
    /// A relational attribute is considered to be a property, so this
    /// method will return true for relational attributes as well
    /// as properties of prims.
    bool IsPropertyPath() const;

    /// Returns whether the path identifies a prim's property.
    /// 
    /// A relational attribute is not a prim property.
    bool IsPrimPropertyPath() const;

    /// Returns whether the path identifies a namespaced property.
    /// 
    /// A namespaced property has colon embedded in its name.
    bool IsNamespacedPropertyPath() const;

    /// Returns whether the path identifies a variant selection for a
    /// prim.
    bool IsPrimVariantSelectionPath() const;

    /// Return true if this path is a prim path or is a prim variant
    /// selection path.
    bool IsPrimOrPrimVariantSelectionPath() const;

    /// Returns whether the path or any of its parent paths identifies
    /// a variant selection for a prim.
    bool ContainsPrimVariantSelection() const;

    /// Return true if this path contains any property elements, false
    /// otherwise.  A false return indicates a prim-like path, specifically a
    /// root path, a prim path, or a prim variant selection path.  A true return
    /// indicates a property-like path: a prim property path, a target path, a
    /// relational attribute path, etc.
    bool ContainsPropertyElements() const;

    /// Return true if this path is or has a prefix that's a target path or a
    /// mapper path.
    bool ContainsTargetPath() const;

    /// Returns whether the path identifies a relational attribute.
    /// 
    /// If this is true, IsPropertyPath() will also be true.
    bool IsRelationalAttributePath() const;

    /// Returns whether the path identifies a relationship or
    /// connection target.
    bool IsTargetPath() const;

    /// Returns whether the path identifies a connection mapper.
    bool IsMapperPath() const;

    /// Returns whether the path identifies a connection mapper arg.
    bool IsMapperArgPath() const;

    /// Returns whether the path identifies a connection expression.
    bool IsExpressionPath() const;

    /// Returns true if this is the empty path (SdfPath::EmptyPath()).
    bool IsEmpty() const;

    /// Returns the string representation of this path as a c string.
    const char* GetText() const;

    /// Returns the string representation of this path as a TfToken.
    const pxr::TfToken& GetToken() const;

#if 0
    /// Returns the string representation of this path as a std::string.
    const std::string& GetString() const;

    /// Returns the prefix paths of this path.
    /// 
    /// Prefixes are returned in order of shortest to longest.  The path
    /// itself is returned as the last prefix.
    /// Note that if the prefix order does not need to be from shortest to
    /// longest, it is more efficient to use GetAncestorsRange, which
    /// produces an equivalent set of paths, ordered from longest to shortest.
    pxr::SdfPathVector GetPrefixes() const;

    /// Fills prefixes with prefixes of this path.
    /// 
    /// This avoids copy constructing the return value.
    /// 
    /// Prefixes are returned in order of shortest to longest.  The path
    /// itself is returned as the last prefix.
    /// Note that if the prefix order does not need to be from shortest to
    /// longest, it is more efficient to use GetAncestorsRange, which
    /// produces an equivalent set of paths, ordered from longest to shortest.
    void GetPrefixes(pxr::SdfPathVector* prefixes) const;

    /// Return a range for iterating over the ancestors of this path.
    /// 
    /// The range provides iteration over the prefixes of a path, ordered
    /// from longest to shortest (the opposite of the order of the prefixes
    /// returned by GetPrefixes).
    pxr::SdfPathAncestorsRange GetAncestorsRange() const;

    /// Returns the name of the prim, property or relational
    /// attribute identified by the path.
    /// 
    /// Returns EmptyPath if this path is a target or mapper path.
    /// 
    /// <ul>
    ///     <li>Returns "" for EmptyPath.</li>
    ///     <li>Returns "." for ReflexiveRelativePath.</li>
    ///     <li>Returns ".." for a path ending in ParentPathElement.</li>
    /// </ul>
    const std::string& GetName() const;

    /// Returns the name of the prim, property or relational
    /// attribute identified by the path, as a token.
    const pxr::TfToken& GetNameToken() const;

    /// Returns an ascii representation of the "terminal" element
    /// of this path, which can be used to reconstruct the path using
    /// \c AppendElementString() on its parent.
    /// 
    /// EmptyPath(), AbsoluteRootPath(), and ReflexiveRelativePath() are
    /// \em not considered elements (one of the defining properties of
    /// elements is that they have a parent), so \c GetElementString() will
    /// return the empty string for these paths.
    /// 
    /// Unlike \c GetName() and \c GetTargetPath(), which provide you "some"
    /// information about the terminal element, this provides a complete
    /// representation of the element, for all element types.
    /// 
    /// Also note that whereas \c GetName(), \c GetNameToken(), \c GetText(),
    /// \c GetString(), and \c GetTargetPath() return cached results, 
    /// \c GetElementString() always performs some amount of string
    /// manipulation, which you should keep in mind if performance is a concern.
    std::string GetElementString() const;

    /// Like GetElementString() but return the value as a TfToken.
    pxr::TfToken GetElementToken() const;

    /// Return a copy of this path with its final component changed to
    /// \a newName.  This path must be a prim or property path.
    /// 
    /// This method is shorthand for path.GetParentPath().AppendChild(newName)
    /// for prim paths, path.GetParentPath().AppendProperty(newName) for
    /// prim property paths, and
    /// path.GetParentPath().AppendRelationalAttribute(newName) for relational
    /// attribute paths.
    /// 
    /// Note that only the final path component is ever changed.  If the name of
    /// the final path component appears elsewhere in the path, it will not be
    /// modified.
    /// 
    /// Some examples:
    /// 
    /// ReplaceName('/chars/MeridaGroup', 'AngusGroup') -> '/chars/AngusGroup'
    /// ReplaceName('/Merida.tx', 'ty') -> '/Merida.ty'
    /// ReplaceName('/Merida.tx[targ].tx', 'ty') -> '/Merida.tx[targ].ty'
    pxr::SdfPath ReplaceName(const pxr::TfToken& newName) const;

    /// Returns the relational attribute or mapper target path
    /// for this path.
    /// 
    /// Returns EmptyPath if this is not a target, relational attribute or
    /// mapper path.
    /// 
    /// Note that it is possible for a path to have multiple "target" paths.
    /// For example a path that identifies a connection target for a
    /// relational attribute includes the target of the connection as well
    /// as the target of the relational attribute.  In these cases, the
    /// "deepest" or right-most target path will be returned (the connection
    /// target in this example).
    const pxr::SdfPath& GetTargetPath() const;

    /// Returns all the relationship target or connection target
    /// paths contained in this path, and recursively all the target paths
    /// contained in those target paths in reverse depth-first order.
    /// 
    /// For example, given the path: '/A/B.a[/C/D.a[/E/F.a]].a[/A/B.a[/C/D.a]]'
    /// this method produces: '/A/B.a[/C/D.a]', '/C/D.a', '/C/D.a[/E/F.a]',
    /// '/E/F.a'
    void GetAllTargetPathsRecursively(pxr::SdfPathVector* result) const;

    /// Returns the variant selection for this path, if this is a variant
    /// selection path.
    /// Returns a pair of empty strings if this path is not a variant
    /// selection path.
    std::pair<std::__cxx11::basic_string<char>, std::__cxx11::basic_string<char> > GetVariantSelection() const;

    /// Return true if both this path and \a prefix are not the empty
    /// path and this path has \a prefix as a prefix.  Return false otherwise.
    bool HasPrefix(const pxr::SdfPath& prefix) const;

    /// Return the path that identifies this path's namespace parent.
    /// 
    /// For a prim path (like '/foo/bar'), return the prim's parent's path
    /// ('/foo').  For a prim property path (like '/foo/bar.property'), return
    /// the prim's path ('/foo/bar').  For a target path (like
    /// '/foo/bar.property[/target]') return the property path
    /// ('/foo/bar.property').  For a relational attribute or mapper path (like
    /// '/foo/bar.property[/target].relAttr') return the relationship target's
    /// path ('/foo/bar.property[/target]').  For a prim variant selection path
    /// (like '/foo/bar{var=sel}') return the prim path ('/foo/bar').  For a
    /// root prim path (like '/rootPrim'), return AbsoluteRootPath() ('/').  For
    /// a single element relative prim path (like 'relativePrim'), return
    /// ReflexiveRelativePath() ('.').  For ReflexiveRelativePath(), return the
    /// relative parent path ('..').
    /// 
    /// Note that the parent path of a relative parent path ('..') is a relative
    /// grandparent path ('../..').  Use caution writing loops that walk to
    /// parent paths since relative paths have infinitely many ancestors.  To
    /// more safely traverse ancestor paths, consider iterating over an
    /// SdfPathAncestorsRange instead, as returend by GetAncestorsRange().
    pxr::SdfPath GetParentPath() const;

    /// Creates a path by stripping all relational attributes, targets,
    /// properties, and variant selections from the leafmost prim path, leaving
    /// the nearest path for which \a IsPrimPath() returns true.
    /// 
    /// See \a GetPrimOrPrimVariantSelectionPath also.
    /// 
    /// If the path is already a prim path, the same path is returned.
    pxr::SdfPath GetPrimPath() const;

    /// Creates a path by stripping all relational attributes, targets,
    /// and properties, leaving the nearest path for which
    /// \a IsPrimOrPrimVariantSelectionPath() returns true.
    /// 
    /// See \a GetPrimPath also.
    /// 
    /// If the path is already a prim or a prim variant selection path, the same
    /// path is returned.
    pxr::SdfPath GetPrimOrPrimVariantSelectionPath() const;

    /// Creates a path by stripping all properties and relational
    /// attributes from this path, leaving the path to the containing prim.
    /// 
    /// If the path is already a prim or absolute root path, the same
    /// path is returned.
    pxr::SdfPath GetAbsoluteRootOrPrimPath() const;

    /// Create a path by stripping all variant selections from all
    /// components of this path, leaving a path with no embedded variant
    /// selections.
    pxr::SdfPath StripAllVariantSelections() const;

    /// Creates a path by appending a given relative path to this path.
    /// 
    /// If the newSuffix is a prim path, then this path must be a prim path
    /// or a root path.
    /// 
    /// If the newSuffix is a prim property path, then this path must be
    /// a prim path or the ReflexiveRelativePath.
    pxr::SdfPath AppendPath(const pxr::SdfPath& newSuffix) const;

    /// Creates a path by appending an element for \p childName
    /// to this path.
    /// 
    /// This path must be a prim path, the AbsoluteRootPath
    /// or the ReflexiveRelativePath.
    pxr::SdfPath AppendChild(const pxr::TfToken& childName) const;

    /// Creates a path by appending an element for \p propName
    /// to this path.
    /// 
    /// This path must be a prim path or the ReflexiveRelativePath.
    pxr::SdfPath AppendProperty(const pxr::TfToken& propName) const;

    /// Creates a path by appending an element for \p variantSet
    /// and \p variant to this path.
    /// 
    /// This path must be a prim path.
    pxr::SdfPath AppendVariantSelection(const std::string& variantSet, const std::string& variant) const;

    /// Creates a path by appending an element for
    /// \p targetPath.
    /// 
    /// This path must be a prim property or relational attribute path.
    pxr::SdfPath AppendTarget(const pxr::SdfPath& targetPath) const;

    /// Creates a path by appending an element for
    /// \p attrName to this path.
    /// 
    /// This path must be a target path.
    pxr::SdfPath AppendRelationalAttribute(const pxr::TfToken& attrName) const;

    /// Replaces the relational attribute's target path
    /// 
    /// The path must be a relational attribute path.
    pxr::SdfPath ReplaceTargetPath(const pxr::SdfPath& newTargetPath) const;

    /// Creates a path by appending a mapper element for
    /// \p targetPath.
    /// 
    /// This path must be a prim property or relational attribute path.
    pxr::SdfPath AppendMapper(const pxr::SdfPath& targetPath) const;

    /// Creates a path by appending an element for
    /// \p argName.
    /// 
    /// This path must be a mapper path.
    pxr::SdfPath AppendMapperArg(const pxr::TfToken& argName) const;

    /// Creates a path by appending an expression element.
    /// 
    /// This path must be a prim property or relational attribute path.
    pxr::SdfPath AppendExpression() const;

    /// Creates a path by extracting and appending an element
    /// from the given ascii element encoding.
    /// 
    /// Attempting to append a root or empty path (or malformed path)
    /// or attempting to append \em to the EmptyPath will raise an
    /// error and return the EmptyPath.
    /// 
    /// May also fail and return EmptyPath if this path's type cannot
    /// possess a child of the type encoded in \p element.
    pxr::SdfPath AppendElementString(const std::string& element) const;

    /// Like AppendElementString() but take the element as a TfToken.
    pxr::SdfPath AppendElementToken(const pxr::TfToken& elementTok) const;

    /// Returns a path with all occurrences of the prefix path
    /// \p oldPrefix replaced with the prefix path \p newPrefix.
    /// 
    /// If fixTargetPaths is true, any embedded target paths will also
    /// have their paths replaced.  This is the default.
    /// 
    /// If this is not a target, relational attribute or mapper path this
    /// will do zero or one path prefix replacements, if not the number of
    /// replacements can be greater than one.
    pxr::SdfPath ReplacePrefix(const pxr::SdfPath& oldPrefix, const pxr::SdfPath& newPrefix, bool fixTargetPaths) const;

    /// Returns a path with maximal length that is a prefix path of
    /// both this path and \p path.
    pxr::SdfPath GetCommonPrefix(const pxr::SdfPath& path) const;

    /// Find and remove the longest common suffix from two paths.
    /// 
    /// Returns this path and \p otherPath with the longest common suffix
    /// removed (first and second, respectively).  If the two paths have no
    /// common suffix then the paths are returned as-is.  If the paths are
    /// equal then this returns empty paths for relative paths and absolute
    /// roots for absolute paths.  The paths need not be the same length.
    /// 
    /// If \p stopAtRootPrim is \c true then neither returned path will be
    /// the root path.  That, in turn, means that some common suffixes will
    /// not be removed.  For example, if \p stopAtRootPrim is \c true then
    /// the paths /A/B and /B will be returned as is.  Were it \c false
    /// then the result would be /A and /.  Similarly paths /A/B/C and
    /// /B/C would return /A/B and /B if \p stopAtRootPrim is \c true but
    /// /A and / if it's \c false.
    std::pair<pxrInternal_v0_20__pxrReserved__::SdfPath, pxrInternal_v0_20__pxrReserved__::SdfPath> RemoveCommonSuffix(const pxr::SdfPath& otherPath, bool stopAtRootPrim) const;

    /// Returns the absolute form of this path using \p anchor 
    /// as the relative basis.
    /// 
    /// \p anchor must be an absolute prim path.
    /// 
    /// If this path is a relative path, resolve it using \p anchor as the
    /// relative basis.
    /// 
    /// If this path is already an absolute path, just return a copy.
    pxr::SdfPath MakeAbsolutePath(const pxr::SdfPath& anchor) const;

    /// Returns the relative form of this path using \p anchor
    /// as the relative basis.
    /// 
    /// \p anchor must be an absolute prim path.
    /// 
    /// If this path is an absolute path, return the corresponding relative path
    /// that is relative to the absolute path given by \p anchor.
    /// 
    /// If this path is a relative path, return the optimal relative
    /// path to the absolute path given by \p anchor.  (The optimal
    /// relative path from a given prim path is the relative path
    /// with the least leading dot-dots.
    pxr::SdfPath MakeRelativePath(const pxr::SdfPath& anchor) const;

    /// Returns whether \p name is a legal identifier for any
    /// path component.
    static bool IsValidIdentifier(const std::string& name);

    /// Returns whether \p name is a legal namespaced identifier.
    /// This returns \c true if IsValidIdentifier() does.
    static bool IsValidNamespacedIdentifier(const std::string& name);

    /// Tokenizes \p name by the namespace delimiter.
    /// Returns the empty vector if \p name is not a valid namespaced
    /// identifier.
    static std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > > TokenizeIdentifier(const std::string& name);

    /// Tokenizes \p name by the namespace delimiter.
    /// Returns the empty vector if \p name is not a valid namespaced
    /// identifier.
    static pxr::TfTokenVector TokenizeIdentifierAsTokens(const std::string& name);

    /// Join \p names into a single identifier using the namespace delimiter.
    /// Any empty strings present in \p names are ignored when joining.
    static std::string JoinIdentifier(const std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >& names);

    /// Join \p names into a single identifier using the namespace delimiter.
    /// Any empty strings present in \p names are ignored when joining.
    static std::string JoinIdentifier(const pxr::TfTokenVector& names);

    /// Join \p lhs and \p rhs into a single identifier using the
    /// namespace delimiter.
    /// Returns \p lhs if \p rhs is empty and vice verse.
    /// Returns an empty string if both \p lhs and \p rhs are empty.
    static std::string JoinIdentifier(const std::string& lhs, const std::string& rhs);

    /// Join \p lhs and \p rhs into a single identifier using the
    /// namespace delimiter.
    /// Returns \p lhs if \p rhs is empty and vice verse.
    /// Returns an empty string if both \p lhs and \p rhs are empty.
    static std::string JoinIdentifier(const pxr::TfToken& lhs, const pxr::TfToken& rhs);

    /// Returns \p name stripped of any namespaces.
    /// This does not check the validity of the name;  it just attempts
    /// to remove anything that looks like a namespace.
    static std::string StripNamespace(const std::string& name);

    /// Returns \p name stripped of any namespaces.
    /// This does not check the validity of the name;  it just attempts
    /// to remove anything that looks like a namespace.
    static pxr::TfToken StripNamespace(const pxr::TfToken& name);

    /// Returns (\p name, \c true) where \p name is stripped of the prefix
    /// specified by \p matchNamespace if \p name indeed starts with
    /// \p matchNamespace. Returns (\p name, \c false) otherwise, with \p name 
    /// unmodified.
    /// 
    /// This function deals with both the case where \p matchNamespace contains
    /// the trailing namespace delimiter ':' or not.
    static std::pair<std::__cxx11::basic_string<char>, _Bool> StripPrefixNamespace(const std::string& name, const std::string& matchNamespace);

    /// Return true if \p pathString is a valid path string, meaning that
    /// passing the string to the \a SdfPath constructor will result in a valid,
    /// non-empty SdfPath.  Otherwise, return false and if \p errMsg is not NULL,
    /// set the pointed-to string to the parse error.
    static bool IsValidPathString(const std::string& pathString, std::string* errMsg);

    /// Equality operator.
    /// (Boost provides inequality from this.)
    bool operator==(const pxr::SdfPath& rhs) const;

    /// Comparison operator.
    /// 
    /// This orders paths lexicographically, aka dictionary-style.
    bool operator<(const pxr::SdfPath& rhs) const;

    size_t GetHash() const;

    /// Given some vector of paths, get a vector of concise unambiguous
    /// relative paths.
    /// 
    /// GetConciseRelativePaths requires a vector of absolute paths. It
    /// finds a set of relative paths such that each relative path is
    /// unique.
    static pxr::SdfPathVector GetConciseRelativePaths(const pxr::SdfPathVector& paths);

    /// Remove all elements of \a paths that are prefixed by other
    /// elements in \a paths.  As a side-effect, the result is left in sorted
    /// order.
    static void RemoveDescendentPaths(pxr::SdfPathVector* paths);

    /// Remove all elements of \a paths that prefix other elements in
    /// \a paths.  As a side-effect, the result is left in sorted order.
    static void RemoveAncestorPaths(pxr::SdfPathVector* paths);

    pxr::SdfPath& operator=(const pxr::SdfPath& ) CPPMM_RENAME(op_assign);

    pxr::SdfPath& operator=(pxr::SdfPath&& ) CPPMM_IGNORE;

    ~SdfPath();


    struct Hash {
        using BoundType = pxr::SdfPath::Hash;

        size_t operator()(const pxr::SdfPath& path) const;

        Hash();

        Hash(const pxr::SdfPath::Hash& );

        Hash(pxr::SdfPath::Hash&& ) CPPMM_IGNORE;

        ~Hash();

    } CPPMM_OPAQUEPTR; // struct Hash


    struct FastLessThan {
        using BoundType = pxr::SdfPath::FastLessThan;

        bool operator()(const pxr::SdfPath& a, const pxr::SdfPath& b) const;

    } CPPMM_OPAQUEPTR; // struct FastLessThan

#endif

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND; // struct SdfPath


#if 0

    using SdfPathSet = pxr::SdfPathSet;


    using SdfPathVector = pxr::SdfPathVector;


size_t hash_value(const pxr::SdfPath& path);


/// Writes the string representation of \p path to \p out.
std::ostream& operator<<(std::ostream& out, const pxr::SdfPath& path);


struct Sdf_PathIdentity {
    using BoundType = pxr::Sdf_PathIdentity;

    const pxr::SdfPath& operator()(const pxr::SdfPath& arg) const;

} CPPMM_OPAQUEPTR; // struct Sdf_PathIdentity


/// Find the subrange of the sorted range [\a begin, \a end) that includes all
/// paths prefixed by \a path.  The input range must be ordered according to
/// SdfPath::operator<.  If your range's iterators' value_types are not SdfPath,
/// but you can obtain SdfPaths from them (e.g. map<SdfPath, X>::iterator), you
/// can pass a function to extract the path from the dereferenced iterator in
/// \p getPath.
template <typename ForwardIterator, typename GetPathFn>
UNKNOWN SdfPathFindPrefixedRange(ForwardIterator begin, ForwardIterator end, const pxr::SdfPath& prefix, const GetPathFn& getPath);


template <typename RandomAccessIterator, typename GetPathFn>
RandomAccessIterator Sdf_PathFindLongestPrefixImpl(RandomAccessIterator begin, RandomAccessIterator end, const pxr::SdfPath& path, bool strictPrefix, const GetPathFn& getPath);


/// Return an iterator to the element of [\a begin, \a end) that is the longest
/// prefix of the given path (including the path itself), if there is such an
/// element, otherwise \a end.  The input range must be ordered according to
/// SdfPath::operator<.  If your range's iterators' value_types are not SdfPath,
/// but you can obtain SdfPaths from them (e.g. vector<pair<SdfPath,
/// X>>::iterator), you can pass a function to extract the path from the
/// dereferenced iterator in \p getPath.
template <typename RandomAccessIterator, typename GetPathFn, typename >
RandomAccessIterator SdfPathFindLongestPrefix(RandomAccessIterator begin, RandomAccessIterator end, const pxr::SdfPath& path, const GetPathFn& getPath);


/// Return an iterator to the element of [\a begin, \a end) that is the longest
/// prefix of the given path (excluding the path itself), if there is such an
/// element, otherwise \a end.  The input range must be ordered according to
/// SdfPath::operator<.  If your range's iterators' value_types are not SdfPath,
/// but you can obtain SdfPaths from them (e.g. vector<pair<SdfPath,
/// X>>::iterator), you can pass a function to extract the path from the
/// dereferenced iterator in \p getPath.
template <typename RandomAccessIterator, typename GetPathFn, typename >
RandomAccessIterator SdfPathFindLongestStrictPrefix(RandomAccessIterator begin, RandomAccessIterator end, const pxr::SdfPath& path, const GetPathFn& getPath);


template <typename Iter, typename MapParam, typename GetPathFn>
Iter Sdf_PathFindLongestPrefixImpl(MapParam map, const pxr::SdfPath& path, bool strictPrefix, const GetPathFn& getPath);


/// Return an iterator pointing to the element of \a set whose key is the
/// longest prefix of the given path (including the path itself).  If there is
/// no such element, return \a set.end().
std::set::const_iterator SdfPathFindLongestPrefix(const std::set<pxrInternal_v0_20__pxrReserved__::SdfPath, std::less<pxrInternal_v0_20__pxrReserved__::SdfPath>, std::allocator<pxrInternal_v0_20__pxrReserved__::SdfPath> >& set, const pxr::SdfPath& path);


/// Return an iterator pointing to the element of \a map whose key is the
/// longest prefix of the given path (including the path itself).  If there is
/// no such element, return \a map.end().
template <typename T>
UNKNOWN SdfPathFindLongestPrefix(const UNKNOWN& map, const pxr::SdfPath& path);


template <typename T>
UNKNOWN SdfPathFindLongestPrefix(UNKNOWN& map, const pxr::SdfPath& path);


/// Return an iterator pointing to the element of \a set whose key is the
/// longest prefix of the given path (excluding the path itself).  If there is
/// no such element, return \a set.end().
std::set::const_iterator SdfPathFindLongestStrictPrefix(const std::set<pxrInternal_v0_20__pxrReserved__::SdfPath, std::less<pxrInternal_v0_20__pxrReserved__::SdfPath>, std::allocator<pxrInternal_v0_20__pxrReserved__::SdfPath> >& set, const pxr::SdfPath& path);


/// Return an iterator pointing to the element of \a map whose key is the
/// longest prefix of the given path (excluding the path itself).  If there is
/// no such element, return \a map.end().
template <typename T>
UNKNOWN SdfPathFindLongestStrictPrefix(const UNKNOWN& map, const pxr::SdfPath& path);


template <typename T>
UNKNOWN SdfPathFindLongestStrictPrefix(UNKNOWN& map, const pxr::SdfPath& path);
#endif


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_PathNodeHandleImpl<int, int, int>;
