class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int max = 0;
        int value= 0;
        map<int,int> counter;
        for(int i=0; i<nums.size(); i++){
            counter[nums[i]]++;
            if(counter[nums[i]] > max){
                max = counter[nums[i]];
                value = nums[i];
            }
        }
        return value;
    }
};
