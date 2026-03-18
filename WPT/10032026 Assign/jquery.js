

console.log("====================================");

$(Document).ready(function(){
    $("#btn").click(function (){
    $("#p1").text("Hello");
    $("#p2").html("<i>Hello</i>");
    $("#p3").html("<u>Hello (underline)</u>");
});
});