# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        if not root:
            return []

        lev = []
        queue = []
        queue.append(root)
        
        while queue:
            lev_size = len(queue)

            temp = []
            for _ in range(lev_size):
                node = queue[0]
                temp.append(node.val)
                queue.pop(0)

                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)

            lev.append(temp)

        return lev