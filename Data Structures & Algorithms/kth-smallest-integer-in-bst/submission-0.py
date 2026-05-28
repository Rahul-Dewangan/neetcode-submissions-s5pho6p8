# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        import heapq
        heap = []

        def fun(root, k):
            if not root:
                return 1
            
            heapq.heappush(heap, -root.val)
            if len(heap) > k:
                x = heapq.heappop(heap)
            
            return fun(root.left, k) and fun(root.right, k)
        
        if not root:
            return 0

        fun(root, k)
        return -heapq.heappop(heap)
