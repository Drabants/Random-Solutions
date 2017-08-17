/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    var size = nums.length;
    var max = 0;
    var tempMax=0;
    for(var i =0; i<size; i++){
        if(nums[i] ==1){
            tempMax++;
        }
        else{
            tempMax=0;
        }
        if(tempMax>max){
            max=tempMax;
        }
    }
    return max;
};
