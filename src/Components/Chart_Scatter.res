type dataXY = {
  x: int,
  y: int,
}
type dataset = {
  label: string,
  fill: bool,
  backgroundColor: string,
  pointBorderColor: string,
  pointBackgroundColor: string,
  pointBorderWidth: int,
  pointHoverRadius: int,
  pointHoverBackgroundColor: string,
  pointHoverBorderColor: string,
  pointHoverBorderWidth: int,
  pointRadius: int,
  pointHitRadius: int,
  data: array<dataXY>,
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
) => React.element = "Scatter"
