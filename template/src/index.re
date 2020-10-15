let _ = Js_of_ocaml.Js.Unsafe.js_expr("require('./styles.css')")

React.Dom.renderToElementWithId(<App />, "root");
