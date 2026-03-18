let arr = [];

   let input=document.getElementById("myinput");
   let button=document.getElementById("addbtn");
   let displaybutton=document.getElementById("displaybtn");
   let list=document.getElementById("mylist");

   button.addEventListener("click",function(){
 let value=input.value;
 if(value !="")
 {
    arr.push(value);
    input.value="";
    alert("value added!");
 }
 else{
    alert("please enter something");
 }
});

displaybutton.addEventListener("click", function(){
 list.innerHTML="";

 for(i=0;i<arr.length;i++)
 {
  let li=document.createElement("li");
  li.textContent = arr[i];
  list.appendChild(li);

 }
});

 





