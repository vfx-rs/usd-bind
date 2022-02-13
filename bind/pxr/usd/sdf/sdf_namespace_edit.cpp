#if 0
#include <pxr/usd/sdf/namespaceEdit.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class SdfNamespaceEdit
/// 
/// A single namespace edit.  It supports renaming, reparenting, reparenting
/// with a rename, reordering, and removal.
struct SdfNamespaceEdit {
    using BoundType = pxr::SdfNamespaceEdit;

    /// The default edit maps the empty path to the empty path.
    SdfNamespaceEdit();

    /// The fully general edit.
    SdfNamespaceEdit(const pxr::SdfNamespaceEdit::Path& currentPath_, const pxr::SdfNamespaceEdit::Path& newPath_, pxr::SdfNamespaceEdit::Index index_);

    /// Returns a namespace edit that removes the object at \p currentPath.
    static pxr::SdfNamespaceEdit::This Remove(const pxr::SdfNamespaceEdit::Path& currentPath);

    /// Returns a namespace edit that renames the prim or property at
    /// \p currentPath to \p name
    static pxr::SdfNamespaceEdit::This Rename(const pxr::SdfNamespaceEdit::Path& currentPath, const pxr::TfToken& name);

    /// Returns a namespace edit to reorder the prim or property at
    /// \p currentPath to index \p index.
    static pxr::SdfNamespaceEdit::This Reorder(const pxr::SdfNamespaceEdit::Path& currentPath, pxr::SdfNamespaceEdit::Index index);

    /// Returns a namespace edit to reparent the prim or property at
    /// \p currentPath to be under \p newParentPath at index \p index.
    static pxr::SdfNamespaceEdit::This Reparent(const pxr::SdfNamespaceEdit::Path& currentPath, const pxr::SdfNamespaceEdit::Path& newParentPath, pxr::SdfNamespaceEdit::Index index);

    /// Returns a namespace edit to reparent the prim or property at
    /// \p currentPath to be under \p newParentPath at index \p index
    /// with the name \p name.
    static pxr::SdfNamespaceEdit::This ReparentAndRename(const pxr::SdfNamespaceEdit::Path& currentPath, const pxr::SdfNamespaceEdit::Path& newParentPath, const pxr::TfToken& name, pxr::SdfNamespaceEdit::Index index);

    bool operator==(const pxr::SdfNamespaceEdit::This& rhs) const;

    SdfNamespaceEdit(const pxr::SdfNamespaceEdit::This& );

    SdfNamespaceEdit(pxr::SdfNamespaceEdit&& ) CPPMM_IGNORE;

    ~SdfNamespaceEdit();

    pxr::SdfNamespaceEdit& operator=(const pxr::SdfNamespaceEdit::This& );

    pxr::SdfNamespaceEdit& operator=(pxr::SdfNamespaceEdit&& ) CPPMM_IGNORE;

} CPPMM_OPAQUEPTR; // struct SdfNamespaceEdit


    using SdfNamespaceEditVector = pxr::SdfNamespaceEditVector;


std::ostream& operator<<(std::ostream& , const pxr::SdfNamespaceEdit::This& );


std::ostream& operator<<(std::ostream& , const pxr::SdfNamespaceEditVector& );


/// \struct SdfNamespaceEditDetail
/// 
/// Detailed information about a namespace edit.
struct SdfNamespaceEditDetail {
    using BoundType = pxr::SdfNamespaceEditDetail;

    SdfNamespaceEditDetail();

    SdfNamespaceEditDetail(pxr::SdfNamespaceEditDetail::Result , const pxr::SdfNamespaceEdit::This& edit, const std::string& reason);

    bool operator==(const pxr::SdfNamespaceEditDetail& rhs) const;

    SdfNamespaceEditDetail(const pxr::SdfNamespaceEditDetail& );

    SdfNamespaceEditDetail(pxr::SdfNamespaceEditDetail&& ) CPPMM_IGNORE;

    pxr::SdfNamespaceEditDetail& operator=(const pxr::SdfNamespaceEditDetail& );

    pxr::SdfNamespaceEditDetail& operator=(pxr::SdfNamespaceEditDetail&& ) CPPMM_IGNORE;

    ~SdfNamespaceEditDetail();


    enum Result {
        Error = 0,
        Unbatched = 1,
        Okay = 2,
    };
} CPPMM_OPAQUEPTR; // struct SdfNamespaceEditDetail


    using SdfNamespaceEditDetailVector = pxr::SdfNamespaceEditDetailVector;


std::ostream& operator<<(std::ostream& , const pxr::SdfNamespaceEditDetail& );


std::ostream& operator<<(std::ostream& , const pxr::SdfNamespaceEditDetailVector& );


/// Combine two results, yielding Error over Unbatched over Okay.
pxr::SdfNamespaceEditDetail::Result CombineResult(pxr::SdfNamespaceEditDetail::Result lhs, pxr::SdfNamespaceEditDetail::Result rhs);


