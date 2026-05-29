# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        self.ans = float('-inf')

        def ms(root):
            if not root:
                return 0
            
            ls = ms(root.left)
            rs = ms(root.right)

            temp = ls+rs+root.val
            self.ans = max(self.ans, temp)

            if (max(ls, rs) + root.val) > 0:
                return (max(ls, rs) + root.val)
            
            elif root.val > 0:
                return root.val
            
            else:
                return 0
        
        ms(root)
        return self.ans