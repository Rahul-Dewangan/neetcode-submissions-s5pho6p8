class Solution:
    
    def sol(self, n: int, dp) -> int:
        if n == 0:
            return 1
        if dp[n] != -1:
            return dp[n]
        else:
                
            if n > 1:
                dp[n] = self.sol(n-1, dp) + self.sol(n-2, dp)
                
            else:
                dp[n] = self.sol(n-1, dp)
            
            return dp[n]

    def climbStairs(self, n: int) -> int:
        dp = [-1] * (n+1)
        ans = self.sol(n, dp)

        return ans
        