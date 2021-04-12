# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: TreeNode, targetSum: int) -> List[List[int]]:
        result = []
        if root is None:
            return []
        self.dfs(root, targetSum, [], result)
        return result
        
        
    def dfs(self, root: TreeNode, targetSum: int, path: List[int], result: List[List[int]]) -> None:
        if root:
            if not root.left and not root.right and targetSum == root.val:
                path.append(root.val)
                result.append(path)
                return

            self.dfs(root.left, targetSum - root.val, path + [root.val], result)
            self.dfs(root.right, targetSum - root.val, path + [root.val], result)

