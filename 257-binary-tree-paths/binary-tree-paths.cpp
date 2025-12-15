class Solution {
public:
    void helper(TreeNode* root, vector<string>& paths, string path) {
        if (root == nullptr)
            return;

        // add current node
        path += to_string(root->val);

        // if leaf node → store path
        if (root->left == nullptr && root->right == nullptr) {
            paths.push_back(path);
            return;
        }

        // add arrow before going down
        path += "->";

        helper(root->left, paths, path);
        helper(root->right, paths, path);
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        helper(root, paths, "");
        return paths;
    }
};
