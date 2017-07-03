class Solution {
private:
    vector<int> inOrder;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root){
            return inOrder;
        }
        if(!root->left && !root->right){
            inOrder.push_back(root->val);
            return inOrder;
        }
        if(root->left){
            inorderTraversal(root->left);
        }
        inOrder.push_back(root->val);
        if(root->right){
            inorderTraversal(root->right);
        }
        return inOrder;
        
    }
};
