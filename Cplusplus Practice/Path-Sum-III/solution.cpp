class Solution {
private:
    int totalSums=0;
public:
    int pathSum(TreeNode* root, int sum) {
        if(!root){
            return 0;
        }
        pathSumHelper(root, 0, sum);
        pathSum(root->left, sum);
        pathSum(root->right, sum);
        return totalSums;
    }
    
    void pathSumHelper(TreeNode* root, int preSum, int sum){
        if(!root){
            return;
        }
        int current = preSum + root->val;
        if(current == sum){
            totalSums++;
        }
        pathSumHelper(root->left, current, sum);
        pathSumHelper(root->right, current, sum);
        return;
    }
    
};
