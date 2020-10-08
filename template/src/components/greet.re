[@react.component]
let make = (~name) => {
  <div className=
    {%- if css_framework == 'TailwindCSS' -%}
    "text-center mt-12"
    {%- else -%}
    ""
    {%- endif %}>
    <p className=
    {%- if css_framework == 'TailwindCSS' -%}
    "text-3xl text-gray-900 mb-4"
    {%- else -%}
    ""
    {%- endif %}>
      {React.string({j|👋 Welcome $name! You can edit me in |j})}
      <code> {React.string("src/components/Greet.re")} </code>
    </p>
    <a
      className=
    {%- if css_framework == 'TailwindCSS' -%}
    "text-3xl no-underline text-blue-500"
    {%- else -%}
    ""
    {%- endif %}
      href="https://reasonml.github.io/reason-react/">
      {React.string("Learn Reason React")}
    </a>
  </div>;
};
