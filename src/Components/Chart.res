module Bar = Chart_Bar
module Bubble = Chart_Bubble
module Doughnut = Chart_Doughnut
module HorizontalBar = Chart_HorizontalBar
module Line = Chart_Line
module Pie = Chart_Pie
module Polar = Chart_Polar
module Radar = Chart_Radar
module Scatter = Chart_Scatter


type chartJsComponent

@module("chart.js") @scope("Chart") external register : chartJsComponent => unit = "register";
@module("chart.js") external arcElement : chartJsComponent = "ArcElement";
@module("chart.js") external barElement : chartJsComponent = "BarElement";
@module("chart.js") external lineElement : chartJsComponent = "LineElement";
@module("chart.js") external pointElement : chartJsComponent = "PointElement";
@module("chart.js") external rectangleElement : chartJsComponent = "RectangleElement";
@module("chart.js") external doughnutElement : chartJsComponent = "DoughnutElement";
@module("chart.js") external polarAreaElement : chartJsComponent = "PolarAreaElement";
@module("chart.js") external radarElement : chartJsComponent = "RadarElement";
@module("chart.js") external bubbleElement : chartJsComponent = "BubbleElement";
@module("chart.js") external scatterElement : chartJsComponent = "ScatterElement";

@module("chart.js") external logarithmicScale : chartJsComponent = "LogarithmicScale";
@module("chart.js") external timeScale : chartJsComponent = "TimeScale";
@module("chart.js") external radialLinearScale : chartJsComponent = "RadialLinearScale";
@module("chart.js") external categoryScale : chartJsComponent = "CategoryScale";
@module("chart.js") external linearScale : chartJsComponent = "LinearScale";

