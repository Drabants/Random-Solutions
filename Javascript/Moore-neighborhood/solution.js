"use strict";

function countNeighbours(data, row, col) {
        return topRow(data,row,col) + bottomRow(data,row,col) + middleRow(data,row,col);
}

function topRow(data, row, col){
    var neighbor =0;
    var size = data.length-1;
    row--;
    if(row >= 0 && row <=size){
        col--;
        for (var i =0; i<3; i++){
            if(col >= 0 && col <= size){
             if(data[row][col] ==1){
                neighbor++;
             }
            }
            col++;
        }
    }
    return neighbor;
}
function middleRow(data, row, col){
        var size = data.length-1;
    var neighbor =0;
    if(col+1 <=size){
        if(data[row][col+1]){
            neighbor++;
        }
    }
    if(col-1 >=0){
        if(data[row][col-1]){
            neighbor++;
        }
    }
    return neighbor;
            
}
function bottomRow(data, row, col){
    var size = data.length-1;
    var neighbor =0;
    row++;
    if(row >= 0 && row <=size){
        col--;
        for (var i =0; i<3; i++){
            if(col >= 0 && col <= size){
             if(data[row][col] ==1){
                neighbor++;
             }
            }
            col++;
        }
    }
    return neighbor;
}

var assert = require('assert');

if (!global.is_checking) {
    assert.equal(countNeighbours([[1, 0, 0, 1, 0],
                                  [0, 1, 0, 0, 0],
                                  [0, 0, 1, 0, 1],
                                  [1, 0, 0, 0, 0],
                                  [0, 0, 1, 0, 0]], 1, 2), 3, "1st example");

    assert.equal(countNeighbours([[1, 0, 0, 1, 0],
                                  [0, 1, 0, 0, 0],
                                  [0, 0, 1, 0, 1],
                                  [1, 0, 0, 0, 0],
                                  [0, 0, 1, 0, 0]], 0, 0), 1, "2nd example");

    assert.equal(countNeighbours([[1, 1, 1],
                                  [1, 1, 1],
                                  [1, 1, 1]], 0, 2), 3, "Dense corner");

    assert.equal(countNeighbours([[0, 0, 0],
                                  [0, 1, 0],
                                  [0, 0, 0]], 1, 1), 0, "Single");

    console.log("Coding complete? Click 'Check' to review your tests and earn cool rewards!");
}
