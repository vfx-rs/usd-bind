#include <cppmm_bind.hpp>
#include <pxr/usd/ndr/registry.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class NdrRegistry
///
/// The registry provides access to node information. "Discovery Plugins" are
/// responsible for finding the nodes that should be included in the registry.
///
/// Discovery plugins are found through the plugin system. If additional
/// discovery plugins need to be specified, a client can pass them to
/// `SetExtraDiscoveryPlugins()`.
///
/// When the registry is first told about the discovery plugins, the plugins
/// will be asked to discover nodes. These plugins will generate
/// `pxr::NdrNodeDiscoveryResult` instances, which only contain basic metadata. Once
/// the client asks for information that would require the node's contents to
/// be parsed (eg, what its inputs and outputs are), the registry will begin the
/// parsing process on an as-needed basis. See `NdrNodeDiscoveryResult` for the
/// information that can be retrieved without triggering a parse.
///
/// Some methods in this library may allow for a "family" to be provided. A
/// family is simply a generic grouping which is optional.
///
struct NdrRegistry
{
public:
    using BoundType = pxr::NdrRegistry;

    /// Allows the client to set any additional discovery plugins that would
    /// otherwise NOT be found through the plugin system. Runs the discovery
    /// process for the specified plugins immediately.
    ///
    /// Note that this method cannot be called after any nodes in the registry
    /// have been parsed (eg, through GetNode*()), otherwise an error will
    /// result.
    
    void SetExtraDiscoveryPlugins(pxr::NdrRegistry::DiscoveryPluginRefPtrVec plugins);

    /// Allows the client to set any additional discovery plugins that would
    /// otherwise NOT be found through the plugin system. Runs the discovery
    /// process for the specified plugins immediately.
    ///
    /// Note that this method cannot be called after any nodes in the registry
    /// have been parsed (eg, through GetNode*()), otherwise an error will
    /// result.
    
    void SetExtraDiscoveryPlugins(const std::vector<pxr::TfType>& pluginTypes);

    /// Allows the client to set any additional parser plugins that would
    /// otherwise NOT be found through the plugin system.
    ///
    /// Note that this method cannot be called after any nodes in the registry
    /// have been parsed (eg, through GetNode*()), otherwise an error will
    /// result.
    
    void SetExtraParserPlugins(const std::vector<pxr::TfType>& pluginTypes);

    /// Parses the given \p asset, constructs a pxr::NdrNode from it and adds it to
    /// the registry.
    /// 
    /// Nodes created from an asset using this API can be looked up by the 
    /// unique identifier and sourceType of the returned node, or by URI, 
    /// which will be set to the unresolved asset path value.
    /// 
    /// \p metadata contains additional metadata needed for parsing and 
    /// compiling the source code in the file pointed to by \p asset correctly.
    /// This metadata supplements the metadata available in the asset and 
    /// overrides it in cases where there are key collisions.
    ///
    /// \p subidentifier is optional, and it would be used to indicate a
    /// particular definition in the asset file if the asset contains multiple
    /// node definitions.
    ///
    /// \p sourceType is optional, and it is only needed to indicate a
    /// particular type if the asset file is capable of representing a node
    /// definition of multiple source types.
    ///
    /// Returns a valid node if the asset is parsed successfully using one 
    /// of the registered parser plugins.
    
    pxr::NdrNodeConstPtr GetNodeFromAsset(const pxr::SdfAssetPath &asset,
                                     const pxr::NdrTokenMap &metadata,
                                     const pxr::TfToken &subIdentifier=pxr::TfToken(),
                                     const pxr::TfToken &sourceType=pxr::TfToken());

    /// Parses the given \p sourceCode string, constructs a pxr::NdrNode from it and 
    /// adds it to the registry. The parser to be used is determined by the 
    /// specified \p sourceType.
    /// 
    /// Nodes created from source code using this API can be looked up by the 
    /// unique identifier and sourceType of the returned node.
    /// 
    /// \p metadata contains additional metadata needed for parsing and 
    /// compiling the source code correctly. This metadata supplements the 
    /// metadata available in \p sourceCode and overrides it cases where there 
    /// are key collisions.
    /// 
    /// Returns a valid node if the given source code is parsed successfully 
    /// using the parser plugins that is registered for the specified 
    /// \p sourceType.
    
    pxr::NdrNodeConstPtr GetNodeFromSourceCode(const std::string &sourceCode,
                                          const pxr::TfToken &sourceType,
                                          const pxr::NdrTokenMap &metadata);

    /// Get the locations where the registry is searching for nodes.
    ///
    /// Depending on which discovery plugins were used, this may include
    /// non-filesystem paths.
    
    pxr::NdrStringVec GetSearchURIs() const;

    /// Get the identifiers of all the nodes that the registry is aware of.
    ///
    /// This will not run the parsing plugins on the nodes that have been
    /// discovered, so this method is relatively quick. Optionally, a "family"
    /// name can be specified to only get the identifiers of nodes that belong
    /// to that family and a filter can be specified to get just the default
    /// version (the default) or all versions of the node.
    
    pxr::NdrIdentifierVec
    GetNodeIdentifiers(const pxr::TfToken& family = pxr::TfToken(),
                       pxr::NdrVersionFilter filter =
                           pxr::NdrVersionFilterDefaultOnly) const;

    /// Get the names of all the nodes that the registry is aware of.
    ///
    /// This will not run the parsing plugins on the nodes that have been
    /// discovered, so this method is relatively quick. Optionally, a "family"
    /// name can be specified to only get the names of nodes that belong to
    /// that family.
    
