open BsReactNative;

let root = [%bs.obj {
  root: { component: { name: "TestScreen" } }
}];

Screens.registerScreens();

Navigation.onAppLaunched(() => {
  Navigation.setRoot(root);
})