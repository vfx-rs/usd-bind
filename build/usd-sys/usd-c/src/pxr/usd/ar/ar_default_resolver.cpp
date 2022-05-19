#include "pxr/usd/ar/ar_default_resolver_private.h"

#include "std_vector_private.h"
#include <new>

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolver_ctor(
    pxr_ArDefaultResolver_t * * this_)
{
    try {
        to_c(this_, new pxrInternal_v0_21__pxrReserved__::ArDefaultResolver());
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolver_dtor(
    pxr_ArDefaultResolver_t * this_)
{
    try {
        delete to_cpp(this_);
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____ArDefaultResolver_SetDefaultSearchPath(
    std_vector_string_t const * searchPath)
{
    try {
        pxrInternal_v0_21__pxrReserved__::ArDefaultResolver::SetDefaultSearchPath(to_cpp_ref(searchPath));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

