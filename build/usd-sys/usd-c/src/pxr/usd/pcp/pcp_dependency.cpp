#include "pxr/usd/pcp/pcp_dependency_private.h"

#include "pxr/usd/pcp/pcp_node_private.h"
#include "std_string_private.h"

#include <stdexcept>

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDependency__eq(
    pxr_PcpDependency_t const * this_
    , _Bool * return_
    , pxr_PcpDependency_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator==(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved____PcpDependency__ne(
    pxr_PcpDependency_t const * this_
    , _Bool * return_
    , pxr_PcpDependency_t const * rhs)
{
    try {
        *(return_) = (to_cpp(this_)) -> operator!=(to_cpp_ref(rhs));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpNodeIntroducesDependency(
    _Bool * return_
    , pxr_PcpNodeRef_t const * n)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpNodeIntroducesDependency(to_cpp_ref(n));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpClassifyNodeDependency(
    unsigned int * return_
    , pxr_PcpNodeRef_t const * n)
{
    try {
        *(return_) = pxrInternal_v0_21__pxrReserved__::PcpClassifyNodeDependency(to_cpp_ref(n));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

USD_CPPMM_API unsigned int pxrInternal_v0_21__pxrReserved___PcpDependencyFlagsToString(
    std_string_t * * return_
    , unsigned int const flags)
{
    try {
        to_c_copy(return_, pxrInternal_v0_21__pxrReserved__::PcpDependencyFlagsToString(flags));
        return 0;
    } catch (std::exception& e) {
        TLG_EXCEPTION_STRING = e.what();
        return -1;
    }
}

