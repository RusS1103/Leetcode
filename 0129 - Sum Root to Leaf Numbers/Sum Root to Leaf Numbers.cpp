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
    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
    
    int solve(TreeNode* head, int sum = 0) {
        if (head == NULL) {
            return {};
        }
        sum = sum * 10 + head->val;
        if (!head->left && !head->right) {
            return sum;
        }
        return solve(head->left, sum) + solve(head->right, sum);
    }
};
