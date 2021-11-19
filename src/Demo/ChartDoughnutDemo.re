[@react.component]
let make = () => {
    let demoCode =
    <div>
        (React.string("Chart Doughnut Demo"))
        <Chart_Doughnut 
            data = {
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
    </div>;
    let demoCodeString = 
    "<div>
        (React.string('Chart Doughnut Demo'))
        <Chart_Doughnut 
        data = {
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
            }|],
            labels: [|
                'Red',
                'Yellow',
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
        {React.string(demoCodeString)}
        </code>
        </pre>
    </blockquote>
    </>;
};