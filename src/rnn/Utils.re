let createScreen = (~component, ~make) => {
  let m = props => make(~screenId=props##screenId, [||]);

  ReasonReact.wrapReasonForJs(~component, m);
}