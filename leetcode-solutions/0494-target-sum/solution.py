class Solution(object):
    def findTargetSumWays(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        sum = 0;
        for num in nums:
            sum += num
        
        if abs(target) > sum or (sum + target) % 2:
            return 0

        n = len(nums)
        sum = (sum + target) / 2

        dp = [[0] * (sum + 1) for _ in range(n + 1)]
        
        dp[0][0] = 1;
    
        for i in range (1, n+1):
            for j in range(sum+1):
                dp[i][j] = dp[i-1][j]
    
                if nums[i-1] <= j:
                    dp[i][j] += dp[i-1][j - nums[i-1]]

        return dp[n][sum]
