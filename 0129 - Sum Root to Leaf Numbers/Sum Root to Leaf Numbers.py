# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def solve(root, result):
    if root == None:
        return 0
    result = result * 10 + root.val
    if not root.left and not root.right:
        return result
        
    return solve(root.left, result) + solve(root.right, result)


class Solution:
    def sumNumbers(self, root: TreeNode) -> int:
        return solve(root, 0)

