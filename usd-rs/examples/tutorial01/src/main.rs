use usd::stage::{self, InitialLoadSet, UsdStage};
use usd_geom::{sphere::UsdGeomSphere, xform::UsdGeomXform};
use usd_sdf::layer::SdfLayer;
use usd_sdf::path::SdfPath;
use usd_tf::token::TfToken;

fn main() -> Result<(), Box<dyn std::error::Error + 'static>> {
    let stage = stage::create_new("HelloWorld.usda", InitialLoadSet::None)?;

    let xform =
        stage.define_prim(&SdfPath::new("/hello"), &TfToken::new("Xform"));
    let sphere = stage
        .define_prim(&SdfPath::new("/hello/world"), &TfToken::new("Sphere"));

    // sphere.set_hidden(true);        // mutates stage
    // println!("{}", xform.name());   // but we're still holding a reference to it

    stage.get_root_layer().save(true);

    Ok(())
}
