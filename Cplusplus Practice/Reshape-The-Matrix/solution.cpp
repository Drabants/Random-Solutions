class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int vecSize=0;
        vector<int> longRow;
        int nR = nums[0].size();
        int nC = nums.size();
        if(r*c != nR*nC){
            return nums;
        }else{
            int s=0;
            vector<vector<int>> newMatrix;
            vector<int> temp;
            for(int i =0; i< r; i++){
                for(int j=0; j<c; j++){
                    temp.push_back(getInt(nums, s));
                    s++;
                    cout << s << endl;
                }
                newMatrix.push_back(temp);
                temp.clear();
            }
            return newMatrix;
        }
    }
    
    int getInt(vector<vector<int>> nums, int pos){
        int row =0;
        int rowSize = nums[row].size();
        while(pos >= rowSize){
            pos -= rowSize;
            row++;
        }
        return nums[row][pos];
    }
};
