class BSTIterator {
private:
      stack<TreeNode*> smallPile;
      TreeNode* traverse;
public:
    BSTIterator(TreeNode *root) {
      traverse = root;
        fillLeft();
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        fillLeft();
        return smallPile.size() >0;
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* answer= smallPile.top();
        smallPile.pop();
        traverse = answer->right;
        return answer->val;
    }
    
    void fillLeft(){
        while(traverse){
            smallPile.push(traverse);
            traverse = traverse->left;
        }    
    }
};
