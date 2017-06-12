class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root && !root->left && !root->right && root->val - sum == 0)
        return true;
        else if (!root)
        return false;
        return (hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val));
    }
};
