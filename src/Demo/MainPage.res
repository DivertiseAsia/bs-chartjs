let demoList = [
  ("bar", <ChartBarDemo />),
  ("bubble", <ChartBubbleDemo />),
  ("doughnut", <ChartDoughnutDemo />),
  ("horizontalbar", <ChartHorizontalBarDemo />),
  ("line", <ChartLineDemo />),
  ("pie", <ChartPieDemo />),
  ("polar", <ChartPolarDemo />),
  ("radar", <ChartRadarDemo />),
  ("scatter", <ChartScatterDemo />),
]->Js.Dict.fromArray


@react.component
let make = () =>
  <div>
    {React.string("Chart Here!")}
    {
      let url = RescriptReactRouter.useUrl()
      switch url.path {
      | list{"chart", chartType} => {
        switch Js.Dict.get(demoList, chartType) {
        | Some(chart) => chart
        | None => <ChartDoughnutDemo />
        }
      }
      | _ => {
        demoList
        ->Js.Dict.keys
        ->Belt.Array.mapWithIndex((index, (chartType)) =>
          <div key={index->Js.Int.toString}>
            <a href={["chart", chartType]->Js.Array2.joinWith("/")}>
              {React.string(chartType)}
            </a>
          </div>
        )
        ->React.array
      }
      }
    }
  </div>
