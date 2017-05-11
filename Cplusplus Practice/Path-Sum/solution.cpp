class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if((sum == 0 && root))
        return true;
        if(!root)
        return false;
        return (hasPathSum(root->left,sum-root->val) || hasPathSum(root->right, sum-root->val));
    }
};
