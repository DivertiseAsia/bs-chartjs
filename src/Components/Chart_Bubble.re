type dataXYR = {
    x : int,
    y : int,
    r : int
};
type datasets = {
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
    data: array(dataXYR)
};

type data = {
    labels: array(string),
    datasets: array(datasets)
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
    React.element = "Bubble";
