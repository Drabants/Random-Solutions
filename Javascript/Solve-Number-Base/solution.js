"use strict";

function numberRadix(str_number, radix){
    return checkBases(str_number, radix) ? parseInt(str_number,radix) : -1;
}

function checkBases(str_num, radix){
    for(let i =0; i<str_num.length; i++){
        if((str_num.charCodeAt(i)-55) >= radix || Number(str_num[i]) >= radix){
            return false;
        }
    }
    return true;
}
var assert = require('assert');

if (!global.is_checking) {
    assert.equal(numberRadix("AF", 16), 175, "Hex");
    assert.equal(numberRadix("101", 2), 5, "Bin");
    assert.equal(numberRadix("101", 5), 26, "5 base");
    assert.equal(numberRadix("Z", 36), 35, "Z base");
    assert.equal(numberRadix("AB", 10), -1, "B > A > 10");
    console.log("Coding complete? Click 'Check' to review your tests and earn cool rewards!");
}
