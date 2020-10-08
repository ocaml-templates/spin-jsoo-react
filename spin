(name spin-jsoo-react)
(description "React application with Js_of_ocaml")

(config project_name
  (input (prompt "Project name")))

(config project_slug
  (input (prompt "Project slug"))
  (default (slugify :project_name))
  (rules
    ("The project slug must be lowercase and contain ASCII characters and '-' only."
      (eq :project_slug (slugify :project_slug)))))

(config project_snake
  (default (snake_case :project_slug)))

(config project_description
  (input (prompt "Description"))
  (default "A short, but powerful statement about your project"))

(config username
  (input (prompt "Name of the author")))

(config syntax
  (select
    (prompt "Which syntax do you use?")
    (values Reason OCaml))
  (default Reason))

(config css_framework
  (select
    (prompt "Which CSS framework do you use?")
    (values TailwindCSS None))
  (default None))

(config ci_cd
  (select
    (prompt "Which CI/CD do you use?")
    (values Github None))
  (default Github))

(ignore 
  (files config/postcss.config.js config/tailwind.config.js)
  (enabled_if (neq :css_framework TailwindCSS)))

(ignore
  (files .github/*)
  (enabled_if (neq :ci_cd Github)))

(post_gen
  (actions 
    (run make dev)
    (run make build))
  (message "🎁  Installing packages. This might take a couple minutes."))

(post_gen
  (actions
    (refmt src/*.re src/*.rei src/*/*.re src/*/*.rei))
  (enabled_if (eq :syntax OCaml)))

(example_commands
  (commands
    ("make dev" "Download runtime and development dependencies.")
    ("make start" "Start the compiler development web server in watch mode.")
    ("make build" "Build the dependencies and the project.")
    ("make test" "Starts the test runner.")))
