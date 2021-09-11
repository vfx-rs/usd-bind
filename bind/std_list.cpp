#include <string>
#include <list>

#include <pxr/base/tf/error.h>
#include <pxr/base/tf/diagnosticMgr.h>

#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace std {

#if defined(_GLIBCXX_USE_CXX11_ABI)
#if _GLIBCXX_USE_CXX11_ABI
namespace std = ::std::__cxx11;
#else
namespace std = ::std;
#endif
#elif defined(_LIBCPP_VERSION)
namespace std = ::std::_LIBCPP_ABI_NAMESPACE;
#else
namespace std = ::std;
#endif

template <typename T>
struct list {
    using BoundType = std::list<T>;
    list();

    struct iterator {
        using BoundType = typename std::list<T>::iterator;

        iterator(const BoundType& iterator) CPPMM_MANUAL;

        BoundType& operator++() CPPMM_RENAME(op_inc);
        const T& operator*() const CPPMM_RENAME(deref) CPPMM_MANUAL;
        T& operator*() CPPMM_RENAME(deref_mut) CPPMM_MANUAL;

        bool operator==(const BoundType& rhs) const CPPMM_RENAME(op_eq) CPPMM_MANUAL;

    } CPPMM_OPAQUEBYTES CPPMM_IGNORE_UNBOUND;

} CPPMM_OPAQUEPTR CPPMM_IGNORE_UNBOUND;

/*
template class list<::std::string>;
using list_string CPPMM_FORCE_NAME("std::list<std::string>") = ::std::list<::std::string>;

using list_string_iterator CPPMM_FORCE_NAME("std::list<std::string>::iterator") = ::std::list<::std::string>::iterator;
*/

template class list<pxr::TfError>;
using TfDiagnosticMgr_ErrorList CPPMM_FORCE_NAME("pxr::TfDiagnosticMgr::ErrorList") = pxr::TfDiagnosticMgr::ErrorList;

using TfDiagnosticMgr_ErrorIterator CPPMM_FORCE_NAME("pxr::TfDiagnosticMgr::ErrorIterator") = ::pxr::TfDiagnosticMgr::ErrorIterator;

} // namespace std

} // namespace cppmm_bind

/* template class pxr::ErrorList; */
