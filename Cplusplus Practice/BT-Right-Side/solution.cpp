class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        TreeNode* path = root;
        vector<int> answer;
        int level = 1;
        if(!root) return answer;
        answer.push_back(root->val);
        treeHelper(path, level, answer);
        return answer;
    }
    void treeHelper(TreeNode* root, int level, vector<int>& answer){

        if(!root){
        return;
        }
        cout<< level<< endl;
        if(answer.size() < level){
            answer.push_back(root->val);
        }
        treeHelper(root->right, level+1, answer);
        treeHelper(root->left, level+1, answer);
    }
};
