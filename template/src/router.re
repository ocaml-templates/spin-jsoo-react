module Router = React.Router;
module Event = React.Event;
let useRouter = () => Router.useUrl() |> Route.fromUrl;

let push = route => route |> Route.toString |> Router.push;

module Link = {
  [@react.component]
  let make = (~route: Route.t', ~children) => {
    let location = route |> Route.toString;

    <a
      href=location
      onClick={event =>
        if (!Event.Mouse.defaultPrevented(event)
            && Event.Mouse.button(event) == 0
            && !Event.Mouse.altKey(event)
            && !Event.Mouse.ctrlKey(event)
            && !Event.Mouse.metaKey(event)
            && !Event.Mouse.shiftKey(event)) {
          event |> Event.Mouse.preventDefault;
          location |> Router.push;
        }
      }>
      children
    </a>;
  };
};
