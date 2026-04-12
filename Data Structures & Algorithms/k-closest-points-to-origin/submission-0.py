class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        temp = [[x*x + y*y, x, y] for x, y in points]
        
        temp.sort()
        ans = []

        for i in range(k):
            print(i)
            ans.append([temp[i][1], temp[i][2]])
            
        return ans
