let useRouter = () => ReactRouter.useUrl() |> Route.fromUrl;

let push = route => route |> Route.toString |> ReactRouter.push;

module Link = {
  [@react.component]
  let make = (~route: Route.t', ~children) => {
    let location = route |> Route.toString;

    <a
      href=location
      onClick={event =>
        if (!ReactEvent.Mouse.defaultPrevented(event)
            && ReactEvent.Mouse.button(event) == 0
            && !ReactEvent.Mouse.altKey(event)
            && !ReactEvent.Mouse.ctrlKey(event)
            && !ReactEvent.Mouse.metaKey(event)
            && !ReactEvent.Mouse.shiftKey(event)) {
          event |> ReactEvent.Mouse.preventDefault;
          location |> ReactRouter.push;
        }
      }>
      children
    </a>;
  };
};
