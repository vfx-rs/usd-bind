#if 0
#include <pxr/usd/sdf/schemaTypeRegistration.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

/// Registers each built-in Sd field along with its C++ value type with
/// \p reg. \p reg can be any type that has a member function:
///     template <class T> void RegisterField(const TfToken&);
/// 
/// This function will be invoked for each (field, type) pair. The template
/// type T will be the C++ value type and the TfToken will be the field name.
template <typename Registrar>
void SdfRegisterFields(Registrar* reg);


/// Registers all possible C++ value types for built-in fields with \p reg. 
/// This is the set of C++ types that are used by built-in fields and could
/// be returned from an SdfAbstractData container. \p reg can be any type that
/// has a member function:
///    template <class T> void RegisterType();
/// 
/// This function will be invoked for each C++ value type, which will be
/// given to the function as the template type T. Note that this function may
/// be called with the same T multiple times.
template <typename Registrar>
void SdfRegisterTypes(Registrar* reg);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
