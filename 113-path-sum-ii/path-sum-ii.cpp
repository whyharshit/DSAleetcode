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
    void paths(TreeNode* root,vector<int>a,vector<vector<int>>&ans,int targetSum,int sum){
           if(!root) return;
           if(!(root->left)&& !(root->right)){
            a.push_back(root->val);
            sum +=root->val;
            if(sum==targetSum)ans.push_back(a);
            
           }
           int w =root->val;
           a.push_back(w);

           paths(root->left,a,ans,targetSum,sum+w);
           w =root->val;
           paths(root->right,a,ans,targetSum,sum+w);
           

       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int> a;
        paths(root,a,ans,targetSum,0);
        return ans;


        
    }
};