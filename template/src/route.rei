type t =
  | Home;

let fromUrl: React.Router.url => option(t);

type t';

external toString: t' => string = "%identity";

let home: t';
