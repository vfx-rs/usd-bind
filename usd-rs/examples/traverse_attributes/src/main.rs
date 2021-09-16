use std::path::Path;
use usd::stage::{open, InitialLoadSet, UsdStage};
use usd::time_code::UsdTimeCode;

fn main() -> Result<(), Box<dyn std::error::Error + 'static>> {
    let manifest_dir = env!("CARGO_MANIFEST_DIR");
    let file = Path::new(manifest_dir)
        .parent()
        .unwrap()
        .parent()
        .unwrap()
        .join("data")
        .join("box_vertex_colors.usda");

    let stage = open(&file, InitialLoadSet::All)?;

    for prim in stage.traverse() {
        println!("{:?}: {}", prim, prim.type_name());

        for attr in &prim.attributes() {
            print!(
                "    {:<16} {:<32}",
                attr.type_name().as_token(),
                attr.name()
            );
            if let Some(v) = attr.get_value(UsdTimeCode::default()) {
                println!(" = {}", v);
            } else {
                println!("");
            }
        }
    }

    Ok(())
}
