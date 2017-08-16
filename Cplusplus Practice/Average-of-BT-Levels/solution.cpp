class Solution {
private:
    vector<double> averages;
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> btq;
        btq.push(root);
        btq.push(NULL);
        double counter =0;
        double sum = 0;
        TreeNode* temp;
        while(!btq.empty()){
            temp = btq.front();
            btq.pop();
            if(!temp){
                averages.push_back(sum/counter);
                sum = 0;
                counter = 0;
                if(!btq.empty()){
                btq.push(NULL);
                }
            }
            else{
                sum += temp->val;
                if(temp->left){
                    btq.push(temp->left);
                }
                if(temp->right){
                    btq.push(temp->right);
                }
                counter++;
            }
        }
        return averages;
    }
};
