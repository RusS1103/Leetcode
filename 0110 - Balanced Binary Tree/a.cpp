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
    bool isBalanced(TreeNode* root) {
        if (root == NULL) {
            return true;
        }
        if (root->left == NULL && root->right == NULL) {
            return true;
        }
        TreeNode* r = root->right;
        TreeNode* l = root->left;
        return abs(maxS(l) - maxS(r)) <= 1 && isBalanced(r) && isBalanced(l);
    }
    
    int maxS(TreeNode* head) {
        if (head == NULL) {
            return 0;
        }
        return max(maxS(head->left), maxS(head->right)) + 1;
    }
};
