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
    int helper(TreeNode* root,int &diameter){
        if(root==nullptr) return 0;
        int lft = helper(root->left,diameter);
        int rgt = helper(root->right,diameter);
        diameter=max(diameter,lft+rgt);
        return 1+max(lft,rgt);
        
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        helper(root,diameter);
        return diameter;

       

    }
};