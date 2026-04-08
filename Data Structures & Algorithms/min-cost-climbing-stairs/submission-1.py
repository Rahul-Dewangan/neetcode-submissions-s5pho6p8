class Solution:
    def sol(self, cost, i, dp):
        # base case
        if i > len(cost)-1:
            return 0
        
        if dp[i] != -1:
            return dp[i]
        else:
            dp[i] = cost[i] + min(self.sol(cost, i+1, dp), self.sol(cost, i+2, dp))

         
        return dp[i]

    def minCostClimbingStairs(self, cost: List[int]) -> int:
        dp = [-1]*(len(cost) +1 )
        a0 = self.sol(cost, 0, dp)
        a1 = self.sol(cost, 1, dp)

        return min(a0, a1)
        