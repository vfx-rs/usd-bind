use cppmm_build::{build, Dependency};

fn main() {
    build(
        "usd",
        0,
        1,
        &vec![
            Dependency {
                name: "usd",
                definitions: vec![
                ],
            },
        ],
    );
}


