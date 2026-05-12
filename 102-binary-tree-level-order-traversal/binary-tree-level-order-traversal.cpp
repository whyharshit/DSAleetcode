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
    int levels(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(levels(root->left),levels(root->right));

    }
    void helper(TreeNode* root,vector<int>&level,int lvl,int curr){
        if(root==NULL) return;
        if(lvl==curr) level.push_back(root->val);
        if(curr<=lvl){
        helper(root->left,level,lvl,curr+1);
        helper(root->right,level,lvl,curr+1);
        }
        return;



    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int lvl = levels(root);
        vector<vector<int>> w;
        for(int i=1;i<=lvl;++i){
            vector<int>t;
            helper(root,t,i,1);
            w.push_back(t);

        }
        return w;
    }
};