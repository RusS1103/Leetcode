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
    
    void visit(TreeNode* node, TreeNode* p, TreeNode* q, bool& pFound, bool& qFound, TreeNode*& lca) {
        if (node == NULL) {
            return;
        }
        if (pFound && qFound) {
            return;
        }
        
        bool beforeFound = pFound || qFound;
        if (node == p) {
            pFound = true;
        }
        if (node == q) {
            qFound = true;
        }
        visit(node->left, p, q, pFound, qFound, lca);
        visit(node->right, p, q, pFound, qFound, lca);
        if (lca == NULL && pFound && qFound && !beforeFound) {
            lca = node;
        }
    }
    
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* lca = NULL;
        bool pFound = false;
        bool qFound = false;
        visit(root, p, q, pFound, qFound, lca);
        return lca;
    }
};
