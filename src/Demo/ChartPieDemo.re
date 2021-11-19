[@react.component]
let make = () => {
    let demoCode =
    <div>
        (React.string("Chart Pie Demo"))
        <Chart_Pie
            data = {
                labels: [|
                    "Red",
                    "Blue",
                    "Yellow"
                |],
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
                }|]
            }
        />
    </div>;
    let demoCodeString = 
    "<div>
        (React.string('Chart Pie Demo'))
        <Chart_Pie
            data = {
                labels: [|
                    'Red',
                    'Blue',
                    'Yellow'
                |],
                datasets: [|{
                    data: [|300, 50, 100|],
                    backgroundColor: [|
                        '#FF6384',
                        '#36A2EB',
                        '#FFCE56'
                    |],
                    hoverBackgroundColor: [|
                        '#FF6384',
                        '#36A2EB',
                        '#FFCE56'
                    |]
                }|]
            }
        />
    </div>";
    <>
    demoCode
    <blockquote>
        <pre>
        <code>
        {React.string(demoCodeString)}
        </code>
        </pre>
    </blockquote>
    </>;
};