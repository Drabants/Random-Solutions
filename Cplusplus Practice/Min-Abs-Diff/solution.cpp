class Solution {
private:
    int min=INT_MAX;
public:
    int getMinimumDifference(TreeNode* root) {
        if(!root){
            return min;
        }
        checkEachNode(root, root->val);
        getMinimumDifference(root->left);
        getMinimumDifference(root->right);
        return min;
    }
    
    void checkEachNode(TreeNode* root, int checking){
        if(!root){
            return;
        }
        if(root->left){
        if(abs(checking - root->left->val) < min){
            min = abs(checking - root->left->val);
        }
        }
        if(root->right){
        if(abs(checking - root->right->val) < min){
            min = abs(checking - root->right->val);
        }
        }
        checkEachNode(root->left, checking);
        checkEachNode(root->right, checking);        
    }
    
};
