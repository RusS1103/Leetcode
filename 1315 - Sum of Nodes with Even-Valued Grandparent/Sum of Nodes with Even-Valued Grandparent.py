# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        return self.dfs(root, None, None)
        
    def dfs(self, current: TreeNode, parent: TreeNode, grandparent: TreeNode):
        if current is None:
            return 0
        sum = 0
        if grandparent is not None and grandparent.val % 2 == 0:
            sum += current.val
        sum += self.dfs(current.left, current, parent)
        sum += self.dfs(current.right, current, parent)
        return sum

