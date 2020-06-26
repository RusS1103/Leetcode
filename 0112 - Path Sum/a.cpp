const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    return 0;
}();

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
    bool hasPathSum(TreeNode* root, int sum) {
        return hasOrNo(root, sum);
    }
    
    bool hasOrNo(TreeNode* root, int sum) {
        if (root == NULL) {
            return false;
        } else if (root->right == NULL && root->left == NULL && sum - root->val == 0) {
            return true;
        } 
        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
    }
};
