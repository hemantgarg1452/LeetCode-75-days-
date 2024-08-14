/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count=0;
    int goodNodes(TreeNode* root) {
        treemMet(root,root->val);
        return count;
    }

    void treemMet(TreeNode* temp,int mx){
        if(temp==NULL) return;
    
        if(temp->val>=mx) count++;

        treemMet(temp->left,max(temp->val,mx));
        treemMet(temp->right,max(temp->val,mx));
    }
};