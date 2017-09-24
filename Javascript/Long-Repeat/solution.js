"use strict";

function longRepeat(line) {
    var prev
    if(line.length === 0){
        return 0;
    }
    var max =1;
    var count=1;
    prev = line[0];
    for(var i =1; i<line.length; i++){
        if(line[i] === prev){
            count++;
            if(count > max){
                max = count;
            }
        }
        else{
            count = 1;
            prev = line[i];
        }
    }
            
    return max;
}

var assert = require('assert');

if (!global.is_checking) {
    assert.equal(longRepeat('sdsffffse'), 4, "First")
    assert.equal(longRepeat('ddvvrwwwrggg'), 3, "Second")
    console.log('"Run" is good. How is "Check"?');
