#include <pxr/base/tf/error.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class TfError
/// \ingroup group_tf_Diagnostic
/// 
/// Represents an object that contains error information.
/// 
/// See \ref page_tf_Diagnostic in the C++ API reference for a detailed
/// description of the error issuing API.  For a example of how to post an
/// error, see \c TF_ERROR(), also in the C++ API reference.
/// 
/// In the Python API, you can raise several different types of errors,
/// including coding errors (Tf.RaiseCodingError), run time errors
/// (Tf.RaiseRuntimeError), fatal errors (Tf.Fatal).
struct TfError {
    using BoundType = pxr::TfError;

    /// Return the diagnostic code posted as a string.
    const std::string& GetErrorCodeAsString() const;

/*
    /// Return the call context where the message was issued.
    const pxr::TfCallContext& GetContext() const;

    /// Return the source file name that the diagnostic message was posted from.
    std::string GetSourceFileName() const;

    /// Return the source line number that the diagnostic message was posted
    /// from.
    size_t GetSourceLineNumber() const;

    /// Return the commentary string describing this diagnostic message.
    const std::string& GetCommentary() const;

    /// Return the source function that the diagnostic message was posted from.
    std::string GetSourceFunction() const;

    /// Add to the commentary string describing this diagnostic message.
    /// 
    /// Note: each string added to the commentary is separated from
    /// the previous one with a newline. This means that
    /// you the string \c s should \e not end with a newline. Thus,
    /// \code
    ///    cout << e.GetCommentary() << "\n";
    /// \endcode
    /// always prints the entire commentary string as a newline
    /// separated sequence of messages.
    void AugmentCommentary(const std::string& s);

    /// Return the diagnostic code posted.
    pxr::TfEnum GetDiagnosticCode() const;

    /// Return the diagnostic code posted as a string.
    /// 
    /// If the enum value posted with the message has been registered
    /// with \c TF_ADD_ENUM_NAME(), then \c GetDiagnosticCodeAsString() will
    /// return the symbolic name of the enum.
    /// 
    /// If the enum has not been registered, then code of the form
    /// \code
    ///     TF_ERROR(PUCE).Post("is an ugly color");
    /// \endcode
    /// will still result in \c GetDiagnosticCodeAsString() returning the string
    /// "PUCE"; however, code of the form
    /// \code
    ///     MyErrorCode c = PUCE;
    ///     TF_ERROR(c).Post("is still ugly");
    /// \endcode
    /// will result in \c GetDiagnosticCodeAsString() returning the
    /// (uninformative) string "c".
    const std::string& GetDiagnosticCodeAsString() const;

    template <typename T>
    const T* GetInfo() const;

    /// Set the info object associated with this diagnostic message.
    /// \see GetInfo()
    void SetInfo(pxr::TfDiagnosticInfo any);

    /// Return true if the message was posted via \c PostQuietly().
    /// 
    /// Notices sent from \c PostQuietly() are indicating that an immediate
    /// printout of the error is not desirable, because someone higher up on
    /// the stack may actually handle this error. This is rare, but it does
    /// happen on occasion.
    bool GetQuiet() const;

    /// Return the commentary string.
    std::string GetPrettyPrintString() const;

    /// Return true if this diagnostic's code is a fatal code.
    bool IsFatal() const;

    /// Return true if this diagnostic's code is either a fatal or nonfatal
    /// coding error.
    bool IsCodingError() const;

    /// Return the error code posted.
    pxr::TfEnum GetErrorCode() const;
*/

} CPPMM_OPAQUEPTR; // struct TfError


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
