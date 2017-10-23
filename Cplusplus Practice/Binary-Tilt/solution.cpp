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
    int tilt = 0;
public:
    int findTilt(TreeNode* root) {
        tiltHelper(root);
        return tilt;
    }
    
    int tiltHelper(TreeNode* root){
        if(!root){
            return 0;
        }
        int left = tiltHelper(root->left);
        int right = tiltHelper(root->right);
        tilt += abs(left - right);
        return left+right+root->val;
    }
    
    
};
