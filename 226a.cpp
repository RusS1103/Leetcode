/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*, vector<TreeNode*>> stack;
        if (root != NULL) {
            stack.push(root);
        }
        while (!stack.empty()) {
            TreeNode* cur = stack.top();
            stack.pop();
            swap(cur->left, cur->right);
            if (cur->left != NULL) {
                stack.push(cur->left);
            }
            if (cur->right != NULL) {
                stack.push(cur->right);
            }
        }
        return root;
    }
};
