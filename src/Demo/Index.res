switch ReactDOM.querySelector("#content") {
| Some(root) => ReactDOM.render(<MainPage />, root)
| None => () // do nothing
}
