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

    let demoCode2 =
    <div>
        (React.string("Chart Bar MultiColor Demo"))
        <Chart.Bar.MultiColor
            data = {
                labels: [|"January", "February", "March", "April", "May", "June", "July"|],
                datasets: [|
                    {
                        label: [|"My First dataset"|],
                        backgroundColor: [|"rgba(255,99,132,0.2)", "rgba(99,255,132,0.5)"|],
                        borderColor: [|"rgba(255,99,132,1)"|],
                        borderWidth: [|1,1,4|],
                        hoverBackgroundColor: [|"rgba(255,99,132,0.4)"|],
                        hoverBorderColor: [|"rgba(255,99,132,1)"|],
                        data: [|65, 59, 80, 81, 56, 55, 40|]
                    }
                |]
            }
        />
    </div>;

    let demoCodeString2 = 
    "<div>
        (React.string(\"Chart Bar MultiColor Demo\"))
        <Chart.Bar.MultiColor
            data = {
                labels: [|\"January\", \"February\", \"March\", \"April\", \"May\", \"June\", \"July\"|],
                datasets: [|
                    {
                        label: [|\"My First dataset\"|],
                        backgroundColor: [|\"rgba(255,99,132,0.2)\", \"rgba(99,255,132,0.5)\"|],
                        borderColor: [|\"rgba(255,99,132,1)\"|],
                        borderWidth: [|1,1,4|],
                        hoverBackgroundColor: [|\"rgba(255,99,132,0.4)\"|],
                        hoverBorderColor: [|\"rgba(255,99,132,1)\"|],
                        data: [|65, 59, 80, 81, 56, 55, 40|]
                    }
                |]
            }
        />
    </div>";

    let demoCode3 =
    <div>
        (React.string("Stacked Bar Chart Demo"))
        <Chart.Bar.Stacked
            data = {
                labels: [|"January", "February", "March", "April", "May", "June", "July"|],
                datasets: [|
                    {
                        label: [|"My First dataset"|],
                        backgroundColor: [|"rgba(255,99,132,0.2)", "rgba(99,255,132,0.5)"|],
                        borderColor: [|"rgba(255,99,132,1)"|],
                        borderWidth: [|1,1,4|],
                        hoverBackgroundColor: [|"rgba(255,99,132,0.4)"|],
                        hoverBorderColor: [|"rgba(255,99,132,1)"|],
                        data: [|65, 59, 80, 81, 56, 55, 40|],
                        stack: "Stack 0"
                    },
                    {
                        label: [|"My Second dataset"|],
                        backgroundColor: [|"rgba(255,99,132,0.2)", "rgba(99,255,132,0.5)"|],
                        borderColor: [|"rgba(255,99,132,1)"|],
                        borderWidth: [|1,1,4|],
                        hoverBackgroundColor: [|"rgba(255,99,132,0.4)"|],
                        hoverBorderColor: [|"rgba(255,99,132,1)"|],
                        data: [|65, 95, 86, 11, 65, 55, 40|],
                        stack: "Stack 1"
                    },
                    {
                        label: [|"My Third dataset"|],
                        backgroundColor: [|"rgba(99,255,132,0.2)", "rgba(99,255,132,0.5)"|],
                        borderColor: [|"rgba(255,99,132,1)"|],
                        borderWidth: [|1,1,4|],
                        hoverBackgroundColor: [|"rgba(255,99,132,0.4)"|],
                        hoverBorderColor: [|"rgba(255,99,132,1)"|],
                        data: [|56, 45, 64, 17, 45, 75, 14|],
                        stack: "Stack 1"
                    }
                |]
            }
        />
    </div>;

    let demoCodeString3 = {|<div>
        (React.string("Stacked Bar Chart Demo"))
        <Chart.Bar.Stacked
            data = {
                labels: [|"January", "February", "March", "April", "May", "June", "July"|],
                datasets: [|
                    {
                        label: [|"My First dataset"|],
                        backgroundColor: [|"rgba(255,99,132,0.2)", "rgba(99,255,132,0.5)"|],
                        borderColor: [|"rgba(255,99,132,1)"|],
                        borderWidth: [|1,1,4|],
                        hoverBackgroundColor: [|"rgba(255,99,132,0.4)"|],
                        hoverBorderColor: [|"rgba(255,99,132,1)"|],
                        data: [|65, 59, 80, 81, 56, 55, 40|],
                        stack: "Stack 0"
                    },
                    {
                        label: [|"My Second dataset"|],
                        backgroundColor: [|"rgba(255,99,132,0.2)", "rgba(99,255,132,0.5)"|],
                        borderColor: [|"rgba(255,99,132,1)"|],
                        borderWidth: [|1,1,4|],
                        hoverBackgroundColor: [|"rgba(255,99,132,0.4)"|],
                        hoverBorderColor: [|"rgba(255,99,132,1)"|],
                        data: [|65, 95, 86, 11, 65, 55, 40|],
                        stack: "Stack 1"
                    },
                    {
                        label: [|"My Third dataset"|],
                        backgroundColor: [|"rgba(99,255,132,0.2)", "rgba(99,255,132,0.5)"|],
                        borderColor: [|"rgba(255,99,132,1)"|],
                        borderWidth: [|1,1,4|],
                        hoverBackgroundColor: [|"rgba(255,99,132,0.4)"|],
                        hoverBorderColor: [|"rgba(255,99,132,1)"|],
                        data: [|56, 45, 64, 17, 45, 75, 14|],
                        stack: "Stack 1"
                    }
                |]
            }
        />
    </div>;|};

    <>
    demoCode
    <blockquote>
        <pre>
        <code>
        {React.string(demoCodeString)}
        </code>
        </pre>
    </blockquote>
    

    demoCode2
    <blockquote>
        <pre>
        <code>
        {React.string(demoCodeString2)}
        </code>
        </pre>
    </blockquote>

    demoCode3
    <blockquote>
        <pre>
        <code>
        {React.string(demoCodeString3)}
        </code>
        </pre>
    </blockquote>
    </>;
};