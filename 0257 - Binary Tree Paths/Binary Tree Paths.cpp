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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        dfs(root, "", result);
        return result;
    }
    
    void dfs(TreeNode* root, string path, vector<string>& result) {
        if (root->left == NULL && root->right == NULL) {
            path += to_string(root->val);
            result.push_back(path);
            return;
        }
        if (root) {
            if (root->left != NULL) {
                dfs(root->left, path + to_string(root->val) + "->", result);
            }
            if (root->right != NULL) {
                dfs(root->right, path + to_string(root->val) + "->", result);
            }
        }
    }
};
