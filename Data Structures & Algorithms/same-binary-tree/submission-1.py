# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        
        def chk(p, q):
            if not p and not q:
                return True

            elif not p or not q:
                return False
                
            else:
                if p.val != q.val:
                    return False
                else:
                    if p.left or q.left:
                        return chk(p.left, q.left)

                    if p.right or q.right:
                        return chk(p.right, q.right)

                    return True
                
        
        return chk(p, q)