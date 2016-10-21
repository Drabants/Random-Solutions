/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
bool traverseTreeLeft(Node* root, int rootdata){
          if(root->left == NULL && root->right == NULL){
          return true;
      }
      if(root->left != NULL && root->right !=NULL){
        if(root->left->data < root->data && root->right->data > root->data && root->left->data <rootdata && root->right->data                 <rootdata){
            return traverseTreeLeft(root->left,rootdata)&&traverseTreeLeft(root->right,rootdata);
        }
          else{
          return false;
          }
      }
       else if (root->left != NULL){
           if(root->left->data < root->data && root->left->data <rootdata){
               return traverseTreeLeft(root->left,rootdata);
           }
          else{
              return false;
          }
        }
    else{
        if(root->right->data > root->data && root->right->data <rootdata){
            return traverseTreeLeft(root->right,rootdata);
        }
        else{
            return false;
        }
    }

}
bool traverseTreeRight(Node* root, int rootdata){
          if(root->left == NULL && root->right == NULL){
          return true;
      }
      if(root->left != NULL && root->right !=NULL){
        if(root->left->data < root->data && root->right->data > root->data && root->left->data >rootdata && root->right->data >           rootdata){
            return traverseTreeRight(root->left,rootdata)&&traverseTreeRight(root->right,rootdata);
        }
          else{
          return false;
          }
      }
       else if (root->left != NULL){
           if(root->left->data < root->data && root->left->data >rootdata){
               return traverseTreeRight(root->left,rootdata);
           }
          else{
              return false;
          }
        }
    else{
        if(root->right->data > root->data && root->right->data >rootdata){
            return traverseTreeRight(root->right,rootdata);
        }
        else{
            return false;
        }
    }

}
bool checkBST(Node* root) {
      return traverseTreeLeft(root->left, root->data)&&traverseTreeRight(root->right,root->data);
   }
