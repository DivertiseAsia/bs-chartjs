@react.component
let make = () => {
  let demoCode =
    <div>
      {React.string("Chart Scatter Demo")}
      <Chart_Scatter
        data={
          labels: ["Scatter"],
          datasets: [
            {
              label: "My First dataset",
              fill: false,
              backgroundColor: "rgba(75,192,192,0.4)",
              pointBorderColor: "rgba(75,192,192,1)",
              pointBackgroundColor: "#fff",
              pointBorderWidth: 1,
              pointHoverRadius: 5,
              pointHoverBackgroundColor: "rgba(75,192,192,1)",
              pointHoverBorderColor: "rgba(220,220,220,1)",
              pointHoverBorderWidth: 2,
              pointRadius: 1,
              pointHitRadius: 10,
              data: [
                {x: 65, y: 75},
                {x: 59, y: 49},
                {x: 80, y: 90},
                {x: 81, y: 29},
                {x: 56, y: 36},
                {x: 55, y: 25},
                {x: 40, y: 18},
              ],
            },
          ],
        }
      />
    </div>
  let demoCodeString = "<div>
    (React.string('Chart Scatter Demo'))
    <Chart_Scatter
        data = {
          labels: [|'Scatter'|],
          datasets: [|
            {
              label: 'My First dataset',
              fill: false,
              backgroundColor: 'rgba(75,192,192,0.4)',
              pointBorderColor: 'rgba(75,192,192,1)',
              pointBackgroundColor: '#fff',
              pointBorderWidth: 1,
              pointHoverRadius: 5,
              pointHoverBackgroundColor: 'rgba(75,192,192,1)',
              pointHoverBorderColor: 'rgba(220,220,220,1)',
              pointHoverBorderWidth: 2,
              pointRadius: 1,
              pointHitRadius: 10,
              data: [|
                { x: 65, y: 75 },
                { x: 59, y: 49 },
                { x: 80, y: 90 },
                { x: 81, y: 29 },
                { x: 56, y: 36 },
                { x: 55, y: 25 },
                { x: 40, y: 18 },
              |]
            }
          |]
        }
    />
</div>"
  <>
    demoCode <blockquote> <pre> <code> {React.string(demoCodeString)} </code> </pre> </blockquote>
  </>
}
