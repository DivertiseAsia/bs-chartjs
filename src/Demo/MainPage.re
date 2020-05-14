
[@react.component]
let make = () => {
  <div>
  (React.string("Chart Here!"))  
  {
    let url = ReasonReactRouter.useUrl();
    switch(url.path){
      | ["chart","doughnut"] => <ChartDoughnutDemo />
      | _ => <ChartDoughnutDemo />
    }
  }
  </div>;
}