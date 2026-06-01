class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        i, j, profit, ans = 0, 0, 0, float('-inf')

        while(j < len(prices)):
            profit = prices[j] - prices[i]
            ans = max(profit, ans)
            if prices[j] < prices[i]:
                i = j
            # elif prices[i] < prices[j]:
            j+=1
        
        return ans
            