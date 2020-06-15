open Jest;
open Expect;
open ReactTestingLibrary;
open ReasonReact;

test("Test Chart Doughnut",() => {
  <div>
    <Chart.Doughnut data={
      datasets: [|{
        data: [|300, 50, 100|],
        backgroundColor: [|
        "#FF6384",
        "#36A2EB",
        "#FFCE56"
        |],
        hoverBackgroundColor: [|
        "#FF6384",
        "#36A2EB",
        "#FFCE56"
        |]
      }|],
      labels: [|
      "Red",
      "Yellow",
      "Blue"
      |]
    }
    />
  </div>
  |> render
  |> container
  |> expect
  |> toMatchSnapshot
})