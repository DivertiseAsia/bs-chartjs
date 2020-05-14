
[@react.component] [@bs.module "react-chartjs-2"]
external make:
    (
    ~data: Js.t('a),
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
    React.element = "Bar";
