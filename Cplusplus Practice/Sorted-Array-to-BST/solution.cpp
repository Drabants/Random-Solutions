class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* newNode= NULL;
        if(nums.size() == 0){
            return newNode;
        }
        if(nums.size() ==1){
            return newNode = new TreeNode(nums[0]);
        }
        int middle = nums.size()/2;
        newNode = new TreeNode(nums[middle]);
        vector<int> leftArray(nums.begin(), nums.begin()+middle);
        vector<int> rightArray(nums.begin()+middle+1, nums.end());
        newNode->left = sortedArrayToBST(leftArray);
        if(middle+1 != leftArray.size()){
        newNode->right = sortedArrayToBST(rightArray);
        }
        return newNode;
    }
};
