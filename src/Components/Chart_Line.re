type dataset = {
    label: string,
    fill: bool,
    lineTension: float,
    backgroundColor: string,
    borderColor: string,
    borderCapStyle: string,
    borderDash: array(int),
    borderDashOffset: float,
    borderJoinStyle: string,
    pointBorderColor: string,
    pointBackgroundColor: string,
    pointBorderWidth: int,
    pointHoverRadius: int,
    pointHoverBackgroundColor: string,
    pointHoverBorderColor: string,
    pointHoverBorderWidth: int,
    pointRadius: int,
    pointHitRadius: int,
    data: array(int)
  };
type data = {
    labels: array(string),
    datasets: array(dataset)
};
[@react.component] [@bs.module "react-chartjs-2"]
external make:
    (
    ~data: data,
    ~width: int=?,
    ~height: int=?,
    ~id: string=?,
    ~legend: Js.t('a)=?,
    ~options: Js.t('a)=?,
    ~redraw: bool=?,
    ~getDatasetAtEvent: unit => unit=?,
    ~getElementAtEvent: unit => unit=?,
    ~getElementsAtEvent: unit => unit=?,
    ~onElementsClick: unit => unit=?,
    ) =>
    React.element = "Line";
