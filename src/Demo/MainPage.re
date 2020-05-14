
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
      | ["chart","line"] => <ChartLineDemo />
      | _ => <ChartDoughnutDemo />
    }
  }
  </div>;
}