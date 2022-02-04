#if 0
#include <pxr/usd/pcp/dynamicFileFormatInterface.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpDynamicFileFormatInterface
/// 
/// Interface mixin that can be included by SdfFileFormat subclasses to enable
/// dynamic file format argument generation for a file format plugin.
/// When prim index composition encounters a payload to an asset of a file 
/// format that implements this interface, it will call 
/// ComposeFieldsForFileFormatArguments to generate arguments from the current
/// composition context at which the payload is being added. The derived file
/// format is on the hook for using the provided context to compute any prim
/// field values it needs and generate the relevant file format arguments for
/// its content.
struct PcpDynamicFileFormatInterface {
    using BoundType = pxr::PcpDynamicFileFormatInterface;

    /// Empty virtual destructor to prevent build errors with some compilers.
    ~PcpDynamicFileFormatInterface();

    /// Derived classes must implement this function to compose prim fields 
    /// using the given \p context and use them to generate file format 
    /// arguments for the layer at \p assetPath. The context provides methods 
    /// to compose field values at the current point in prim index composition
    /// which can be used to generate the relevant file format arguments. These
    /// arguments need to be added to the set of file format arguments provided 
    /// by \p args. 
    /// 
    /// Additionally, implementations can output \p dependencyContextData of
    /// any value type that will then be passed back in to calls to 
    /// CanFieldChangeAffectFileFormatArguments during change processing.
    /// This can be used to provide more that context that is specific to the
    /// file format when determining whether a field change really does affect 
    /// the arguments generated by a particular call to this function.
    void ComposeFieldsForFileFormatArguments(const std::string& assetPath, const pxr::PcpDynamicFileFormatContext& context, pxr::SdfFileFormat::FileFormatArguments* args, pxr::VtValue* dependencyContextData) const;

    /// Derived classes must implement this function to return true if the 
    /// change to scene description of the field named \p field can affect the 
    /// dynamic file format arguments generated by 
    /// ComposeFieldsForFileFormatArguments. This function will be called during 
    /// change processing to determine whether a change to a field affects 
    /// the dynamic file format arguments of a payload that a prim index depends
    /// on.
    /// 
    /// \p oldValue and \p newValue contain the old and new values of the field.
    /// \p dependencyContextData is the arbitrary typed data that was generated
    /// by the call to ComposeFieldsForFileFormatArguments when the payload arc
    /// was computed.
    bool CanFieldChangeAffectFileFormatArguments(const pxr::TfToken& field, const pxr::VtValue& oldValue, const pxr::VtValue& newValue, const pxr::VtValue& dependencyContextData) const;

    pxr::PcpDynamicFileFormatInterface& operator=(const pxr::PcpDynamicFileFormatInterface& );

} CPPMM_OPAQUEPTR; // struct PcpDynamicFileFormatInterface


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
