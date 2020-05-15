[@react.component]
let make = () => {
    let demoCode =
    <div>
        (React.string("Chart Polar Demo"))
        <Chart_Polar
            data = {
                datasets: [|{
                  data: [|
                    11,
                    16,
                    7,
                    3,
                    14
                  |],
                  backgroundColor: [|
                    "#FF6384",
                    "#4BC0C0",
                    "#FFCE56",
                    "#E7E9ED",
                    "#36A2EB"
                  |],
                  label: "My dataset"
                }|],
                labels: [|
                  "Red",
                  "Green",
                  "Yellow",
                  "Grey",
                  "Blue"
                |]
              }
        />
    </div>;
    let demoCodeString = 
    "<div>
        (React.string('Chart Polar Demo'))
        <Chart_Polar
            data = {
                datasets: [|{
                  data: [|
                    11,
                    16,
                    7,
                    3,
                    14
                  |],
                  backgroundColor: [|
                    '#FF6384',
                    '#4BC0C0',
                    '#FFCE56',
                    '#E7E9ED',
                    '#36A2EB'
                  |],
                  label: 'My dataset'
                }|],
                labels: [|
                  'Red',
                  'Green',
                  'Yellow',
                  'Grey',
                  'Blue'
                |]
              }
        />
    </div>";
    <>
    demoCode
    <blockquote>
        <pre>
        <code>
        {ReasonReact.string(demoCodeString)}
        </code>
        </pre>
    </blockquote>
    </>;
};