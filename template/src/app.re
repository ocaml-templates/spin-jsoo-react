[@react.component]
let make = () => {
  let route = Router.useRouter();

  switch (route) {
  | Some(Home) => <Page_home />
  | None => <Page_not_found />
  };
};