    pxr::NdrStringVec GetNodeNames(const pxr::TfToken& family = pxr::TfToken()) const;

    /// Get the node with the specified \p identifier, and an optional
    /// \p sourceTypePriority list specifying the set of node SOURCE types (see
    /// `pxr::NdrNode::GetSourceType()`) that should be searched.
    ///
    /// If no sourceTypePriority is specified, the first encountered node with 
    /// the specified identifier will be returned (first is arbitrary) if found.
    /// If no matching node is found then the first node found with an alias
    /// matching the identifier will be returned if one exists.
    /// 
    /// If a sourceTypePriority list is specified, then this will iterate 
    /// through each source type and try to find a node matching by identifier
    /// or alias. This is equivalent to calling 
    /// pxr::NdrRegistry::GetNodeByIdentifierAndType for each source type until a 
    /// node is found.
    /// 
    /// Nodes of the same identifier but different source type can exist
    /// in the registry. If a node 'Foo' with source types 'abc' and 'xyz'
    /// exist in the registry, and you want to make sure the 'abc' version
    /// is fetched before the 'xyz' version, the priority list would be
    /// specified as ['abc', 'xyz']. If the 'abc' version did not exist in
    /// the registry, then the 'xyz' version would be returned.
    ///
    /// Returns `nullptr` if a node matching the arguments can't be found.
    ///
    /// \sa pxr::NdrNodeDiscoveryResult::aliases
    
    pxr::NdrNodeConstPtr GetNodeByIdentifier(const pxr::NdrIdentifier& identifier,
                        const pxr::NdrTokenVec& sourceTypePriority = pxr::NdrTokenVec());

    /// Get the node with the specified \p identifier and \p sourceType. If,
    /// for the given sourceType, there is no node with the given identifier,
    /// this will instead search for a node which has an alias that matches the 
    /// identifier and return it if it exists. Otherwise there is no matching 
    /// node for the sourceType and nullptr is returned.
    ///
    /// \sa pxr::NdrNodeDiscoveryResult::aliases
    
    pxr::NdrNodeConstPtr GetNodeByIdentifierAndType(const pxr::NdrIdentifier& identifier,
                                               const pxr::TfToken& sourceType);

    /// Get the node with the specified name.  An optional priority list
    /// specifies the set of node SOURCE types (\sa pxr::NdrNode::GetSourceType())
    /// that should be searched and in what order.
    ///
    /// Optionally, a filter can be specified to consider just the default
    /// versions of nodes matching \p name (the default) or all versions
    /// of the nodes.
    ///
    /// \sa GetNodeByIdentifier().
    
    pxr::NdrNodeConstPtr GetNodeByName(const std::string& name,
                        const pxr::NdrTokenVec& sourceTypePriority = pxr::NdrTokenVec(),
                        pxr::NdrVersionFilter filter = pxr::NdrVersionFilterDefaultOnly);

    /// A convenience wrapper around \c GetNodeByName(). Instead of
    /// providing a priority list, an exact type is specified, and
    /// `nullptr` is returned if a node with the exact identifier and
    /// type does not exist.
    ///
    /// Optionally, a filter can be specified to consider just the default
    /// versions of nodes matching \p name (the default) or all versions
    /// of the nodes.
    
    pxr::NdrNodeConstPtr GetNodeByNameAndType(const std::string& name,
                                         const pxr::TfToken& sourceType,
                                         pxr::NdrVersionFilter filter =
                                             pxr::NdrVersionFilterDefaultOnly);

    /// Get all nodes matching the specified identifier (multiple nodes of
    /// the same identifier, but different source types, may exist) as well as 
    /// any nodes which have an alias that matches the identifier. If no nodes
    /// match the identifier, an empty vector is returned.
    ///
    /// \sa pxr::NdrNodeDiscoveryResult::aliases
    
    pxr::NdrNodeConstPtrVec GetNodesByIdentifier(const pxr::NdrIdentifier& identifier);

    /// Get all nodes matching the specified name. Only nodes matching the
    /// specified name will be parsed. Optionally, a filter can be specified
    /// to get just the default version (the default) or all versions of the
    /// node.  If no nodes match an empty vector is returned.
    
    pxr::NdrNodeConstPtrVec GetNodesByName(const std::string& name,
                                      pxr::NdrVersionFilter filter =
                                          pxr::NdrVersionFilterDefaultOnly);

    /// Get all nodes from the registry, optionally restricted to the nodes
    /// that fall under a specified family and/or the default version.
    ///
    /// Note that this will parse \em all nodes that the registry is aware of
    /// (unless a family is specified), so this may take some time to run
    /// the first time it is called.
    
    pxr::NdrNodeConstPtrVec GetNodesByFamily(const pxr::TfToken& family = pxr::TfToken(),
                                        pxr::NdrVersionFilter filter =
                                            pxr::NdrVersionFilterDefaultOnly);

    /// Get a sorted list of all node source types that may be present on the
    /// nodes in the registry.
    ///
    /// Source types originate from the discovery process, but there is no
    /// guarantee that the discovered source types will also have a registered
    /// parser plugin.  The actual supported source types here depend on the
    /// parsers that are available.  Also note that some parser plugins may not
    /// advertise a source type.
    ///
    /// See the documentation for `pxr::NdrParserPlugin` and
    /// `pxr::NdrNode::GetSourceType()` for more information.
    
    pxr::NdrTokenVec GetAllNodeSourceTypes() const;

} CPPMM_OPAQUEPTR; // struct pxr::NdrRegistry

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

