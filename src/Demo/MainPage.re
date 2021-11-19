
[@react.component]
let make = () => {
  <div>
  (React.string("Chart Here!"))  
  {
    let url = RescriptReactRouter.useUrl();
    switch(url.path){
      | ["chart","bar"] => <ChartBarDemo />
      | ["chart","bubble"] => <ChartBubbleDemo />
      | ["chart","doughnut"] => <ChartDoughnutDemo />
      | ["chart","horizontalbar"] => <ChartHorizontalBarDemo />
      | ["chart","line"] => <ChartLineDemo />
      | ["chart","pie"] => <ChartPieDemo />
      | ["chart","polar"] => <ChartPolarDemo />
      | ["chart","radar"] => <ChartRadarDemo />
      | ["chart","scatter"] => <ChartScatterDemo />
      | _ => <ChartDoughnutDemo />
    }
  }
  </div>;
}