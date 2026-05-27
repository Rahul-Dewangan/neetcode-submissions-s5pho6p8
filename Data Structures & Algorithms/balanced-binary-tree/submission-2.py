# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def bal(root):
            if not root:
                return 0
            
            lh = bal(root.left)
            if lh == -1:
                return -1

            rh = bal(root.right)
            if rh == -1:
                return -1
            if abs(lh-rh) > 1:
                return -1
            return 1 + max(lh, rh)
            

        
        if not root:
            return True

        if bal(root) != -1:
            return True
        else:
            return False

