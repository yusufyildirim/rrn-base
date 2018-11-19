type screenId = string;
type screen = unit => ReasonReact.reactClass;

type events;

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external registerScreen: (screenId, screen) => unit = "registerComponent";

[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external setRoot: 'a => unit = "";

/* EVENTS */
[@bs.module "react-native-navigation"] [@bs.scope "Navigation"]
external events: unit => events = "";

[@bs.send]
external _registerAppLaunchedListener: events => (unit => unit) => unit = "registerAppLaunchedListener";

let onAppLaunched =  (f: unit => unit) => events() -> _registerAppLaunchedListener(f)


let createScreen = Utils.createScreen;