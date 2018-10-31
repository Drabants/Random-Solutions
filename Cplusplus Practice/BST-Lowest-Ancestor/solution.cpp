  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if (v1 > v2){
            swap(v1, v2);
        }
        if(root->data > v1 && root->data < v2){
            return root;
        }
        if(root->data < v1){
            root = lca(root->right, v1, v2);
        }
        if(root-> data > v2){
            root = lca(root->left, v1, v2);
        }
        return root;
    }
