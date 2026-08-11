class Solution {
public:
    int minDistance(string word1, string word2) {
        int row = word1.length();
        int col = word2.length();
        int dp[row + 1][col + 1];
        memset(dp, 0, sizeof(dp));
        
        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= col; j++) {
                if (word1[i - 1] == word2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        int lcsLength = dp[row][col];
        return row + col - 2 * lcsLength;
    }
};