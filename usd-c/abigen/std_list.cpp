#include <list>
#include <pxr/base/tf/diagnosticMgr.h>
#include <pxr/base/tf/error.h>
#include <string>
#include <abigen/std_list.hpp>

void abi_gen_std_list(std::ostream& os) {
	os << "pxr::TfDiagnosticMgr::ErrorIterator" << "|" << sizeof(pxr::TfDiagnosticMgr::ErrorIterator) << "|" << alignof(pxr::TfDiagnosticMgr::ErrorIterator) << "\n";
}
