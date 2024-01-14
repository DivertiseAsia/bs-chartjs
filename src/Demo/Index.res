open ReactDOM.Client

switch ReactDOM.querySelector("#content") {
| Some(root) => createRoot(root)->Root.render(<MainPage />)
| None => () // do nothing
}
