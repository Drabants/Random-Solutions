class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        stack<TreeNode*> traverse;
        traverse.push(s);
        bool answer = false;
        TreeNode* temp;
         while(!answer && !traverse.empty()){
             temp = traverse.top();
             traverse.pop();
             if(temp->left){
                 traverse.push(temp->left);
             }
             if(temp->right){
                 traverse.push(temp->right);
             }
             if(temp->val == t->val){
                 answer= subtreeHelper(temp, t);
             }
         }
        return answer;
        
    }
    
    bool subtreeHelper(TreeNode* s, TreeNode* t){
        if(s==NULL && t==NULL){
            return true;
        }
        if(s==NULL|| t==NULL){
            return false;
        }
        return s->val == t->val && subtreeHelper(s->left, t->left) && subtreeHelper(s->right, t->right);
    }
};
