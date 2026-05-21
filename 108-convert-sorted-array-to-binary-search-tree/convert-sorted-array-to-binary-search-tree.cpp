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
    TreeNode* helper(vector<int>& nums,int lo,int hi){
        if(hi<lo) return nullptr;   
        int mid =lo+ (hi-lo)/2;
        
        TreeNode* ans= new TreeNode(nums[mid]);
      
        ans->left= helper(nums,lo,mid-1);
        ans->right= helper(nums,mid+1,hi);
        return ans;

     }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
        int n = nums.size()-1;
       return  helper(nums,0,n);
        
    }
};