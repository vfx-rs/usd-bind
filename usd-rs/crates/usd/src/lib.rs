pub mod attribute;
pub mod common;
pub mod error;
pub mod prim;
pub mod prim_range;
pub mod property;
pub mod stage;
pub mod time_code;

pub use usd_tf as tf;
pub use usd_vt as vt;

#[cfg(test)]
mod test {
    #[test]
    fn test_error_iter() {
        use crate as usd;
        use usd::stage::{self, InitialLoadSet, UsdStage};
        use usd_tf::diagnostic_mgr::TfDiagnosticMgr;
        use usd_tf::error::TfError;

        let mgr = TfDiagnosticMgr::get_instance();
        mgr.set_quiet(true);

        stage::create_new("/NOEXIST/stage.usda", InitialLoadSet::None);

        let errors = mgr.get_errors(false);
        println!("Errors: {}", errors.len());
        for err in errors {
            println!("err: {}", err.to_string());
        }
    }
}