/// Combine a result with Error, yielding Error over Unbatched over Okay.
pxr::SdfNamespaceEditDetail::Result CombineError(pxr::SdfNamespaceEditDetail::Result );


/// Combine a result with Unbatched, yielding Error over Unbatched over Okay.
pxr::SdfNamespaceEditDetail::Result CombineUnbatched(pxr::SdfNamespaceEditDetail::Result other);


/// \class SdfBatchNamespaceEdit
/// 
/// A description of an arbitrarily complex namespace edit.
/// 
/// A \c SdfBatchNamespaceEdit object describes zero or more namespace edits.
/// Various types providing a namespace will allow the edits to be applied
/// in a single operation and also allow testing if this will work.
/// 
/// Clients are encouraged to group several edits into one object because
/// that may allow more efficient processing of the edits.  If, for example,
/// you need to reparent several prims it may be faster to add all of the
/// reparents to a single \c SdfBatchNamespaceEdit and apply them at once
/// than to apply each separately.
/// 
/// Objects that allow applying edits are free to apply the edits in any way
/// and any order they see fit but they should guarantee that the resulting
/// namespace will be as if each edit was applied one at a time in the order
/// they were added.
/// 
/// Note that the above rule permits skipping edits that have no effect or
/// generate a non-final state.  For example, if renaming A to B then to C
/// we could just rename A to C.  This means notices may be elided.  However,
/// implementations must not elide notices that contain information about any
/// edit that clients must be able to know but otherwise cannot determine.
struct SdfBatchNamespaceEdit {
    using BoundType = pxr::SdfBatchNamespaceEdit;

    /// Create an empty sequence of edits.
    SdfBatchNamespaceEdit();

    SdfBatchNamespaceEdit(const pxr::SdfBatchNamespaceEdit& );

    SdfBatchNamespaceEdit(const pxr::SdfNamespaceEditVector& );

    ~SdfBatchNamespaceEdit();

    pxr::SdfBatchNamespaceEdit& operator=(const pxr::SdfBatchNamespaceEdit& );

    /// Add a namespace edit.
    void Add(const pxr::SdfNamespaceEdit::This& edit);

    /// Add a namespace edit.
    void Add(const pxr::SdfNamespaceEdit::Path& currentPath, const pxr::SdfNamespaceEdit::Path& newPath, pxr::SdfNamespaceEdit::Index index);

    /// Returns the edits.
    const pxr::SdfNamespaceEditVector& GetEdits() const;

    /// Validate the edits and generate a possibly more efficient edit
    /// sequence.  Edits are treated as if they were performed one at time
    /// in sequence, therefore each edit occurs in the namespace resulting
    /// from all previous edits.
    /// 
    /// Editing the descendants of the object in each edit is implied.  If
    /// an object is removed then the new path will be empty.  If an object
    /// is removed after being otherwise edited, the other edits will be
    /// processed and included in \p processedEdits followed by the removal. 
    /// This allows clients to fixup references to point to the object's
    /// final location prior to removal.
    /// 
    /// This function needs help to determine if edits are allowed.  The
    /// callbacks provide that help.  \p hasObjectAtPath returns \c true
    /// iff there's an object at the given path.  This path will be in the
    /// original namespace not any intermediate or final namespace.
    /// \p canEdit returns \c true iff the object at the current path can
    /// be namespace edited to the new path, ignoring whether an object
    /// already exists at the new path.  Both paths are in the original
    /// namespace.  If it returns \c false it should set the string to the
    /// reason why the edit isn't allowed.  It should not write either path
    /// to the string.
    /// 
    /// If \p hasObjectAtPath is invalid then this assumes objects exist
    /// where they should and don't exist where they shouldn't.  Use this
    /// with care.  If \p canEdit in invalid then it's assumed all edits
    /// are valid.
    /// 
    /// If \p fixBackpointers is \c true then target/connection paths are
    /// expected to be in the intermediate namespace resulting from all
    /// previous edits.  If \c false and any current or new path contains a
    /// target or connection path that has been edited then this will
    /// generate an error.
    /// 
    /// This method returns \c true if the edits are allowed and sets
    /// \p processedEdits to a new edit sequence at least as efficient as
    /// the input sequence.  If not allowed it returns \c false and appends
    /// reasons why not to \p details.
    bool Process(pxr::SdfNamespaceEditVector* processedEdits, const pxr::SdfBatchNamespaceEdit::HasObjectAtPath& hasObjectAtPath, const pxr::SdfBatchNamespaceEdit::CanEdit& canEdit, pxr::SdfNamespaceEditDetailVector* details, bool fixBackpointers) const;

} CPPMM_OPAQUEPTR; // struct SdfBatchNamespaceEdit


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
