# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        ans = []
        queue = []

        if not root:
            return root
        
        queue.append(root)

        while queue:
            lev_size = len(queue)
            level = []
            for _ in range(lev_size):
                tnode = queue.pop(0)
                if tnode:
                    level.append(tnode.val)

                    if tnode.left:
                        queue.append(tnode.left)
                    else:
                        queue.append(None)

                    if tnode.right:
                        queue.append(tnode.right)
                    else:
                        queue.append(None)
            
                else:
                    level.append(-101)
            ans.append(level)
        for a in ans:
            a.reverse()
        arr = []
        for level in ans:
            arr.extend(level)
        
        print(arr)
        if not arr or arr[0] == -101:
            return None

        root = TreeNode(arr[0])

        queue = deque([root])

        i = 1

        while queue and i < len(arr):

            node = queue.popleft()

            # left child
            if i < len(arr) and arr[i] != -101:

                node.left = TreeNode(arr[i])
                queue.append(node.left)

            i += 1

            # right child
            if i < len(arr) and arr[i] != -101:

                node.right = TreeNode(arr[i])
                queue.append(node.right)

            i += 1

        return root

        # print(ans)
        # return root
