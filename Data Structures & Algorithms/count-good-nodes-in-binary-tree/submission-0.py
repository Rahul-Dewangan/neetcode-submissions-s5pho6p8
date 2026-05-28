# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        self.count = 0
        def cnod(root, node):
            if not root:
                return 1
            
            if root.val >= node.val:
                self.count += 1
                node = root
            
            return cnod(root.left, node) and cnod(root.right, node)
        
        if not root:
            return 0

        cnod(root, root)
        return self.count
            
