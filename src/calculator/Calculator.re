/* Types */
type state = {
  expression: string,
  result: float
};

let initialState = {
  expression: "",
  result: 9.0
};

/* Helper functions */
let toString = ReasonReact.string;

let component = ReasonReact.reducerComponent("App");

let make = (_children) => {
  ...component,
  initialState: () => initialState,
  reducer: (action, state) =>
    ReasonReact.Update({expression: state.expression ++ action, result: state.result}),
  render: ({state, send}) =>
    <div className="calculator">
      <div className="expression">
        <p>(state.expression |> toString)</p>
        <div className="result">
          <p>(state.result |> string_of_float |> toString)</p>
        </div>
      </div>
      <button className="ac" onClick=(_evt => send(""))>("AC" |> toString)</button>
      <button className="divide" onClick=(_evt => send("/"))>("/" |> toString)</button>
      <button className="multiply" onClick=(_evt => send("x"))>("X" |> toString)</button>
      <button className="subtract" onClick=(_evt => send("-"))>("-" |> toString)</button>
      <button className="add" onClick=(_evt => send("+"))>("+" |> toString)</button>
      <button className="equals" onClick=(_evt => send(""))>("=" |> toString)</button>
      <button className="dot" onClick=(_evt => send("."))>("." |> toString)</button>
      <button className="zero" onClick=(_evt => send("0"))>("0" |> toString)</button>
      <button className="one" onClick=(_evt => send("1"))>("1" |> toString)</button>
      <button className="two" onClick=(_evt => send("2"))>("2" |> toString)</button>
      <button className="three" onClick=(_evt => send("3"))>("3" |> toString)</button>
      <button className="four" onClick=(_evt => send("4"))>("4" |> toString)</button>
      <button className="five" onClick=(_evt => send("5"))>("5" |> toString)</button>
      <button className="six" onClick=(_evt => send("6"))>("6" |> toString)</button>
      <button className="seven" onClick=(_evt => send("7"))>("7" |> toString)</button>
      <button className="eight" onClick=(_evt => send("8"))>("8" |> toString)</button>
      <button className="nine" onClick=(_evt => send("9"))>("9" |> toString)</button>
    </div>
};