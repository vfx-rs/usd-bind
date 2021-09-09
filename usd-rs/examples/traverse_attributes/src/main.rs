use usd::stage::{open, InitialLoadSet, UsdStage};
use std::path::Path;

fn main() {
    let manifest_dir = env!("CARGO_MANIFEST_DIR");
    let file = Path::new(manifest_dir)
        .parent()
        .unwrap()
        .parent()
        .unwrap()
        .join("data")
        .join("box_vertex_colors.usda");

    let stage = open(&file, InitialLoadSet::All);

    for prim in stage.traverse() {
        println!("{:?}: {}", prim, prim.type_name());

        for attr in &prim.attributes() {
            println!("    {} - {}", attr.name(), attr.type_name().as_token());
        }
    }
}
