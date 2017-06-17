class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        if(len <= 1){
            return len;
        }
        for(int i = 1 ; i < len; i++){
            if(nums[i-1] == nums[i]){
                nums.erase(nums.begin()+i);
                i--;
                len = nums.size();
            }
        }
        return len;
    }
};
