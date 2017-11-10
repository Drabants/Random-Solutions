// time complexity O(n) space complexity O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> encountered;
        for(int i = 0; i<nums.size(); i++){
            encountered[nums[i]]++;
            if(encountered[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};
