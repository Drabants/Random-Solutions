"use strict";

function romanNumerals(number) {
    var romanKey = { 'M': 1000, 'CM':900, 'D':500, 'CD':400, 'C':100, 'XC':90, 'L':50, 'XL':40, 'X':10,
    'IX':9, 'V':5, 'IV':4, 'I':1}
    var romanString='';
    for(var i in romanKey){
        var multiples = Math.floor(number/romanKey[i]);
        number -= multiples*romanKey[i];
        while(multiples){
            romanString+= i;
            multiples--;
        }
    }  
    return romanString;
}

var assert = require('assert');

if (!global.is_checking) {
    assert.equal(romanNumerals(6), 'VI', "First");
    assert.equal(romanNumerals(76), 'LXXVI', "Second");
    assert.equal(romanNumerals(499), 'CDXCIX', "Third");
    assert.equal(romanNumerals(3888), 'MMMDCCCLXXXVIII', "Forth");
    console.log("Done! Go Check!");
}
