#include <pxr/base/tf/token.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \class TfToken
/// \ingroup group_tf_String
/// 
/// Token for efficient comparison, assignment, and hashing of known strings.
/// 
/// A TfToken is a handle for a registered string, and can be compared,
/// assigned, and hashed in constant time.  It is useful when a bounded number
/// of strings are used as fixed symbols (but never modified).
/// 
/// For example, the set of avar names in a shot is large but bounded, and
/// once an avar name is discovered, it is never manipulated.  If these names
/// were passed around as strings, every comparison and hash would be linear
/// in the number of characters.  (String assignment itself is sometimes a
/// constant time operation, but it is sometimes linear in the length of the
/// string as well as requiring a memory allocation.)
/// 
/// To use TfToken, simply create an instance from a string or const char*.
/// If the string hasn't been seen before, a copy of it is added to a global
/// table.  The resulting TfToken is simply a wrapper around an string*,
/// pointing that canonical copy of the string.  Thus, operations on the token
/// are very fast.  (The string's hash is simply the address of the canonical
/// copy, so hashing the string is constant time.)
/// 
/// The free functions *TfToTokenVector*() and *TfToStringVector*() provide
/// conversions to and from vectors of *string*.
/// 
/// Note: Access to the global table is protected by a mutex.  This is a good
/// idea as long as clients do not construct tokens from strings too
/// frequently.  Construct tokens only as often as you must (for example, as
/// you read data files), and <i>never</i> in inner loops.  Of course, once
/// you have a token, feel free to compare, assign, and hash it as often as
/// you like.  (That's what it's for.)  In order to help prevent tokens from
/// being re-created over and over, auto type conversion from *string* and \c
/// char* to *TfToken* is disabled (you must use the explicit *TfToken*
/// constructors).  However, auto conversion from *TfToken* to *string* and
/// *char** is provided.
struct TfToken {
    using BoundType = pxr::TfToken;

    /// Create the empty token, containing the empty string.
    TfToken();

    /// Copy constructor.
    TfToken(const pxr::TfToken& rhs);

    /// Move constructor.
    TfToken(pxr::TfToken&& rhs) CPPMM_IGNORE;

    /// Copy assignment.
    pxr::TfToken& operator=(const pxr::TfToken& rhs) CPPMM_IGNORE;

    /// Move assignment.
    pxr::TfToken& operator=(pxr::TfToken&& rhs) CPPMM_IGNORE;

    /// Destructor.
    ~TfToken();

    /// Acquire a token for the given string.
    TfToken(const std::string& s) CPPMM_RENAME(from_string);

    /// \overload
    TfToken(const std::string& s, pxr::TfToken::_ImmortalTag ) CPPMM_RENAME(immortal_from_string);

    /// Acquire a token for the given string.
    TfToken(const char* s) CPPMM_RENAME(from_char_ptr);

    /// \overload
    TfToken(const char* s, pxr::TfToken::_ImmortalTag ) CPPMM_RENAME(immortal_from_char_ptr);

    /// Find the token for the given string, if one exists.
    static pxr::TfToken Find(const std::string& s);

    size_t Hash() const;

    /// Return the size of the string that this token represents.
    size_t size() const;

    /// Return the text that this token represents.
    /// 
    /// \note The returned pointer value is not valid after this TfToken
    /// object has been destroyed.
    const char* GetText() const;

    /// Synonym for GetText().
    const char* data() const;

    /// Return the string that this token represents.
    const std::string& GetString() const;

    /// Swap this token with another.
    void Swap(pxr::TfToken& other);

    /// Equality operator
    bool operator==(const pxr::TfToken& o) const;

    /// Equality operator
    bool operator!=(const pxr::TfToken& o) const CPPMM_IGNORE;

    /// Equality operator for *char* strings.  Not as fast as direct
    /// token to token equality testing
    bool operator==(const std::string& o) const CPPMM_IGNORE;

    /// Equality operator for *char* strings.  Not as fast as direct
    /// token to token equality testing
    bool operator==(const char* ) const CPPMM_RENAME(eq_c_str);

    /// Inequality operator for *string*'s.  Not as fast as direct
    /// token to token equality testing
    bool operator!=(const std::string& o) const CPPMM_IGNORE;

    /// Inequality operator for *char* strings.  Not as fast as direct
    /// token to token equality testing
    bool operator!=(const char* o) const CPPMM_IGNORE;

    /// Less-than operator that compares tokenized strings lexicographically.
    /// Allows *TfToken* to be used in *std*::set
    bool operator<(const pxr::TfToken& r) const CPPMM_IGNORE;

    /// Greater-than operator that compares tokenized strings lexicographically.
    bool operator>(const pxr::TfToken& o) const CPPMM_IGNORE;

    /// Greater-than-or-equal operator that compares tokenized strings
    /// lexicographically.
    bool operator>=(const pxr::TfToken& o) const CPPMM_IGNORE;

    /// Less-than-or-equal operator that compares tokenized strings
    /// lexicographically.
    bool operator<=(const pxr::TfToken& o) const CPPMM_IGNORE;

    /// Allow *TfToken* to be auto-converted to *string*
#if 0
    operator const std::string &() const;
#endif

    /// Returns *true* iff this token contains the empty string **""
    bool IsEmpty() const;

    /// Returns *true* iff this is an immortal token.
    bool IsImmortal() const;


    enum _ImmortalTag {
        Immortal = 0,
    };

#if 0
    /// Functor to use for hash maps from tokens to other things.
    struct HashFunctor {
        using BoundType = pxr::TfToken::HashFunctor;

        size_t operator()(const pxr::TfToken& token) const;

    } CPPMM_OPAQUEPTR; // struct HashFunctor


    struct _Rep {
        using BoundType = pxr::TfToken::_Rep;

        _Rep();

        _Rep(const char* s);

        _Rep(const std::string& s);

        _Rep(const pxr::TfToken::_Rep& rhs);

        pxr::TfToken::_Rep& operator=(const pxr::TfToken::_Rep& rhs);

        bool IncrementIfCounted() const;

        ~_Rep();

    } CPPMM_OPAQUEPTR; // struct _Rep
#endif

} CPPMM_OPAQUEBYTES; // struct TfToken


#if 0
/// Fast but non-lexicographical (in fact, arbitrary) less-than comparison for
/// TfTokens.  Should only be used in performance-critical cases.
struct TfTokenFastArbitraryLessThan {
    using BoundType = pxr::TfTokenFastArbitraryLessThan;

    bool operator()(const pxr::TfToken& lhs, const pxr::TfToken& rhs) const;

} CPPMM_OPAQUEPTR; // struct TfTokenFastArbitraryLessThan


/// Convert the vector of strings *sv* into a vector of *TfToken*
std::vector<pxrInternal_v0_20__pxrReserved__::TfToken, std::allocator<pxrInternal_v0_20__pxrReserved__::TfToken> > TfToTokenVector(const std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > >& sv);


/// Convert the vector of *TfToken* *tv* into a vector of strings
std::vector<std::__cxx11::basic_string<char>, std::allocator<std::__cxx11::basic_string<char> > > TfToStringVector(const std::vector<pxrInternal_v0_20__pxrReserved__::TfToken, std::allocator<pxrInternal_v0_20__pxrReserved__::TfToken> >& tv);


/// Overload hash_value for TfToken.
size_t hash_value(const pxr::TfToken& x);


    using TfTokenVector = pxr::TfTokenVector;

#endif


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
