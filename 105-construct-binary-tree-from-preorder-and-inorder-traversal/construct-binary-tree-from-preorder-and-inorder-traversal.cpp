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
    TreeNode* build(vector<int>& pre, vector<int>& in,int prelo,int prehi,int inlo ,int inhi){
              if(prehi<prelo) return nullptr;
              TreeNode* root =new TreeNode(pre[prelo]);
              if(prehi==prelo) return root;
              
        
              int i =inlo;
              while(i<=inhi){
                if(in[i] == pre[prelo]) break;
                i++;
              }
              int k = i-inlo;
              root->left = build(pre, in,
                           prelo + 1,
                           prelo + k,
                           inlo,
                           i - 1);

        root->right = build(pre, in,
                            prelo + k + 1,
                            prehi,
                            i + 1,
                            inhi);

              return root;
             
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
       
        return build(pre,in,0,pre.size()-1,0,in.size()-1);
    }
};