#include <pxr/usd/usd/common.h>
#include <cppmm_bind.hpp>

namespace cppmm_bind {

namespace PXR_INTERNAL_NS {

namespace pxr = ::PXR_INTERNAL_NS;

enum UsdListPosition {
    UsdListPositionFrontOfPrependList = 0,
    UsdListPositionBackOfPrependList = 1,
    UsdListPositionFrontOfAppendList = 2,
    UsdListPositionBackOfAppendList = 3,
} CPPMM_RUSTIFY_ENUM CPPMM_ENUM_PREFIX(UsdListPosition);

enum UsdLoadPolicy {
    UsdLoadWithDescendants = 0,
    UsdLoadWithoutDescendants = 1,
} CPPMM_RUSTIFY_ENUM CPPMM_ENUM_PREFIX(UsdLoad);

enum UsdSchemaType {
    AbstractBase = 0,
    AbstractTyped = 1,
    ConcreteTyped = 2,
    NonAppliedAPI = 3,
    SingleApplyAPI = 4,
    MultipleApplyAPI = 5,
} CPPMM_RUSTIFY_ENUM;

/*
using UsdStageWeakPtr = pxr::UsdStageWeakPtr;


/// Return a human-readable description.
std::string UsdDescribe(const pxr::UsdObject& );


/// \overload
std::string UsdDescribe(const pxr::UsdStageRefPtr& );


/// \overload
std::string UsdDescribe(const pxr::UsdStageWeakPtr& );


/// \overload
std::string UsdDescribe(const pxr::UsdStage* );


/// \overload
std::string UsdDescribe(const pxr::UsdStage& );


/// \overload
std::string UsdDescribe(const pxr::UsdStageCache& );


using UsdMetadataValueMap = pxr::UsdMetadataValueMap;
    */


} // namespace PXR_INTERNAL_NS

} // namespace cppmm_bind
