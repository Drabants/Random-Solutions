class Solution {
private:
    vector<int> answer;
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> rows;
        if(!root){
            return answer;
        }
        rows.push(root);
        rows.push(NULL);
        TreeNode* temp;
        int max = root->val;
        while(!rows.empty()){
            temp = rows.front();
            rows.pop();
            if(temp == NULL){
                if(!rows.empty()){
                rows.push(NULL);
                answer.push_back(max);
                max=rows.front()->val;
                }else{
                answer.push_back(max);
                }
                
            }else{
                if(temp->val > max){
                    max = temp->val;
                }
                if(temp->left){
                    rows.push(temp->left);
                }
                if(temp->right){
                    rows.push(temp->right);
                }
            }
        }
        return answer;
    }
};
