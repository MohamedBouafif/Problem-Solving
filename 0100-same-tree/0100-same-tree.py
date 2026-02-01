# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    ans = True
    def dfs(self,n1,n2) -> bool :
        if not n1 and not n2 :
            return True
        if not n1 or not n2 :
            return False
        
        if not n1.val == n2.val:
            return False

        return self.dfs(n1.left,n2.left) and self.dfs(n1.right,n2.right)
        
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        
        return self.dfs(p,q)
        