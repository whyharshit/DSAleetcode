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

      TreeNode* build(vector<int>& inorder, vector<int>& postorder,int postlo,int posthi,int inhi,int inlo) {
      if(inhi<inlo) return nullptr;


      TreeNode* root =new TreeNode(postorder[posthi]);
      if(inhi==inlo) return root;
   
      int i = inlo;
      while(i<=inhi){
        if(postorder[posthi]==inorder[i]) break;
        i++;

      }
      int leftcount = i-inlo;
      int rightcount=inhi-i;
      root->left =build(inorder,postorder,postlo,postlo+leftcount-1,i-1,inlo);
      root->right=build(inorder,postorder,postlo+leftcount,posthi-1,inhi,i+1);
      return root;
        
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
          
          return build(inorder,postorder,0,postorder.size()-1,inorder.size()-1,0);

        
    }
};