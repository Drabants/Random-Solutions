class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return isHelper(root) != -1;
    }
    
    int isHelper(TreeNode* root){
        if(!root) return 0;
        
        int lH= isHelper(root->left);
        if(lH== -1)return lH;
        int rH= isHelper(root->right);
        if(rH == -1) return rH;
        if(abs(lH-rH) >1) return -1;
        return max(lH, rH)+1;
        
    }
};
