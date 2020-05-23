/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isSameTree(TreeNode* first, TreeNode* second) {
        if (first == NULL && second == NULL) {
            return true;
        }
        if (first == NULL) {
            return false;
        }
        if (second == NULL) {
            return false;
        }
        return first->val == second->val&& 
            isSameTree(first->left, second->left) && 
            isSameTree(first->right, second->right);
    }
};
