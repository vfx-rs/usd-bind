use std::fmt;
use usd_tf::diagnostic_mgr::TfDiagnosticMgr;

#[derive(Debug, Clone)]
pub enum Error {
    Usd,
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Usd => {
                write!(f, "USD Error")?;
            }
        }

        Ok(())
    }
}

impl std::error::Error for Error {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        None
    }
}

pub fn get_error_strings() -> Vec<String> {
    TfDiagnosticMgr::get_instance()
        .get_errors(true)
        .iter()
        .map(|e| e.to_string())
        .collect()
}
