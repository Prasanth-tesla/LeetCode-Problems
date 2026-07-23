int coinChange(int* coins, int coinsSize, int amount) {

    int dp[coinsSize + 1][amount + 1];

    dp[0][0] = 0;

    for (int j = 1; j <= amount; j++)
        dp[0][j] = INT_MAX - 1;

    for (int i = 1; i <= coinsSize; i++)
        dp[i][0] = 0;

    for (int i = 1; i <= coinsSize; i++) {
        for (int j = 1; j <= amount; j++) {

            if (coins[i-1] <= j) {
                dp[i][j] = (dp[i-1][j] < (1 + dp[i][j - coins[i-1]])) ? dp[i-1][j] : (1 + dp[i][j - coins[i-1]]);
            } 
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[coinsSize][amount] == INT_MAX - 1 ? -1 : dp[coinsSize][amount];
}
