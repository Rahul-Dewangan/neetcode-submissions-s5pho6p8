class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        arr = [a for a in nums]

        import heapq
        heapq.heapify(arr)
        n = len(arr)
        for _ in range(n - k):
            heapq.heappop(arr)
        
        return arr[0] 