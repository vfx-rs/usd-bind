use usd::stage::{self, InitialLoadSet, UsdStage};
use usd_geom::{sphere::UsdGeomSphere, xform::UsdGeomXform};
use usd_sdf::layer::SdfLayer;
use usd_sdf::path::SdfPath;
use usd_tf::token::TfToken;

fn main() {
    let stage = stage::create_new("HelloWorld.usda", InitialLoadSet::None);

    //     let xform = UsdGeomXform::define(&stage.as_weak(), &SdfPath::new("/hello"));
    //     let sphere = UsdGeomSphere::define(&stage.as_weak(), &SdfPath::new("/hello/world"));

    let xform =
        stage.define_prim(&SdfPath::new("/hello"), &TfToken::new("Xform"));
    let sphere = stage
        .define_prim(&SdfPath::new("/hello/world"), &TfToken::new("Sphere"));

    stage.get_root_layer().save(true);
}
