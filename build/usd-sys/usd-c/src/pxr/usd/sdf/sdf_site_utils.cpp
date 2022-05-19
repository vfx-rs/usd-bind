#include "pxr/usd/sdf/sdf_site_utils_private.h"

#include "pxr/base/tf/tf_token_private.h"
#include "pxr/usd/sdf/sdf_site_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___SdfHasField(
    _Bool * return_
    , pxr_SdfSite_t const * site
    , pxr_TfToken_t const * field)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::SdfHasField(to_cpp_ref(site), to_cpp_ref(field));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

