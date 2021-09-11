#include <pxr/base/tf/diagnosticMgr.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class TfDiagnosticMgr
/// \ingroup group_tf_Diagnostic
/// 
/// Singleton class through which all errors and diagnostics pass.
struct TfDiagnosticMgr {
    using BoundType = pxr::TfDiagnosticMgr;

    /// Return the singleton instance.
    static pxr::TfDiagnosticMgr& GetInstance();

    /// Return an iterator to the beginning of this thread's error list.
    pxr::TfDiagnosticMgr::ErrorIterator GetErrorBegin();

    /// Return an iterator to the end of this thread's error list.
    pxr::TfDiagnosticMgr::ErrorIterator GetErrorEnd();

    /// Remove error specified by iterator \p i.
    /// \deprecated Use TfErrorMark instead.
    pxr::TfDiagnosticMgr::ErrorIterator EraseError(pxr::TfDiagnosticMgr::ErrorIterator i);

    /// Remove all the errors in [first, last) from this thread's error
    /// stream. This should generally not be invoked directly. Use TfErrorMark
    /// instead.
    pxr::TfDiagnosticMgr::ErrorIterator EraseRange(pxr::TfDiagnosticMgr::ErrorIterator first, pxr::TfDiagnosticMgr::ErrorIterator last);

    /// Set whether errors, warnings and status messages should be printed out
    /// to the terminal.
    void SetQuiet(bool quiet);

