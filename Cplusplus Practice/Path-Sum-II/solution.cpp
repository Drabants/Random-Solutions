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
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> sumPaths;
        vector<int> path;
        if (root){
        pathSumHelper(root, sum, path, sumPaths);
        }
        return sumPaths;
        }
        
    void pathSumHelper(TreeNode* root, int sum, vector<int> path, vector<vector<int>>& paths){
                    path.push_back(root->val);
        if(!root->left && !root->right && (root->val - sum) == 0 ){

            paths.push_back(path);

            return;
        }

        if(root->left){
            pathSumHelper(root->left, (sum - root->val), path, paths);
        }
        if (root->right){
            pathSumHelper(root->right, (sum - root->val), path, paths);
        }
        
    }
};
