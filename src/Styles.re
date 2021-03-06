let verylightgray = "rgb(242, 242, 242)";
let lightgray = "rgb(222, 222, 222)";
let darkgray = "rgb(111, 111, 111)";
// let selected_color = "rgb(222, 222, 111)";
let good_color = "rgb(64, 128, 64)";
let good_color_light = "rgb(96, 192, 96)";

// The {j|...|j} feature is just string interpolation, from
// bucklescript.github.io/docs/en/interop-cheatsheet#string-unicode-interpolation
// This allows us to conveniently write CSS, together with variables, by
// constructing a string
let style = {j|
  body {
    background-color: $darkgray;
    display: flex;
    flex-direction: column;
    align-items: center;
    padding: 20px 40px;
  }
  .unselectable {
    -webkit-user-select: none; /* Chrome/Safari */
    -moz-user-select: none; /* Firefox */
    -ms-user-select: none; /* IE10+ */

    /* Rules below not implemented in browsers yet */
    -o-user-select: none;
    user-select: none;
  }
  // pre span {
  //   background-color: $verylightgray;
  // }
  pre {
    white-space: pre-wrap;
    word-break: keep-all;
    margin: 0px;
  }
  .center {
    text-align: center;
    align-items: center;
  }
  .react-main {
    width: 100%;
  }
  .fullwidth {
    width: 100%;
  }
  .levelselect {
    width: 100px;
  }
  .levelselect .levelitem {
    border: 1px solid $darkgray;
    background-color: $lightgray;
    border-radius: 10px;
    text-align: center;
    padding: 5px;
  }
  .levelselect .levelitem.levellocked {
    border: 1px solid $lightgray;
    background-color: $darkgray;
    pointer-events: none;
  }
  .levelselect .levelitem.levelsolved {
    background-color: $good_color_light;
  }
  .selectedlevel.levelitem {
    border-width: 3px !important;
  }
  button {
    background-color: $lightgray;
    box-shadow: 0 0 0 1px $darkgray;
    border: none;
    border-radius: 10px;
    padding: 8px;
    font-size: 16px;
  }
  pre {
  }
  .container {
    margin: 12px 0px;
    box-shadow: 0px 4px 16px rgb(200, 200, 200);
    border-radius: 12px;
    font-family: sans-serif;
  }
  .containerTitle {
    text-align: center;
    background-color: rgb(242, 243, 245);
    border-radius: 12px 12px 0px 0px;
    padding: 12px;
    padding-left: 120px;
    font-weight: bold;
    font-size: 24px;
  }
  .containerContent {
    background-color: white;
    padding: 16px;
    border-radius: 0px 0px 12px 12px;
  }
  .messages_container {
    max-height: 500px;
    overflow-y: scroll;
  }
  .message_pair {
    margin-bottom: 10px;
  }
  .damnedmessage {
    // background-color: rgb(256, 224, 224);
    color: rgb(256, 128, 128);
    display: inline-block;
  }
  .goodmessage {
    color: $good_color;
    // color: rgb(256, 64, 64);
    display: inline-block;
  }
  .undamnedmessage {
    // background-color: rgb(256, 256, 224);
    display: inline-block;
  }
|j};
