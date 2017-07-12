class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleInt=0;
        for(int i=0; i<nums.size(); i++){
            singleInt ^= nums[i];
        }
        return singleInt;
    }
};
