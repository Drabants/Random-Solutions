/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    int sumLeftLeaves = 0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root){
            return sumLeftLeaves;
        }
        if(root->left){
        if(!root->left->left && !root->left->right){
            sumLeftLeaves += root->left->val;
        }
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return sumLeftLeaves;
        
    }
};
