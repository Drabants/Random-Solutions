var twoSum = function(numbers, target) {
    var index = new Array(2);
    var i = 0;
    var s = numbers.length-1;
    while(i<s){
        if(numbers[i]+numbers[s] == target)
        return [i+1,s+1];
        else if (numbers[i] +numbers[s] > target)
            s--;
        else
            i++;
        }
};
