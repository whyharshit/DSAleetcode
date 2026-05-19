class Solution {
public:

    void helper(TreeNode* root, long long sum,
                int targetSum, int& paths) {

        if(root == nullptr) return;

        sum += root->val;

        if(sum == targetSum) {
            ++paths;
        }

        helper(root->left, sum, targetSum, paths);
        helper(root->right, sum, targetSum, paths);
    }

    int pathSum(TreeNode* root, int targetSum) {

        if(root == nullptr) return 0;

        int paths = 0;

        helper(root, 0, targetSum, paths);

        return paths
             + pathSum(root->left, targetSum)
             + pathSum(root->right, targetSum);
    }
};