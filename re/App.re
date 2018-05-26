open BsReactNative;

module Styles = {
  open Style;
  let container =
    style([backgroundColor(String("#181818")), height(Pct(100.))]);
  let welcome =
    style([textAlign(Center), margin(Pt(10.)), ...Theme.Styles.text]);
  let instructions =
    style([
      textAlign(Center),
      color(String("#333333")),
      marginBottom(Pt(5.)),
    ]);
};

let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <View style=Styles.container>
      <Toolbar />
      <View>
        <Text style=Styles.welcome>
          ("Welcome to React-Native" |. ReasonReact.string)
        </Text>
      </View>
    </View>,
};

let app = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));