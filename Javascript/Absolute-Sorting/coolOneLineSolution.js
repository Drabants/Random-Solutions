"use strict";

function absoluteSorting(numbers){
    return numbers.sort((a, b) => Math.abs(a) - Math.abs(b))
}

var assert = require('assert');

if (!global.is_checking) {
    assert.equal(absoluteSorting([-20, -5, 10, 15]).toString(), [-5, 10, 15, -20].toString(), "Example");
    assert.equal(absoluteSorting([1, 2, 3, 0]).toString(), [0, 1, 2, 3].toString(), "Positive numbers");
    assert.equal(absoluteSorting([-1, -2, -3, 0]).toString(), [0, -1, -2, -3].toString(), "Negative numbers");
    console.log("Coding complete? Click 'Check' to review your tests and earn cool rewards!");
}
