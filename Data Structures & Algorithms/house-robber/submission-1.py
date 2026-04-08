class Solution:
    def sol(self, nums, i, dp):
        if i > len(nums)-1:
            return 0
        if dp[i] != -1:
            return dp[i]
        else:
            dp[i] = max((nums[i]+self.sol(nums, i+2, dp)) , self.sol(nums, i+1, dp))
            return dp[i]
        # return ans

    def rob(self, nums: List[int]) -> int:
        dp = [-1] * (len(nums)+1)
        return self.sol(nums, 0, dp)