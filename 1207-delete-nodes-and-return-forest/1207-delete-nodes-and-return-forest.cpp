class Solution {
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*> roots;
        
        map <int, int> mp;
        for(auto it:to_delete){
            mp[it]=1;
        } 
        dfs(root, mp, roots);
        if(root != NULL) roots.push_back(root);
        return roots;
    }

    void dfs(TreeNode * &root,map <int, int> &mp, vector<TreeNode * > &roots){
        if(root == NULL)  return;

        dfs(root->left, mp, roots);
        dfs(root->right, mp, roots);

        if(mp[root->val]){
            if(root->left!=NULL)  roots.push_back(root->left);
            if(root->right!=NULL) roots.push_back(root->right);
            root = NULL;
        }
    }
};