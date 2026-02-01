# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self,n1):
        if not n1 :
            return 0
        return max(self.dfs(n1.left)+1 , self.dfs(n1.right) + 1)
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        return self.dfs(root)
        