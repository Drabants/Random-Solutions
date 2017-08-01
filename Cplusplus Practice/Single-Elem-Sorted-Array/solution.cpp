class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        while(low < high){
            if(nums[low] != nums[low+1]){
                return nums[low];
            }else{
                low += 2;
            }
    }
    return nums[low];
    }
};
