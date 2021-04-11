# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def deepestLeavesSum(self, root: TreeNode) -> int:
        max_depth = self.maxDepth(root)
        return self.simple_traverse(root, max_depth, 1)
    
    def simple_traverse(self, root: TreeNode, max_depth: int, depth: int):
        if root is None:
            return 0
        if depth == max_depth:
            return root.val
        return self.simple_traverse(root.left, max_depth, depth + 1) + self.simple_traverse(root.right, max_depth, depth + 1)
        
    def maxDepth(self, root: TreeNode) -> int:
        if root is None:
            return 0
        return max(self.maxDepth(root.left), self.maxDepth(root.right)) + 1

