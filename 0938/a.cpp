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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root == NULL) {
        return 0;
    }
    int sum = rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    if (root->val >= L && root->val <= R) {
        sum += root->val;
    }
    return sum;
    }
};
