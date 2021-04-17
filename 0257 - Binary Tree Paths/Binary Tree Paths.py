# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: TreeNode) -> List[str]:
        result = []
        self.dfs(root, result, "")
        return result
        
        
    def dfs(self, root: TreeNode, result: List[str], path: str):
        if root.left is None and root.right is None:
            path += str(root.val)
            result.append(path)
            return
        
        if root is not None:
            if root.left is not None:
                self.dfs(root.left, result, path + str(root.val) + "->")
                
            if root.right is not None:
                self.dfs(root.right, result, path + str(root.val) + "->")

