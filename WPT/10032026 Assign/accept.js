
 $(document).ready(function(){
  $("#btn").click(function(){
//   let n =document.getElementById("num").value;
 let n =parseInt($("#num").val());
  console.log(n);
  
 let fact = 1;
  for(let i =1;i<=n;i++)
  {
    fact = fact * i;
  }
  $("#result").text("Factorial= " + fact);
  });
});


