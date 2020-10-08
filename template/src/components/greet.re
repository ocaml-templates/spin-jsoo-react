[@react.component]
let make = (~name) => {
  <div className="text-center mt-12">
    <p className="text-3xl text-gray-900 mb-4">
      {React.string("👋 Welcome " ++ name ++ "! You can edit me in ")}
      <code> {React.string("src/components/Greet.re")} </code>
    </p>
    <a
      className="text-3xl no-underline text-blue-500"
      href="https://reasonml.github.io/reason-react/">
      {React.string("Learn Reason React")}
    </a>
  </div>;
};
