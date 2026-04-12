class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        import heapq

        heap = []

        for num in nums:
            heapq.heappush(heap, num)   # max heap using negative
            
            if len(heap) > k:
                heapq.heappop(heap)      # remove largest
        
        return heap[0]