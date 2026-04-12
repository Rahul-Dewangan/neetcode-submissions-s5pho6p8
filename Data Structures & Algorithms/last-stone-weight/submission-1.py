class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        import heapq
        arr = [-a for a in stones]
        heapq.heapify(arr)
        

        while len(arr) > 1:
            x = heapq.heappop(arr)
            y = heapq.heappop(arr)
            if x == y:
                continue
            elif x < y:
                heapq.heappush(arr, x-y)
            else:
                heapq.heappush(arr, y-x)


        # print(arr)
        if len(arr) == 1:
            return -heapq.heappop(arr)
        else:
            return 0