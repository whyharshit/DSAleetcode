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
    void helper(TreeNode* root, int targetSum,int sum,int& val){
          if(!root) return;

          sum += root->val;
          if(!(root->left) && !(root->right) && sum ==targetSum){
            val = 1;
            return;
          }
          helper(root->left,targetSum,sum,val);
          helper(root->right,targetSum,sum,val);


    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int val=0;
        int w =0;
        helper(root,targetSum,0,val);
        if(val==1) return true;
        else return false;

        
         


    }
};