use usd::stage::UsdStagePtr;
use usd_sdf::path::SdfPath;
use usd_sys as sys;
use usd_tf::token::TfToken;

pub fn stage_up_axis(stage: &UsdStagePtr) -> TfToken {
    let mut result = sys::pxr_TfToken_t::default();
    unsafe {
        sys::pxr_UsdGeomGetStageUpAxis(&mut result, stage.0);
    }

    TfToken(result)
}
