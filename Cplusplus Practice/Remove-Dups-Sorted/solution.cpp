class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i = 0;
       if(nums.size() == 0){
           return 0;
       } 
       while(i <= nums.size()-1){
           while(i+1 <= nums.size()-1 && nums[i] == nums[i+1]){
               nums.erase(nums.begin()+i+1);
           }
           i++;
       }
        return nums.size();
    }
};
