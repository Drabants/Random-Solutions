"use strict";

function digitsMultip(data) {
    let product =1;
    let numberList = data.toString().split("").map(Number);
    for(let i in numberList){
        if(numberList[i]) product *= numberList[i];
    }
    return product;
}

var assert = require('assert');

if (!global.is_checking) {
    assert.equal(digitsMultip(123405), 120, "1st");
    assert.equal(digitsMultip(999), 729, "2nd");
    assert.equal(digitsMultip(1000), 1, "3rd");
    assert.equal(digitsMultip(1111), 1, "4th");
    console.log("Coding complete? Click 'Check' to review your tests and earn cool rewards!");
}
