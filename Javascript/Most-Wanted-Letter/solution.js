"use strict";

function mostWanted(data) {
    var map = {};
    var verify = /^[a-z]+$/;
    var temp;
    var max = 0;
    var answer="a";
    for(var i =0; i<data.length; i++){
        temp = data[i].toLowerCase();
        if(temp.match(verify)){
        if(!map[temp]){
            map[temp]=1;
        }else{
            map[temp]++;
        }
        if(map[temp] > max){
                answer = temp;
                max = map[temp];
        }
        if(map[temp] == max){
         if(temp < answer){
             answer = temp;
         }
        }
    }
    }
    return answer;
}

var assert = require('assert');

if (!global.is_checking) {
    assert.equal(mostWanted("Hello World!"), "l", "1st example");
    assert.equal(mostWanted("How do you do?"), "o", "2nd example");
    assert.equal(mostWanted("One"), "e", "3rd example");
    assert.equal(mostWanted("Oops!"), "o", "4th example");
    assert.equal(mostWanted("AAaooo!!!!"), "a", "Letters");
    console.log("Coding complete? Click 'Check' to review your tests and earn cool rewards!");
}
