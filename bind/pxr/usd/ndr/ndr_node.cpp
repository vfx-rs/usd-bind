#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/node.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrNode
///
/// Represents an abstract node. Describes information like the name of the
/// node, what its inputs and outputs are, and any associated metadata.
///
/// In almost all cases, this class will not be used directly. More specialized
/// nodes can be created that derive from `NdrNode`; those specialized nodes can
/// add their own domain-specific data and methods.
///
struct NdrNode
{
public:
    using BoundType = pxr::NdrNode;

	/// Constructor.
    NdrNode(const pxr::NdrIdentifier& identifier,
            const pxr::NdrVersion& version,
            const std::string& name,
            const pxr::TfToken& family,
            const pxr::TfToken& context,
            const pxr::TfToken& sourceType,
            const std::string& definitionURI,
            const std::string& implementationURI,
            pxr::NdrPropertyUniquePtrVec&& properties,
            const pxr::NdrTokenMap& metadata = pxr::NdrTokenMap(),
            const std::string &sourceCode = std::string());

    /// Destructor.
    ~NdrNode();

    /// \name The Basics
    /// @{

    /// Return the identifier of the node.
    const pxr::NdrIdentifier& GetIdentifier() const;

    /// Return the version of the node
    pxr::NdrVersion GetVersion() const;

    /// Gets the name of the node.
    const std::string& GetName() const;

    /// Gets the name of the family that the node belongs to. An empty token
    /// will be returned if the node does not belong to a family.
    const pxr::TfToken& GetFamily() const;

    /// Gets the context of the node.
    ///
    /// The context is the context that the node declares itself as having (or,
    /// if a particular node does not declare a context, it will be assigned a
    /// default context by the parser).
    ///
    /// As a concrete example from the `Sdr` library, a shader with a specific
    /// source type may perform different duties vs. another shader with the
    /// same source type. For example, one shader with a source type of
    /// `SdrArgsParser::SourceType` may declare itself as having a context of
    /// 'pattern', while another shader of the same source type may say it is
    /// used for lighting, and thus has a context of 'light'.
    const pxr::TfToken& GetContext() const;

    /// Gets the type of source that this node originated from.
    ///
    /// Note that this is distinct from `GetContext()`, which is the type that
    /// the node declares itself as having.
    ///
    /// As a concrete example from the `Sdr` library, several shader parsers
    /// exist and operate on different types of shaders. In this scenario, each
    /// distinct type of shader (OSL, Args, etc) is considered a different
    /// _source_, even though they are all shaders. In addition, the shaders
    /// under each source type may declare themselves as having a specific
    /// context (shaders can serve different roles). See `GetContext()` for
    /// more information on this.
    const pxr::TfToken& GetSourceType() const;

    /// Gets the URI to the resource that provided this node's
    /// definition. Could be a path to a file, or some other resource
    /// identifier. This URI should be fully resolved.
    ///
    /// \sa NdrNode::GetResolvedImplementationURI()
    const std::string& GetResolvedDefinitionURI() const;

    /// Gets the URI to the resource that provides this node's
    /// implementation. Could be a path to a file, or some other resource
    /// identifier. This URI should be fully resolved.
    ///
    /// \sa NdrNode::GetResolvedDefinitionURI()
    const std::string& GetResolvedImplementationURI() const;

    /// Returns  the source code for this node. This will be empty for most 
    /// nodes. It will be non-empty only for the nodes that are constructed 
    /// using \ref NdrRegistry::GetNodeFromSourceCode(), in which case, the 
    /// source code has not been parsed (or even compiled) yet. 
    /// 
    /// An unparsed node with non-empty source-code but no properties is 
    /// considered to be invalid. Once the node is parsed and the relevant 
    /// properties and metadata are extracted from the source code, the node 
    /// becomes valid.
    /// 
    /// \sa NdrNode::IsValid
    const std::string &GetSourceCode() const;

    /// Whether or not this node is valid. A node that is valid indicates that
    /// the parser plugin was able to successfully parse the contents of this
    /// node.
    ///
    /// Note that if a node is not valid, some data like its name, URI, source 
    /// code etc. could still be available (data that was obtained during the 
    /// discovery process). However, other data that must be gathered from the 
    /// parsing process will NOT be available (eg, inputs and outputs).
    
    bool IsValid() const;

    /// Gets a string with basic information about this node. Helpful for
    /// things like adding this node to a log.
    
    std::string GetInfoString() const;

    /// @}


    /// \name Inputs and Outputs
    /// An input or output is also generically referred to as a "property".
    /// @{

    /// Get an ordered list of all the input names on this node.
    
    const pxr::NdrTokenVec& GetInputNames() const;

    /// Get an ordered list of all the output names on this node.
    
    const pxr::NdrTokenVec& GetOutputNames() const;

    /// Get an input property by name. `nullptr` is returned if an input with
    /// the given name does not exist.
    
    pxr::NdrPropertyConstPtr GetInput(const pxr::TfToken& inputName) const;

    /// Get an output property by name. `nullptr` is returned if an output with
    /// the given name does not exist.
    
    pxr::NdrPropertyConstPtr GetOutput(const pxr::TfToken& outputName) const;

    /// @}


    /// \name Metadata
    /// The metadata returned here is a direct result of what the parser plugin
    /// is able to determine about the node. See the documentation for a
    /// specific parser plugin to get help on what the parser is looking for to
    /// populate these values.
    /// @{

    /// All metadata that came from the parse process. Specialized nodes may
    /// isolate values in the metadata (with possible manipulations and/or
    /// additional parsing) and expose those values in their API.
    
    const pxr::NdrTokenMap& GetMetadata() const;

    /// @}


} CPPMM_OPAQUEPTR; // struct NdrNode

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

