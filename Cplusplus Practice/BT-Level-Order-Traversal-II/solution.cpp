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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> bfs;
        queue<int> height;
        TreeNode* temp;
        int tempH = 0;
        vector<vector<int>> answer;
        if(!root) return answer;
        bfs.push(root);
        height.push(tempH);
        while(!bfs.empty()){
            temp = bfs.front();
            tempH = height.front();
            bfs.pop();
            height.pop();
            if(temp->left){
                bfs.push(temp->left);
                height.push(tempH+1);
            } 
            if(temp->right){
                bfs.push(temp->right);
                height.push(tempH+1);
            }
            if(answer.empty()|| tempH>answer.size()-1) answer.push_back(vector<int>());
            answer[tempH].push_back(temp->val);
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
