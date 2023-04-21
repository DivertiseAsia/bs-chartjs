type dataset = {
    label: string,
    backgroundColor: string,
    borderColor: string,
    borderWidth: int,
    hoverBackgroundColor: string,
    hoverBorderColor: string,
    data:array(int)
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
    React.element = "Bar";


module MultiColor = {
  type dataset = {
    label: array(string),
    backgroundColor: array(string),
    borderColor: array(string),
    borderWidth: array(int),
    hoverBackgroundColor: array(string),
    hoverBorderColor: array(string),
    data: array(int),
  };

  type data = {
    labels: array(string),
    datasets: array(dataset),
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
      ~onElementsClick: unit => unit=?
    ) =>
    React.element =
    "Bar";
};

module Stacked = {
  type dataset = {
    label: array(string),
    backgroundColor: array(string),
    borderColor: array(string),
    borderWidth: array(int),
    hoverBackgroundColor: array(string),
    hoverBorderColor: array(string),
    data: array(int),
    stack: string,
  };

  type data = {
    labels: array(string),
    datasets: array(dataset),
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
      ~onElementsClick: unit => unit=?
    ) =>
    React.element =
    "Bar";
};