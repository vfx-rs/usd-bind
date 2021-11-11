#include <pxr/base/gf/matrix2d.h>
#include <pxr/base/gf/matrix2f.h>
#include <pxr/base/gf/matrix3d.h>
#include <pxr/base/gf/matrix3f.h>
#include <pxr/base/gf/matrix4d.h>
#include <pxr/base/gf/matrix4f.h>
#include <abigen/pxr/base/gf/gf_matrix.hpp>

void abi_gen_pxr_base_gf_gf_matrix(std::ostream& os) {
	os << "pxrInternal_v0_20__pxrReserved__::GfMatrix2f" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfMatrix2f) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfMatrix2f) << "\n";
	os << "pxrInternal_v0_20__pxrReserved__::GfMatrix2d" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfMatrix2d) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfMatrix2d) << "\n";
	os << "pxrInternal_v0_20__pxrReserved__::GfMatrix3f" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfMatrix3f) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfMatrix3f) << "\n";
	os << "pxrInternal_v0_20__pxrReserved__::GfMatrix3d" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfMatrix3d) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfMatrix3d) << "\n";
	os << "pxrInternal_v0_20__pxrReserved__::GfMatrix4f" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfMatrix4f) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfMatrix4f) << "\n";
	os << "pxrInternal_v0_20__pxrReserved__::GfMatrix4d" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::GfMatrix4d) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::GfMatrix4d) << "\n";
}
