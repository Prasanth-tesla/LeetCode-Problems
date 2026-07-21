class Solution {
    public int minDistance(String word1, String word2) {
    int row = word1.length();
    int col = word2.length();
    int[][] dp = new int[row + 1][col + 1];
    
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (word1.charAt(i - 1) == word2.charAt(j - 1)) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    int lcsLength = dp[row][col];
    return row + col - 2 * lcsLength;
    }
}
