class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;
        int min;
        for(int s = 0; s<nums.size(); s++){
                for(int i = s+1; i<nums.size(); i++){
                if ( (nums[s] + nums[i]) == target ){
                sum.push_back(s);
                sum.push_back(i);
                return sum;
                }
                }               
        }
    }
};
