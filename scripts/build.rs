use cppmm_build::{build, Dependency};

fn main() {
    build(
        "PROJECT_NAME",
        MAJOR_VERSION,
        MINOR_VERSION,
        &vec![
            Dependency {
                name: "usd",
                definitions: vec![
                ],
            },
        ],
    );
}


