#if 0
#include <pxr/usd/sdf/pathNode.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

struct Sdf_PathNode {
    using BoundType = pxr::Sdf_PathNode;

#if 0

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<pxr::Sdf_PathNode *, const pxr::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

#if 0
    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;
#endif

    unsigned int GetCurrentRefCount() const;

    enum NodeType {
        RootNode = 0,
        PrimNode = 1,
        PrimVariantSelectionNode = 2,
        PrimPropertyNode = 3,
        TargetNode = 4,
        MapperNode = 5,
        RelationalAttributeNode = 6,
        MapperArgNode = 7,
        ExpressionNode = 8,
        NumNodeTypes = 9,
    };

    struct LessThan {
        using BoundType = pxr::Sdf_PathNode::LessThan;

        template <typename T>
        bool operator()(const T& a, const T& b) const;

    } CPPMM_OPAQUEPTR; // struct LessThan


    struct _EqualElement {
        using BoundType = pxr::Sdf_PathNode::_EqualElement;

        template <typename T>
        bool operator()(const T& a, const T& b) const;

    } CPPMM_OPAQUEPTR; // struct _EqualElement
#endif

} CPPMM_OPAQUEPTR; // struct Sdf_PathNode

#if 0
struct Sdf_PrimPartPathNode {
    using BoundType = pxr::Sdf_PrimPartPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    Sdf_PrimPartPathNode();

    Sdf_PrimPartPathNode(const pxr::Sdf_PrimPartPathNode& );

    Sdf_PrimPartPathNode(pxr::Sdf_PrimPartPathNode&& ) CPPMM_IGNORE;

    pxr::Sdf_PrimPartPathNode& operator=(const pxr::Sdf_PrimPartPathNode& );

    pxr::Sdf_PrimPartPathNode& operator=(pxr::Sdf_PrimPartPathNode&& ) CPPMM_IGNORE;

    ~Sdf_PrimPartPathNode();

} CPPMM_OPAQUEPTR; // struct Sdf_PrimPartPathNode


struct Sdf_PropPartPathNode {
    using BoundType = pxr::Sdf_PropPartPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    Sdf_PropPartPathNode();

    Sdf_PropPartPathNode(const pxr::Sdf_PropPartPathNode& );

    Sdf_PropPartPathNode(pxr::Sdf_PropPartPathNode&& ) CPPMM_IGNORE;

    pxr::Sdf_PropPartPathNode& operator=(const pxr::Sdf_PropPartPathNode& );

    pxr::Sdf_PropPartPathNode& operator=(pxr::Sdf_PropPartPathNode&& ) CPPMM_IGNORE;

    ~Sdf_PropPartPathNode();

} CPPMM_OPAQUEPTR; // struct Sdf_PropPartPathNode


struct Sdf_RootPathNode {
    using BoundType = pxr::Sdf_RootPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    static const pxr::Sdf_PathNode* New(bool isAbsolute);

} CPPMM_OPAQUEPTR; // struct Sdf_RootPathNode


template <class nodeType, class Comp>
struct Sdf_PathNodeCompare {
    using BoundType = pxr::Sdf_PathNodeCompare<nodeType, Comp>;

    bool operator()(const pxr::Sdf_PathNode& lhs, const pxr::Sdf_PathNode& rhs) const;

} CPPMM_OPAQUEPTR; // struct Sdf_PathNodeCompare

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_PathNodeCompare<int, int>;
// using Sdf_PathNodeCompareInt = pxr::Sdf_PathNodeCompare<int, int>;


struct Sdf_PrimPathNode {
    using BoundType = pxr::Sdf_PrimPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    Sdf_PrimPathNode(const pxr::Sdf_PrimPathNode& );

    pxr::Sdf_PrimPathNode& operator=(const pxr::Sdf_PrimPathNode& );

} CPPMM_OPAQUEPTR; // struct Sdf_PrimPathNode


struct Sdf_PrimPropertyPathNode {
    using BoundType = pxr::Sdf_PrimPropertyPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    Sdf_PrimPropertyPathNode(const pxr::Sdf_PrimPropertyPathNode& );

    pxr::Sdf_PrimPropertyPathNode& operator=(const pxr::Sdf_PrimPropertyPathNode& );

} CPPMM_OPAQUEPTR; // struct Sdf_PrimPropertyPathNode


struct Sdf_PrimVariantSelectionNode {
    using BoundType = pxr::Sdf_PrimVariantSelectionNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    const pxr::TfToken& _GetNameImpl() const;

