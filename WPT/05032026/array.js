let arr = [];

function checkValue()
{
    let value = document.getElementById("value").value;

    if(arr.includes(value))
    {
        document.getElementById("result").innerText = "Value Found";
    }
    else
    {
        document.getElementById("result").innerText = "Value Not Found";
    }
}

function addToEnd()
{
    let value = document.getElementById("value").value;

    arr.push(value);

    document.getElementById("finalArray").innerText = "Array: " + arr;
}

function insertAtIndex()
{
    let value = document.getElementById("value").value;

    let index = document.getElementById("index").value;

    arr.splice(index,0,value);

    document.getElementById("finalArray").innerText = "Array: " + arr;
}

function removeAtIndex()
{
    let index = document.getElementById("index").value;

    arr.splice(index,1);

    document.getElementById("finalArray").innerText = "Array: " + arr;
}