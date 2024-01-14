type dataset = {
  data: array<int>,
  backgroundColor: array<string>,
  label: string,
}
type data = {
  labels: array<string>,
  datasets: array<dataset>,
}
@react.component @module("react-chartjs-2")
external make: (
  ~data: data,
  ~width: int=?,
  ~height: int=?,
  ~id: string=?,
  ~legend: Js.t<'a>=?,
  ~options: Js.t<'a>=?,
  ~redraw: bool=?,
  ~getDatasetAtEvent: unit => unit=?,
  ~getElementAtEvent: unit => unit=?,
  ~getElementsAtEvent: unit => unit=?,
  ~onElementsClick: unit => unit=?,
) => React.element = "PolarArea"
