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
    vector<int> postorderTraversal(TreeNode* root) {
              stack <TreeNode*> st;
              vector<int> val;
              st.push(root);
              if(root==nullptr) return val;
              while(!st.empty()){
                TreeNode* temp = st.top();
                st.pop();
                val.push_back(temp->val);

                if(temp->left) st.push(temp->left);
                if(temp->right) st.push(temp->right);



              }
              reverse(val.begin(),val.end());

              return val;


    }
};