//not full program
    int height(Node* root) {
        if (!root){
            return -1;
        }
        int leftHeight;
        int rightHeight;
        leftHeight = height(root->left);
        rightHeight = height(root->right);
        if(leftHeight>rightHeight){
            return leftHeight+1;
        }else{
            return rightHeight+1;
        }
    }
