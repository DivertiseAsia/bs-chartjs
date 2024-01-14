@react.component
let make = () =>
  <div>
    {React.string("Chart Here!")}
    {
      let url = RescriptReactRouter.useUrl()
      switch url.path {
      | list{"chart", "bar"} => <ChartBarDemo />
      | list{"chart", "bubble"} => <ChartBubbleDemo />
      | list{"chart", "doughnut"} => <ChartDoughnutDemo />
      | list{"chart", "horizontalbar"} => <ChartHorizontalBarDemo />
      | list{"chart", "line"} => <ChartLineDemo />
      | list{"chart", "pie"} => <ChartPieDemo />
      | list{"chart", "polar"} => <ChartPolarDemo />
      | list{"chart", "radar"} => <ChartRadarDemo />
      | list{"chart", "scatter"} => <ChartScatterDemo />
      | _ => <ChartDoughnutDemo />
      }
    }
  </div>
