#include <pxr/usd/pcp/dynamicFileFormatContext.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpDynamicFileFormatContext
/// 
/// Context object for the current state of a prim index that is being built
/// that allows implementations of PcpDynamicFileFormatInterface to compose
/// field values when generating dynamic file format arguments. The context 
/// allows us to iterate over all nodes that have already been composed looking
/// for the strongest opinion for a relevant field. 
struct PcpDynamicFileFormatContext {
    using BoundType = pxr::PcpDynamicFileFormatContext;

    ~PcpDynamicFileFormatContext();

    /// Compose the \p value of the given \p field and return its current 
    /// strongest opinion. For dictionary valued fields this will be a 
    /// dictionary containing the strongest value for each individual key. 
    /// Returns true if a value for the field was found. 
    bool ComposeValue(const pxr::TfToken& field, pxr::VtValue* value) const;

    /// Compose the \p values of the given \p field returning all available 
    /// opinions ordered from strongest to weakest. For dictionary valued 
    /// fields, the dictionaries from each opinion are not composed together 
    /// at each step and are instead returned in the list as is. 
    /// Returns true if a value for the field was found. 
    /// 
    /// Note that this is slower than ComposeValue, especially for 
    /// non-dictionary valued fields, and should only be used if knowing more 
    /// than just the strongest value is necessary.
    bool ComposeValueStack(const pxr::TfToken& field, pxr::PcpDynamicFileFormatContext::VtValueVector* values) const;

} CPPMM_OPAQUEPTR; // struct PcpDynamicFileFormatContext


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
