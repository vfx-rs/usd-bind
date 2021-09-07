#include <pxr/base/tf/token.h>
#include <abigen/pxr/base/tf/c-token.hpp>

void abi_gen_pxr_base_tf_c_token(std::ostream& os) {
	os << "pxrInternal_v0_20__pxrReserved__::TfToken" << "|" << sizeof(pxrInternal_v0_20__pxrReserved__::TfToken) << "|" << alignof(pxrInternal_v0_20__pxrReserved__::TfToken) << "\n";
}
