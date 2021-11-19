[@react.component]
let make = () => {
    let demoCode =
    <div>
        (React.string("Chart Bar Demo"))
        <Chart_Bar
            data = {
                labels: [|"January", "February", "March", "April", "May", "June", "July"|],
                datasets: [|
                    {
                        label: "My First dataset",
                        backgroundColor: "rgba(255,99,132,0.2)",
                        borderColor: "rgba(255,99,132,1)",
                        borderWidth: 1,
                        hoverBackgroundColor: "rgba(255,99,132,0.4)",
                        hoverBorderColor: "rgba(255,99,132,1)",
                        data: [|65, 59, 80, 81, 56, 55, 40|]
                    }
                |]
            }
        />
    </div>;
    let demoCodeString = 
    "<div>
        (React.string('Chart Bar Demo'))
        <Chart_Bar
            data = {
                labels: [|'January', 'February', 'March', 'April', 'May', 'June', 'July'|],
                datasets: [|
                    {
                        label: 'My First dataset',
                        backgroundColor: 'rgba(255,99,132,0.2)',
                        borderColor: 'rgba(255,99,132,1)',
                        borderWidth: 1,
                        hoverBackgroundColor: 'rgba(255,99,132,0.4)',
                        hoverBorderColor: 'rgba(255,99,132,1)',
                        data: [|65, 59, 80, 81, 56, 55, 40|]
                    }
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