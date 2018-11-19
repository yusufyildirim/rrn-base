open BsReactNative;

let component = ReasonReact.statelessComponent("TestScreen");

let make = (~screenId, _children) => {
  ...component,
  render: _self => (
    <SafeAreaView>
      <Text> (ReasonReact.string("Let's get this party started!")) </Text>
    </SafeAreaView>
  )
}

let screen = Navigation.createScreen(~component, ~make);