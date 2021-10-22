#include <pxr/base/gf/quatd.h>
#include <pxr/base/gf/quatf.h>
#include <pxr/base/gf/quath.h>
#include <abigen/pxr/base/gf/gf_quat.hpp>

void abi_gen_pxr_base_gf_gf_quat(std::ostream& os) {
	os << "pxrInternal_v0_20__pxrReserved__::GfQuath" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfQuath) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfQuath) << "\n";
	os << "pxrInternal_v0_20__pxrReserved__::GfQuatf" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfQuatf) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfQuatf) << "\n";
	os << "pxrInternal_v0_20__pxrReserved__::GfQuatd" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfQuatd) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfQuatd) << "\n";
}
