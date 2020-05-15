
[@react.component]
let make = () => {
  <div>
  (React.string("Chart Here!"))  
  {
    let url = ReasonReactRouter.useUrl();
    switch(url.path){
      | ["chart","bar"] => <ChartBarDemo />
      | ["chart","bubble"] => <ChartBubbleDemo />
      | ["chart","doughnut"] => <ChartDoughnutDemo />
      | ["chart","horizontalbar"] => <ChartHorizontalBarDemo />
      | ["chart","line"] => <ChartLineDemo />
      | ["chart","pie"] => <ChartPieDemo />
      | ["chart","polar"] => <ChartPolarDemo />
      | _ => <ChartDoughnutDemo />
    }
  }
  </div>;
}