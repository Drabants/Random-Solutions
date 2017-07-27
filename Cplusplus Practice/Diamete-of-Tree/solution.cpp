class Solution {
private:
    int diameter = 0;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        treeHelper(root);
        return diameter;
    }
    
    int treeHelper(TreeNode* root){
        if(!root)
        {
            return 0;
        }
        int lh = treeHelper(root->left);
        int rh = treeHelper(root->right);
        diameter = max(diameter, lh+rh);
        return 1+max(lh , rh);
    }
    
};
