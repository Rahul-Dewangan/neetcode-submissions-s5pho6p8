# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        ppar = []
        qpar = []
        def dfs(root, parlst, node):
            if not root:
                return 0
            parlst.append(root)
            if root.val == node.val:
                return parlst.copy()
            else:
                    left = dfs(root.left, parlst, node)

                    if left:
                        return left

                    right = dfs(root.right, parlst, node)

                    if right:
                        return right

                    parlst.pop()
        
        ppar = dfs(root, ppar, p)
        qpar = dfs(root, qpar, q)

        # print(ppar)
        ans = TreeNode()
        for i in range(min(len(ppar), len(qpar))):
            if ppar[i] == qpar[i]:
                ans = ppar[i]
            else:
                break
        return ans