    void _AppendText(std::string* str) const;

} CPPMM_OPAQUEPTR; // struct Sdf_PrimVariantSelectionNode


struct Sdf_TargetPathNode {
    using BoundType = pxr::Sdf_TargetPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    void _AppendText(std::string* str) const;

} CPPMM_OPAQUEPTR; // struct Sdf_TargetPathNode


struct Sdf_RelationalAttributePathNode {
    using BoundType = pxr::Sdf_RelationalAttributePathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    Sdf_RelationalAttributePathNode(const pxr::Sdf_RelationalAttributePathNode& );

    pxr::Sdf_RelationalAttributePathNode& operator=(const pxr::Sdf_RelationalAttributePathNode& );

} CPPMM_OPAQUEPTR; // struct Sdf_RelationalAttributePathNode


struct Sdf_MapperPathNode {
    using BoundType = pxr::Sdf_MapperPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    void _AppendText(std::string* str) const;

} CPPMM_OPAQUEPTR; // struct Sdf_MapperPathNode


struct Sdf_MapperArgPathNode {
    using BoundType = pxr::Sdf_MapperArgPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    void _AppendText(std::string* str) const;

    Sdf_MapperArgPathNode(const pxr::Sdf_MapperArgPathNode& );

    pxr::Sdf_MapperArgPathNode& operator=(const pxr::Sdf_MapperArgPathNode& );

} CPPMM_OPAQUEPTR; // struct Sdf_MapperArgPathNode


struct Sdf_ExpressionPathNode {
    using BoundType = pxr::Sdf_ExpressionPathNode;

    static int FindOrCreatePrim(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimProperty(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreatePrimVariantSelection(const pxr::Sdf_PathNode* parent, const pxr::TfToken& variantSet, const pxr::TfToken& variant);

    static int FindOrCreateTarget(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateRelationalAttribute(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateMapper(const pxr::Sdf_PathNode* parent, const int& targetPath);

    static int FindOrCreateMapperArg(const pxr::Sdf_PathNode* parent, const pxr::TfToken& name);

    static int FindOrCreateExpression(const pxr::Sdf_PathNode* parent);

    static const pxr::Sdf_PathNode* GetAbsoluteRootNode();

    static const pxr::Sdf_PathNode* GetRelativeRootNode();

    pxr::Sdf_PathNode::NodeType GetNodeType() const;

    static std::pair<const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *, const pxrInternal_v0_21__pxrReserved__::Sdf_PathNode *> RemoveCommonSuffix(const pxr::Sdf_PathNode* a, const pxr::Sdf_PathNode* b, bool stopAtRootPrim);

    const pxr::Sdf_PathNode* GetParentNode() const;

    size_t GetElementCount() const;

    bool IsAbsolutePath() const;

    bool IsAbsoluteRoot() const;

    bool ContainsTargetPath() const;

    bool IsNamespaced() const;

    bool ContainsPrimVariantSelection() const;

    const pxr::TfToken& GetName() const;

    const int& GetTargetPath() const;

    const pxr::Sdf_PathNode::VariantSelectionType& GetVariantSelection() const;

    pxr::TfToken GetElement() const;

    void AppendText(std::string* str) const;

    static const pxr::TfToken& GetPathToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    static pxr::TfToken GetPathAsToken(const pxr::Sdf_PathNode* primPart, const pxr::Sdf_PathNode* propPart);

    template <typename Less>
    bool Compare(const pxr::Sdf_PathNode& rhs) const;

    unsigned int GetCurrentRefCount() const;

    static void operator delete(void* p);

    void _AppendText(std::string* str) const;

} CPPMM_OPAQUEPTR; // struct Sdf_ExpressionPathNode


template <class nodeType>
struct Sdf_PathNodeTypeToType {
    using BoundType = pxr::Sdf_PathNodeTypeToType<nodeType>;

} CPPMM_OPAQUEPTR; // struct Sdf_PathNodeTypeToType

// TODO: fill in explicit instantiations, e.g.:
// template class Sdf_PathNodeTypeToType<int>;
// using Sdf_PathNodeTypeToTypeInt = pxr::Sdf_PathNodeTypeToType<int>;


/// Diagnostic output.
void Sdf_DumpPathStats();


void intrusive_ptr_add_ref(const pxr::Sdf_PathNode* p);


void intrusive_ptr_release(const pxr::Sdf_PathNode* p);

#endif

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind

// TODO: fill in explicit instantiations
// template class pxr::Sdf_PathNodeCompare<int, int>;
// template class pxr::Sdf_PathNodeTypeToType<int>;

#endif
