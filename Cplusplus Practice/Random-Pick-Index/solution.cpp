class Solution {
    private:
    vector<int> numDup;
public:
    Solution(vector<int> nums) {
        numDup=nums;
    }
    
    int pick(int target) {
        int position;
        int randomSize=0;
        int size = numDup.size();
        for (int i =0 ; i< size; i++){
            if(numDup[i] == target){
                randomSize++;
                if(randomSize == 1){
                    position = i;
                }
                else if((rand()%randomSize)==randomSize-1){
                    position = i;
                }
            }
        }
        return position;
        
    }
};
