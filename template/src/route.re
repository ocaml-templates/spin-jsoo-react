type t =
  | Home;

let fromUrl = (url: React.Router.url) =>
  switch (url.path) {
  | [] => Some(Home)
  | _ => None
  };

type t';

external make: string => t' = "%identity";
external toString: t' => string = "%identity";

let home = "/" |> make;
