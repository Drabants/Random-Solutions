class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        TreeNode* lTemp;
        TreeNode* rTemp;
        queue<TreeNode*> leftSide, rightSide;
        leftSide.push(root->left);
        rightSide.push(root->right);
        while(!leftSide.empty() && !rightSide.empty()){
            lTemp= leftSide.front();
            rTemp = rightSide.front();
            leftSide.pop();
            rightSide.pop();
            if(!lTemp && !rTemp){
                continue;
            }else{
            if(!lTemp || !rTemp){
                return false;
            }
            if(lTemp->val != rTemp->val){
                return false;
            }
            leftSide.push(lTemp->left);
            leftSide.push(lTemp->right);
            rightSide.push(rTemp->right);
            rightSide.push(rTemp->left);
            }
        }
            return true;
        }
};
