type t =
  | Home;

let fromUrl: ReactRouter.url => option(t);

type t';

external toString: t' => string = "%identity";

let home: t';