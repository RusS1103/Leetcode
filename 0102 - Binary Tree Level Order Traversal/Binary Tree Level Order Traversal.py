# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if root == None:
            return []

        q = deque()
        result = []
        q.append(root)
        
        while len(q) != 0:
            path = []
            size = len(q)
            for i in range(size):
                first_node = q[0]
                q.popleft()
                path.append(first_node.val)
                
                if first_node.left:
                    q.append(first_node.left)
                if first_node.right:
                    q.append(first_node.right)
                    
            result.append(path)
        
        return result

