#if 0
#include <pxr/usd/sdf/siteUtils.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

pxr::SdfSpecHandle SdfGetObjectAtPath(const pxr::SdfSite& site);


pxr::SdfPrimSpecHandle SdfGetPrimAtPath(const pxr::SdfSite& site);


pxr::SdfPropertySpecHandle SdfGetPropertyAtPath(const pxr::SdfSite& site);


bool SdfHasField(const pxr::SdfSite& site, const pxr::TfToken& field);


template <typename T>
bool SdfHasField(const pxr::SdfSite& site, const pxr::TfToken& field, T* value);


const pxr::VtValue SdfGetField(const pxr::SdfSite& site, const pxr::TfToken& field);


template <typename T>
T SdfGetFieldAs(const pxr::SdfSite& site, const pxr::TfToken& field, const T& defaultValue);


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
#endif
