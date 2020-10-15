# Contributing

## Setup your development environment

1. (Optional) Create an opam [local switch](https://opam.ocaml.org/blog/opam-20-tips/#Local-switches) by running:

```bash
make create_switch
```

_Note: you can ignore this step if you prefer to use the global opam switch._

2. Get all dependencies:

```bash
make dev
```

3. Build and start a local server:

```bash
make start
```

### Running Tests

This project uses Jest as a test framework. You can run the tests of the project with:

```bash
yarn test
# Or
npm run test
```

### Creating production builds

To create a production build of the application, you can run:

```bash
yarn build
# Or
npm run build
```

This will output the compiled files in `build/`.

### Repository Structure

The following snippet describes JSOO React's repository structure.

```text
.
├── config/
|   Configuration files used to build the project, such as the webpack configuration.
│
├── public/
|   Static assets that you want to include when serving your application. 
│   The content of this folder will get copied to the production build.
│
├── src/
|   Source code of the project application.
│
├── tests/
|   Unit tests of the project.
│
├── LICENSE
│
├── package.json
│
└── README.md
```
