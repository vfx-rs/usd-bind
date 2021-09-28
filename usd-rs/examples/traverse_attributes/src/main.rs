use std::path::Path;
use usd::stage::{open, InitialLoadSet, UsdStage};
use usd::time_code::UsdTimeCode;

use std::io::{self, Write};
use termcolor::{Color, ColorChoice, ColorSpec, StandardStream, WriteColor};

fn main() -> Result<(), Box<dyn std::error::Error + 'static>> {
    let manifest_dir = env!("CARGO_MANIFEST_DIR");
    let file = Path::new(manifest_dir)
        .parent()
        .unwrap()
        .parent()
        .unwrap()
        .join("data")
        .join("twocubes.usda");

    let stage = open(&file, InitialLoadSet::All)?;

    let mut stdout = StandardStream::stdout(ColorChoice::Always);

    for prim in stage.traverse() {
        stdout
            .set_color(
                ColorSpec::new().set_bold(true).set_fg(Some(Color::White)),
            )
            .unwrap();
        writeln!(&mut stdout, "{:?}: {}", prim, prim.type_name()).unwrap();
        stdout
            .set_color(
                ColorSpec::new().set_bold(false).set_fg(Some(Color::White)),
            )
            .unwrap();

        for attr in &prim.attributes() {
            stdout
                .set_color(
                    ColorSpec::new().set_bold(false).set_fg(Some(Color::White)),
                )
                .unwrap();

            writeln!(
                &mut stdout,
                "  {:16} {}",
                attr.type_name().as_token().as_str(),
                attr.name()
            )
            .unwrap();
            if let Some(v) = attr.get_value(UsdTimeCode::default()) {
                stdout
                    .set_color(
                        ColorSpec::new()
                            .set_bold(false)
                            .set_fg(Some(Color::Blue)),
                    )
                    .unwrap();
                writeln!(&mut stdout, "    {}", v).unwrap();
            }
        }
    }

    Ok(())
}
