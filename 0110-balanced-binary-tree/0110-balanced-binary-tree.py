# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    ok = True
    def dfs(self,node):
        if not node:
            return 0
        ld = self.dfs(node.left) + 1
        lr = self.dfs(node.right) + 1
        if abs(ld - lr) > 1 :
            self.ok = False
        return max(ld,lr)
    
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        self.dfs(root)
        return self.ok