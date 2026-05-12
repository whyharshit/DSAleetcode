/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool helper (TreeNode* root,TreeNode*  target){
        if(root==target) return true;
        if(root==NULL)return false;
        return helper(root->left,target) || helper(root->right,target) ;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if(q==root && q==root) return root;
        else if(helper(root->left,q) && helper(root->left,p)) return lowestCommonAncestor(root->left,p,q);
        else if(helper(root->right,q) && helper(root->right,p)) return lowestCommonAncestor(root->right,p,q);
        else if(helper(root->left,q) && helper(root->right,p)) return root;
        else {
            return root;
        } 
        
        
    }
};