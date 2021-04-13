# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        result = []
        self.dfs(root, result)
        return result
        
    def dfs(self, root: TreeNode, result: List[int]) -> None:
        if root:
            if root.left is not None:
                self.dfs(root.left, result)
            result.append(root.val)
            if root.right is not None:
                self.dfs(root.right, result)

