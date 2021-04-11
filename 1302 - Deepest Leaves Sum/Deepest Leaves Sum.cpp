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
    int deepestLeavesSum(TreeNode* root) {
        int max_depth = maxDepth(root);
        return simpleTraverse(root, max_depth, 1);
    }
    
    int simpleTraverse(TreeNode* root, int max_depth, int depth) {
        if (root == NULL) {
            return 0;
        }
        if (depth == max_depth) {
            return root->val;
        }
        return simpleTraverse(root->left, max_depth, depth + 1) + simpleTraverse(root->right, max_depth, depth + 1);
    }
    
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
