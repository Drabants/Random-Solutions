class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> findMissing;
        int size = nums.size();
        for(int i =0; i<size; i++){
            findMissing[nums[i]] = 1;
        }
        vector<int> answer;
        for(int i = 1; i<=size; i++){
            if(findMissing[i] != 1){
                answer.push_back(i);
            }
        }
        return answer;
    }
};
