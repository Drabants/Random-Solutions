class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        if(!root)
        return paths;
        string path=to_string(root->val);
        searchPaths(root, paths, path);
        return paths;
    }
    void searchPaths(TreeNode* parent, vector<string>& paths, string path){
    if(!parent->left && !parent->right){
        paths.push_back(path);
        return; 
    }
    if(parent->left)
    searchPaths(parent->left, paths, path+"->"+to_string(parent->left->val));
    if(parent->right)
    searchPaths(parent->right, paths, path+"->"+to_string(parent->right->val));
    }
    
};
