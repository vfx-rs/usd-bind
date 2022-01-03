#include <cppmm_bind.hpp>
#include <pxr/base/vt/dictionary.h>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// \defgroup group_vtdict_functions VtDictionary Functions
/// Functions for manipulating VtDictionary objects.

/// \class VtDictionary
///
/// A map with string keys and VtValue values.
///
/// VtDictionary converts to and from a python dictionary as long
/// as each element contains either
///   - another VtDictionary  (converts to a nested dictionary)
///   - std::vector<VtValue>  (converts to a nested list)
///   - VtValue with one of the supported Vt Types.
///
/// For a list of functions that can manipulate VtDictionary objects, see the
/// \link group_vtdict_functions VtDictionary Functions \endlink group page .
///
struct VtDictionary {
    using BoundType = pxr::VtDictionary;

    VtDictionary();
    ~VtDictionary();
    
} CPPMM_OPAQUEPTR;

} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
