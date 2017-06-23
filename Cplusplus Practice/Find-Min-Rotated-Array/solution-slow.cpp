class Solution {
public:
    int findMin(vector<int>& nums) {
        int lag=nums[0];
        int size = nums.size();
        if(nums.size() == 1) return lag;
        int lead=nums[1];
        if(nums.size()==2)return lead >lag? lag:lead;
        for(int i = 1; i<size; i++){
            if(lag> lead){
                return lead;
            }
            lag = nums[i];
            lead = nums[i+1];
            
        }
        return nums[0];
    }
};
