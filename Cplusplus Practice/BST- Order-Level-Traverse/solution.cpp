class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levelArray;
        levelOrderHelper(root, 0, levelArray);
        return levelArray;
    }
    
    void levelOrderHelper(TreeNode* root, int height, vector<vector<int>>& levelArray){
        if(!root){
            return;
        }
        if(levelArray.size() == height){
            levelArray.push_back(vector<int>());
        }
        levelArray[height].push_back(root->val);
        height++;
        if(root->left){
            levelOrderHelper(root->left, height, levelArray);
        }
  		if(root->right){
            levelOrderHelper(root->right, height, levelArray);
        } 
        return;
        
    }
};
