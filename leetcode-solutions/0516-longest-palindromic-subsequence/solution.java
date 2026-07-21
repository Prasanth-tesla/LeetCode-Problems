class Solution {
    public int longestPalindromeSubseq(String s) {
        int row = s.length();
        String rev = new StringBuilder(s).reverse().toString();

        int [][] dp = new int[row + 1][row + 1];

        for(int i = 1;i <= row;i++) {
            for(int j = 1;j <= row;j++) {
                if(s.charAt(i-1) == rev.charAt(j-1)) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else {
                    dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[row][row];
    }
}
