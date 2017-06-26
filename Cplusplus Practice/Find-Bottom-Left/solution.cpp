class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int lowest=root->val;
        int height = 0;
        int lowHeight =0 ;
        return findBLVHelper(root, lowest, height, lowHeight, true);
        
    }
    
    int findBLVHelper(TreeNode* root, int& lowest, int height, int& lowHeight, bool leftSide){
        if(!root){
            return lowest;
        }
        else if (height > lowHeight && !root->left){
            lowHeight = height;
            lowest = root->val;
        }
        height++;
        findBLVHelper(root->left, lowest, height, lowHeight, true);
        findBLVHelper(root->right, lowest, height, lowHeight, false);  
        return lowest;
    }
};
