#include <pxr/usd/pcp/mapExpression.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class PcpMapExpression
/// 
/// An expression that yields a PcpMapFunction value.
/// 
/// Expressions comprise constant values, variables, and operators
/// applied to sub-expressions.  Expressions cache their computed values
/// internally.  Assigning a new value to a variable automatically
/// invalidates the cached values of dependent expressions.  Common
/// (sub-)expressions are automatically detected and shared.
/// 
/// PcpMapExpression exists solely to support efficient incremental
/// handling of relocates edits.  It represents a tree of the namespace
/// mapping operations and their inputs, so we can narrowly redo the
/// computation when one of the inputs changes.
struct PcpMapExpression {
    using BoundType = pxr::PcpMapExpression;

    /// Evaluate this expression, yielding a PcpMapFunction value.
    /// The computed result is cached.
    /// The return value is a reference to the internal cached value.
    /// The cache is automatically invalidated as needed.
    const pxr::PcpMapExpression::Value& Evaluate() const;

    /// Default-construct a NULL expression.
    PcpMapExpression();

    /// Swap this expression with the other.
    void Swap(pxr::PcpMapExpression& other);

    /// Return true if this is a null expression.
    bool IsNull() const;

    /// Return an expression representing PcpMapFunction::Identity().
    static pxr::PcpMapExpression Identity();

    /// Create a new constant.
    static pxr::PcpMapExpression Constant(const pxr::PcpMapExpression::Value& constValue);

    /// Create a new variable.
    /// The client is expected to retain the reference for as long as
    /// it wishes to continue being able to set the value of the variable.
    /// After the reference is dropped, expressions using the variable
    /// will continue to be valid, but there will be no way to further
    /// change the value of the variable.
    #if 0
    static pxr::PcpMapExpression::VariableUniquePtr NewVariable(pxr::PcpMapExpression::Value&& initialValue);
    #endif

    /// Create a new PcpMapExpression representing the application of
    /// f's value, followed by the application of this expression's value.
    pxr::PcpMapExpression Compose(const pxr::PcpMapExpression& f) const;

    /// Create a new PcpMapExpression representing the inverse of f.
    pxr::PcpMapExpression Inverse() const;

    /// Return a new expression representing this expression with an added
    /// (if necessary) mapping from </> to </>.
    pxr::PcpMapExpression AddRootIdentity() const;

    /// Return true if the map function is the constant identity function.
    bool IsConstantIdentity() const;

    /// Return true if the evaluated map function is the identity function.
    /// For identity, MapSourceToTarget() always returns the path unchanged.
    bool IsIdentity() const;

    /// Map a path in the source namespace to the target.
    /// If the path is not in the domain, returns an empty path.
    pxr::SdfPath MapSourceToTarget(const pxr::SdfPath& path) const;

    /// Map a path in the target namespace to the source.
    /// If the path is not in the co-domain, returns an empty path.
    pxr::SdfPath MapTargetToSource(const pxr::SdfPath& path) const;

    /// The time offset of the mapping.
    const pxr::SdfLayerOffset& GetTimeOffset() const;

    /// Returns a string representation of this mapping for debugging
    /// purposes.
    std::string GetString() const;

    PcpMapExpression(const pxr::PcpMapExpression& );

    #if 0
    PcpMapExpression(pxr::PcpMapExpression&& ) CPPMM_IGNORE;
    #endif

    pxr::PcpMapExpression& operator=(const pxr::PcpMapExpression& );

    #if 0
    pxr::PcpMapExpression& operator=(pxr::PcpMapExpression&& ) CPPMM_IGNORE;
    #endif

    ~PcpMapExpression();


    /// A Variable is a mutable memory cell that holds a value.
    /// Changing a variable's value invalidates any expressions using
    /// that variable.
    struct Variable {
        using BoundType = pxr::PcpMapExpression::Variable;

        Variable();

        ~Variable();

        /// Return the current value.
        const pxr::PcpMapExpression::Value& GetValue() const;

        /// Mutate the variable to have the new value.
        /// This will also invalidate dependant expressions.
        #if 0
        void SetValue(pxr::PcpMapExpression::Value&& value);
        #endif

        /// Return an expression representing the value of this variable.
        /// This lets you use the variable as a sub-term in other expressions.
        pxr::PcpMapExpression GetExpression() const;

    } CPPMM_OPAQUEPTR; // struct Variable

#if 0
    struct _Node {
        using BoundType = pxr::PcpMapExpression::_Node;

        static pxr::PcpMapExpression::_NodeRefPtr New(pxr::PcpMapExpression::_Op op, const pxr::PcpMapExpression::_NodeRefPtr& arg1, const pxr::PcpMapExpression::_NodeRefPtr& arg2, const pxr::PcpMapExpression::Value& valueForConstant);

        ~_Node();

        const pxr::PcpMapExpression::Value& EvaluateAndCache() const;

        void SetValueForVariable(pxr::PcpMapExpression::Value&& newValue);

        const pxr::PcpMapExpression::Value& GetValueForVariable() const;

        _Node(const pxr::PcpMapExpression::_Node& );

        pxr::PcpMapExpression::_Node& operator=(const pxr::PcpMapExpression::_Node& );


        struct Key {
            using BoundType = pxr::PcpMapExpression::_Node::Key;

            Key(pxr::PcpMapExpression::_Op op_, const pxr::PcpMapExpression::_NodeRefPtr& arg1_, const pxr::PcpMapExpression::_NodeRefPtr& arg2_, const pxr::PcpMapExpression::Value& valueForConstant_);

            size_t GetHash() const;

            bool operator==(const pxr::PcpMapExpression::_Node::Key& key) const;

            Key(const pxr::PcpMapExpression::_Node::Key& );

            Key(pxr::PcpMapExpression::_Node::Key&& ) CPPMM_IGNORE;

            pxr::PcpMapExpression::_Node::Key& operator=(const pxr::PcpMapExpression::_Node::Key& );

            pxr::PcpMapExpression::_Node::Key& operator=(pxr::PcpMapExpression::_Node::Key&& ) CPPMM_IGNORE;

            ~Key();

        } CPPMM_OPAQUEPTR; // struct Key

    } CPPMM_OPAQUEPTR; // struct _Node

    enum _Op {
        _OpConstant = 0,
        _OpVariable = 1,
        _OpInverse = 2,
        _OpCompose = 3,
        _OpAddRootIdentity = 4,
    };
    #endif

} CPPMM_OPAQUEPTR; // struct PcpMapExpression


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
