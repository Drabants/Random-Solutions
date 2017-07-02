class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d == 1){
            TreeNode* temp = new TreeNode(v);
            temp->left = root;
            return temp;
        }else{
        int height = 1;
        addHelper(root, v, d, height);
        return root;
        }
    }
    
    void addHelper(TreeNode* root, int v, int d, int height){
       if(!root || d == height){
           return;
       }
       if(height == d-1){
           TreeNode* tempLeft = new TreeNode(v);
           TreeNode* tempRight = new TreeNode(v);
           tempLeft->left= root->left;
           tempRight->right = root->right;
           root->left = tempLeft;
           root->right = tempRight;
           return;
       }
        height++;
        addHelper(root->left,  v,  d, height);
        addHelper(root->right,  v,  d, height);
        return;
    }
};
