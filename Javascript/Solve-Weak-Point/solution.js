"use strict";

function weakPoint(matrix){
    var size = matrix.length;
    var answer = new Array();
    answer.push(minSumRow(size, matrix));
    answer.push(minSumCol(size, matrix));
    return answer;
}

function minSumRow(size, matrix){
    var min = Number.MAX_VALUE;
    var loc = 0;
    var temp =0;
    for(var i = 0; i<size; i++){
        for(var j=0; j<size; j++){
            temp += matrix[i][j];
        }
        if(temp < min){
            min = temp;
            loc = i;
        }
        temp =0;
    }
    return loc;
}

function minSumCol(size, matrix){
    var min = Number.MAX_VALUE;
    var loc = 0;
    var temp =0;
    for(var i = 0; i<size; i++){
        for(var j=0; j<size; j++){
            temp += matrix[j][i];
        }
        if(temp < min){
            min = temp;
            loc = i;
        }
        temp =0;
    }
    return loc;
}

var assert = require('assert');

if (!global.is_checking) {
    assert.deepEqual(weakPoint([[7, 2, 7, 2, 8],
                                [2, 9, 4, 1, 7],
                                [3, 8, 6, 2, 4],
                                [2, 5, 2, 9, 1],
                                [6, 6, 5, 4, 5]]
                                ), [3, 3], "Example");
    assert.deepEqual(weakPoint([[7, 2, 4, 2, 8],
                                [2, 8, 1, 1, 7],
                                [3, 8, 6, 2, 4],
                                [2, 5, 2, 9, 1],
                                [6, 6, 5, 4, 5]]
                                ), [1, 2], "Two weak point");

    assert.deepEqual(weakPoint([[1, 1, 1],
                                [1, 1, 1],
                                [1, 1, 1]]
                                ), [0, 0], "Top left");

}
