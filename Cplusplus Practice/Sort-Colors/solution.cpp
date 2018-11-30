class Solution {
public:
    void sortColors(vector<int>& nums) {
        int front = 0, mid = 0, back = nums.size()-1;
        while(mid <= back){
            if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 0){
                nums[mid] = nums[front];
                nums[front] = 0;
                mid++;
                front++;
            }else if(nums[mid] == 2){
                nums[mid] = nums[back];
                nums[back] = 2;
                back--;
            }
        }
    }
};
