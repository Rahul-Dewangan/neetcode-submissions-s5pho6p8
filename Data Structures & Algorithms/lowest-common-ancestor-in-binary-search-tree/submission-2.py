# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        def dfs(root, pn, qn):
            if not root:
                return None
            
            lh = dfs(root.left, pn, qn)
            rh = dfs(root.right, pn, qn)
            
            if root.val == pn.val or root.val ==qn.val:
                return root

            if lh == None and rh is not None:
                return rh
            elif rh == None and lh is not None:
                return lh
            elif lh is None and rh is None:
                return None
            else:
                return root
        
        return dfs(root, p, q)