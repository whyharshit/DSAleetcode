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
    int level(TreeNode* root){
        if(!root) return 0;
        
        return 1+max(level(root->left),level(root->right));
    }

    void helper(TreeNode* root, int level , int currlvl,vector<int>& arr){
        if(!root) return;
        if(currlvl==level){ 
            arr.push_back(root->val);
            return;
            }
        helper(root->left,level,currlvl+1,arr);
        helper(root->right,level,currlvl+1,arr);



    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
       vector<vector<int>> ans;

        int level1 = level(root);
        
        
        for(int i=level1;i>0;--i ){
            vector <int> arr;
            helper(root,level1,1,arr);
            ans.push_back(arr);
            level1 -=1;
        }
        return ans;

    }
};