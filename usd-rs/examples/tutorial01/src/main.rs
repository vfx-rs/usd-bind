use usd::stage::{self, UsdStage, InitialLoadSet};
use usd_sdf::layer::SdfLayer;
use usd_geom::{xform, sphere};

fn main() {
    let stage = stage::create_new("HelloWorld.usda", InitialLoadSet::None);

    let xform = 

    stage.get_root_layer().save(true);
}
