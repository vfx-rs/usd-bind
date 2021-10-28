#include <cstddef>
#include <string>
#include <map>

// CPPMM_ macro definitions etc automatically inserted in this virtual header
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace std {

#if defined(_LIBCPP_VERSION)
namespace std = ::std::_LIBCPP_ABI_NAMESPACE;
#else
namespace std = ::std;
#endif

template <class K, class V> class map {
public:
    // This allows us to see through to the type in Imath
    using BoundType = std::map<K,V>;

    map() CPPMM_RENAME(ctor);
    map(const std::map<K,V>& rhs);
    ~map();

    size_t size() const;

    const V& operator[](const K & key) const CPPMM_RENAME(index);
    V& operator[](const K & key) CPPMM_RENAME(index_mut);

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND;

// explicit instantiation
template class map<::std::string, ::std::string>;
using map_string_string = ::std::map<::std::string, ::std::string>;

} // namespace std

} // namespace cppmm_bind

template class std::map<std::string, std::string>;
