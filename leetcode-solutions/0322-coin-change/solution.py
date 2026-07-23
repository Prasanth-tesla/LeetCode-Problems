import sys

class Solution(object):
    def coinChange(self, coins, amount):
        """
        :type coins: List[int]
        :type amount: int
        :rtype: int
        """
        n = len(coins)
        amt = amount + 1

        INF = sys.maxsize - 1

        dp = [[INF] * (amount + 1) for _ in range(n + 1)]

        for i in range(n + 1):
            dp[i][0] = 0

        for i in range(1, n+1):
            for j in range(amt):

                if coins[i-1] <= j:
                    dp[i][j] = min(dp[i-1][j], 1 + dp[i][j - coins[i-1]])

                else:
                    dp[i][j] = dp[i-1][j]
        
        return -1 if dp[n][amount] == INF else dp[n][amount]
