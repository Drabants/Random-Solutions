class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        int curr = 0;
        int prev = 0;
        int answer = 0;
        for(int i = 0; i <size; i++){
            answer = max(nums[i]+prev , curr);
            prev = curr;
            curr =answer;
        }
        return answer;
    }
};