    /*
    const pxr::TfWeakBase& __GetTfWeakBase__() const;

    void EnableNotification2() const;

    const void* GetUniqueIdentifier() const;

    /// Returns the name of the given diagnostic code.
    static std::string GetCodeName(const pxr::TfEnum& code);

    /// Return a human-readable diagnostic message. The TfDiagnosticMgr uses 
    /// this function to print diagnostics when no diagnostic delegates are 
    /// installed. Diagnostic delegate implementations can call this to produce 
    /// messages in the same format, if desired.
    static std::string FormatDiagnostic(const pxr::TfEnum& code, const pxr::TfCallContext& context, const std::string& msg, const pxr::TfDiagnosticInfo& info);

    /// Add the delegate \p delegate to the list of current delegates.
    /// 
    /// This will add the delegate even if it already exists in the list.
    /// 
    /// Each delegate will be called when diagnostics and errors are invoked
    /// 
    /// This function is thread safe.
    void AddDelegate(pxr::TfDiagnosticMgr::Delegate* delegate);

    /// Removes all delegates equal to \p delegate from the current delegates.
    /// 
    /// This function is thread safe.
    void RemoveDelegate(pxr::TfDiagnosticMgr::Delegate* delegate);

    /// Append an error to the list of active errors.  This is generally not
    /// meant to be called by user code.  It is public so that the system
    /// which translates tf errors to and from python exceptions can manage
    /// errors.
    void AppendError(const pxr::TfError& e);

    /// This method will create a TfError, append it to the error list, and
    /// pass it to all delegates.
    /// 
    /// If no delegates have been registered and no error mark is active, this
    /// method will print the error to stderr.
    void PostError(pxr::TfEnum errorCode, const char* errorCodeString, const pxr::TfCallContext& context, const std::string& commentary, pxr::TfDiagnosticInfo info, bool quiet);

    /// This method will create a TfError, append it to the error list, and
    /// pass it to all delegates.
    /// 
    /// If no delegates have been registered and no error mark is active, this
    /// method will print the error to stderr.
    void PostError(const pxr::TfDiagnosticBase& diagnostic);

    /// This method will create a TfWarning and pass it to all delegates.
    /// 
    /// If no delegates have been registered, this method will print the
    /// warning msg to stderr.
    void PostWarning(pxr::TfEnum warningCode, const char* warningCodeString, const pxr::TfCallContext& context, const std::string& commentary, pxr::TfDiagnosticInfo info, bool quiet) const;

    /// This method will create a TfWarning and pass it to all delegates.
    /// 
    /// If no delegates have been registered, this method will print the
    /// warning msg to stderr.
    void PostWarning(const pxr::TfDiagnosticBase& diagnostic) const;

    /// This method will create a TfStatus and pass it to all delegates.
    /// 
    /// If no delegates have been registered, this method will print the
    /// status msg to stderr.
    void PostStatus(pxr::TfEnum statusCode, const char* statusCodeString, const pxr::TfCallContext& context, const std::string& commentary, pxr::TfDiagnosticInfo info, bool quiet) const;

    /// This method will create a TfStatus and pass it to all delegates.
    /// 
    /// If no delegates have been registered, this method will print the
    /// status msg to stderr.
    void PostStatus(const pxr::TfDiagnosticBase& diagnostic) const;

    /// This method will issue a fatal error to all delegates.
    /// 
    /// If no delegates have been registered, this method will print the error
    /// msg and abort the process.
    void PostFatal(const pxr::TfCallContext& context, pxr::TfEnum statusCode, const std::string& msg) const;

    /// Return true if an instance of TfErrorMark exists in the current thread
    /// of execution, false otherwise.
    bool HasActiveErrorMark();

    TfDiagnosticMgr(const pxr::TfDiagnosticMgr& );

    pxr::TfDiagnosticMgr::This& operator=(const pxr::TfDiagnosticMgr& );


    /// \class Delegate
    /// One may set a delegate with the \c TfDiagnosticMgr which will be
    /// called to respond to errors and diagnostics.
    /// 
    /// \note None of the methods in \c TfDiagnosticMgr::Delegate can be
    /// reentrant.
    /// 
    /// Practically speaking, this means they cannot invoke:
    /// 
    /// - TF_ERROR
    /// - TF_RUNTIME_ERROR
    /// - TF_CODING_ERROR
    /// - TF_WARN
    /// - TF_STATUS
    /// 
    /// For a more complete list, see diagnostic.h 
    struct Delegate {
        using BoundType = pxr::TfDiagnosticMgr::Delegate;

        ~Delegate();

        /// Called when a \c TfError is posted.
        void IssueError(const pxr::TfError& err);

        /// Called when a \c TF_FATAL_ERROR is issued (or a failed
        /// \c TF_AXIOM).
        void IssueFatalError(const pxr::TfCallContext& context, const std::string& msg);

        /// Called when a \c TF_STATUS() is issued.
        void IssueStatus(const pxr::TfStatus& status);

        /// Called when a \c TF_WARNING() is issued.
        void IssueWarning(const pxr::TfWarning& warning);

        pxr::TfDiagnosticMgr::Delegate& operator=(const pxr::TfDiagnosticMgr::Delegate& );

    } CPPMM_OPAQUEPTR; // struct Delegate


    /// \private
    struct ErrorHelper {
        using BoundType = pxr::TfDiagnosticMgr::ErrorHelper;

        ErrorHelper(const pxr::TfCallContext& context, pxr::TfEnum errorCode, const char* errorCodeString);

        void Post(const char* fmt) const;

        void PostQuietly(const char* fmt) const;

        void Post(const std::string& msg) const;

        void PostWithInfo(const std::string& msg, pxr::TfDiagnosticInfo info) const;

        void PostQuietly(const std::string& msg, pxr::TfDiagnosticInfo info) const;

    } CPPMM_OPAQUEPTR; // struct ErrorHelper


    struct WarningHelper {
        using BoundType = pxr::TfDiagnosticMgr::WarningHelper;

        WarningHelper(const pxr::TfCallContext& context, pxr::TfEnum warningCode, const char* warningCodeString);

        void Post(const char* fmt) const;

        void PostQuietly(const char* fmt) const;

        void Post(const std::string& str) const;

        void PostWithInfo(const std::string& msg, pxr::TfDiagnosticInfo info) const;

        void PostQuietly(const std::string& msg) const;

    } CPPMM_OPAQUEPTR; // struct WarningHelper


    struct StatusHelper {
        using BoundType = pxr::TfDiagnosticMgr::StatusHelper;

        StatusHelper(const pxr::TfCallContext& context, pxr::TfEnum statusCode, const char* statusCodeString);

        void Post(const char* fmt) const;

        void PostQuietly(const char* fmt) const;

        void Post(const std::string& str) const;

        void PostWithInfo(const std::string& msg, pxr::TfDiagnosticInfo info) const;

        void PostQuietly(const std::string& msg) const;

    } CPPMM_OPAQUEPTR; // struct StatusHelper


    struct FatalHelper {
        using BoundType = pxr::TfDiagnosticMgr::FatalHelper;

        FatalHelper(const pxr::TfCallContext& context, pxr::TfEnum statusCode);

        void Post(const std::string& str) const;

    } CPPMM_OPAQUEPTR; // struct FatalHelper


    struct _LogText {
        using BoundType = pxr::TfDiagnosticMgr::_LogText;

        void AppendAndPublish(pxr::TfDiagnosticMgr::ErrorIterator i, pxr::TfDiagnosticMgr::ErrorIterator end);

        void RebuildAndPublish(pxr::TfDiagnosticMgr::ErrorIterator i, pxr::TfDiagnosticMgr::ErrorIterator end);

        _LogText(const pxr::TfDiagnosticMgr::_LogText& );

        _LogText(pxr::TfDiagnosticMgr::_LogText&& ) CPPMM_IGNORE;

        pxr::TfDiagnosticMgr::_LogText& operator=(const pxr::TfDiagnosticMgr::_LogText& );

        pxr::TfDiagnosticMgr::_LogText& operator=(pxr::TfDiagnosticMgr::_LogText&& ) CPPMM_IGNORE;

    } CPPMM_OPAQUEPTR; // struct _LogText

*/

} CPPMM_OPAQUEPTR; // struct TfDiagnosticMgr


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
