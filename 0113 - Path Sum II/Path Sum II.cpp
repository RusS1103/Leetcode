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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return {};
        }
        vector<vector<int>> result;
        dfs(root, targetSum, result, 0, {});
        return result;
    }
    
    
    void dfs(TreeNode* root, int targetSum, vector<vector<int>>& result, int sum, vector<int> path) {
        if (root->left == NULL && root->right == NULL && (targetSum == (sum + root->val))) {
            path.push_back(root->val);
            result.push_back(path);
            return;
        }
        if (root->left == NULL && root->right == NULL) {
            return;
        }
        path.push_back(root->val);
        if (root->left) {
            dfs(root->left, targetSum, result, sum + root->val, path);
        }
        if (root->right) {
            dfs(root->right, targetSum, result, sum + root->val, path);
        }
    }
};
