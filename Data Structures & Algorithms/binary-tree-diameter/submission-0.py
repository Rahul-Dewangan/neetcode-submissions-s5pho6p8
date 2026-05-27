# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.ans = float('-inf')
        def diam(root):
            if not root:
                return 0
            
            lh = diam(root.left)
            rh = diam(root.right)

            temp = lh + rh
            self.ans = max(temp, self.ans)

            return 1 + max(lh, rh)
        
        diam(root)
        return self.ans
