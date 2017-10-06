"use strict";

function findMessage(data) {
    let message = '';
    for(var i = 0; i<data.length; i++){
        if(/^[A-Z]+$/.test(data[i])){
            message += data[i];
        }
    }
        console.log(message);
    return message;
}

var assert = require('assert');

if (!global.is_checking) {
    assert.equal(findMessage("How are you? Eh, ok. Low or Lower? Ohhh."), "HELLO", "hello");
    assert.equal(findMessage("hello world!"), "", "Nothing");
    assert.equal(findMessage("HELLO WORLD!!!"), "HELLOWORLD", "Capitals");
    console.log("Coding complete? Click 'Check' to review your tests and earn cool rewards!");
}
