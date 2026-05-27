# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def chk(p, q):
            if not p and not q:
                return True

            elif not p or not q:
                return False
                
            else:
                if p.val != q.val:
                    return False
                else:
                    # if p.left or q.left:
                    return chk(p.left, q.left) and chk(p.right, q.right)

                    # if p.right or q.right:

                    return True
                
        p = root
        # find the node q in tree p
        def fp(p, q):
            if p and q:
                if p.val == q.val:
                    return chk(p, q) or fp(p.left, q) or fp(p.right, q)
                else:
                    return fp(p.left, q) or fp(p.right, q)
            else:
                return False

        if not p and not q:
            return True
        return fp(root, subRoot)













