open BsReactNative;

module Styles = {
  open Style;
  let container = style([height(Pt(60.)), elevation(0.)]);
  let toolbarContainer =
    style([
      flex(1.),
      flexDirection(Row),
      alignItems(Center),
      height(Pt(46.)),
      marginHorizontal(Pt(32.)),
    ]);
  let title = style(Theme.Styles.text);
};

let component = ReasonReact.statelessComponent("Toolbar");

let make = _children => {
  ...component,
  render: _self =>
    <View style=Styles.container>
      <View style=Styles.toolbarContainer>
        <Image
          source=(URI(Image.(imageURISource(~uri="../assets/logo.png", ()))))
        />
        <Text style=Styles.title> ("App" |. ReasonReact.string) </Text>
      </View>
    </View>,
};