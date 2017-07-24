class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int progress=0;
        int temp;
        int size = nums.size();
        for(int i=0; i <size; i++){
            if(nums[i]!=0){
                temp = nums[progress];
                nums[progress] = nums[i];
                nums[i] = temp;
                progress++;
                    
            }
        }
    }
};
