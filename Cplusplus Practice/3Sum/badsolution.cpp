class Solution {
public:
    
    bool vectorExists(vector<vector<int>>& sumSet, vector<int>& temp){
                        for(int i=0; i<sumSet.size(); i++){
                        if(sumSet[i][0]==temp[0]){
                            if(temp[1] == sumSet[i][1] && temp[2] == sumSet[i][2]){
                                return true;
                            }
             }
        }
        return false;
        }
    int duplicatesNeeded(vector<int> nums, int i, int j ){
        int duplicates = 0;
        if((-1*nums[i]+-1*nums[j]) == nums[i]) duplicates++;
        if((-1*nums[i]+-1*nums[j]) == nums[j]) duplicates++;
        return duplicates;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> threeSumSet;
        if(!nums.size()){
            return threeSumSet;
        }
        map<int,int> numsHash;
        for(int i = 0; i<nums.size(); i++){
            if(numsHash.find(nums[i])== numsHash.end()){
            numsHash.insert(pair<int,int>(nums[i],1));
            }
            else{
                numsHash[nums[i]]++;
            }
        }
        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j<nums.size(); j++){
                if((-1*nums[i]+-1*nums[j]) == nums[i] || (-1*nums[i]+-1*nums[j]) == nums[j]){
                    if(numsHash[-1*nums[i]+-1*nums[j]] > duplicatesNeeded(nums,i,j)){
                    vector<int> temp{nums[i],nums[j],(-1*nums[i]+-1*nums[j])};
                    sort(temp.begin(), temp.end());
                    if(!vectorExists(threeSumSet, temp) ){
                    threeSumSet.push_back(temp);                       
                    }
                    }
                }
                else if(numsHash.find(-1*nums[i]+-1*nums[j]) != numsHash.end()){
                    vector<int> temp{nums[i],nums[j],(-1*nums[i]+-1*nums[j])};
                    sort(temp.begin(), temp.end());
                    if(!vectorExists(threeSumSet, temp) ){
                    threeSumSet.push_back(temp);                       
                    }
                    }
                }
            }
        
        return threeSumSet;
    }
};
