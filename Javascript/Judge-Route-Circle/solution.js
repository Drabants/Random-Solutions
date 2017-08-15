var judgeCircle = function(moves) {
    var ud = 0;
    var lr = 0;
    for(var i =0; i<moves.length; i++){
        if(moves[i]=='U'){
            ud++;
        }
        if(moves[i]=='D'){
            ud--;
        }
        if(moves[i]=='L'){
            lr++;
        }
        if(moves[i]=='R'){
            lr--;
        }
    }
    return lr==0 && ud==0;
};
