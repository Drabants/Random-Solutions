class Solution {
public:
    TreeNode* maxTreeBuilder(vector<int>& nums, int left, int right){
        if(left > right){
            return NULL;
        }
        int maxLocation = left;
        for(int i = left; i <= right; i++){
            if(nums[i] > nums[maxLocation]){
                maxLocation = i;
            }
        }
        TreeNode* root = new TreeNode(nums[maxLocation]);
        root->left  = maxTreeBuilder(nums, left, maxLocation-1);
        root->right = maxTreeBuilder(nums, maxLocation+1, right);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return maxTreeBuilder(nums, 0, nums.size()-1);
    }
};
