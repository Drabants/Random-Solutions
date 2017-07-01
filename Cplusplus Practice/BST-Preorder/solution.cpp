class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preOrder;
        traverseTree(root, preOrder);
        return preOrder;
        
    }
    
    void traverseTree(TreeNode* root, vector<int>& preOrder){
        if(!root){
            return;
        }
        preOrder.push_back(root->val);
        if (root->left){
            traverseTree(root->left, preOrder);
        }
        if(root->right){
            traverseTree(root->right, preOrder);
        }
        return;
    }
};
