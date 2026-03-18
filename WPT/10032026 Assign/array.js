let array = [1,3,70,30,50,60,55,80,44,100];
let n ;
console.log(array);
let evenarray = array.filter((n) => n%2==0);
console.log("Even Number Array = " +evenarray);
let oddarray = array.filter((n) => n%2 !=0);
console.log("Odd Number Array = " +oddarray);
let f= array.sort((n1,n2)=>n1-n2);
 console.log(f);
 console.log("------------------------------------------");
 console.log("program 2");

const obj={
    id:100 ,
    name:"abc",
    email: "abc@gmail.com"
};

for (const i in obj)
{
    console.log(i);
    
}
