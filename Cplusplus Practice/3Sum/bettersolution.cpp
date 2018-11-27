//needed some assistance with this one. Original solution could only complete 310 of 313
class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> threeSumsFound;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int front = i+1; 
            int back = nums.size()-1;
            int target = nums[i]*-1;
            while(front < back)
            {
                if(nums[front]+nums[back] == target)
                {
                    vector<int> temp {nums[i], nums[front], nums[back]};
                    threeSumsFound.push_back(temp);
                    while(front < back && nums[front]==temp[1]) front++;
                    while(front < back && nums[back]==temp[2]) back--;
                }else
                {
                    if(target < nums[front]+nums[back]){
                        back--;
                    }
                    else{
                        front++;
                    }
                }
            }
            while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
        }
        return threeSumsFound;
    }
};
