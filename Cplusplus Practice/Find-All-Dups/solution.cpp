class Solution {
private:
    map<int,int> visited;
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        vector<int> duplicates;
        for(int i =0; i < size; i++){
            if(visited[nums[i]] == 0){
                visited[nums[i]]++;
            }else{
                duplicates.push_back(nums[i]);
            }
        }
        return duplicates;
    }
};
