class Solution {
public:
    int countSubstrings(string s) {
        int row = s.size();
        int col = row,res = 0;

        int dp[row][col];
        memset(dp, 0, sizeof(dp));

        for(int i = row - 1;i >= 0;i--) {
            for(int j = i;j < row;j++) {
                if(i == j)
                    dp[i][j] = 1;
                else if(s[i] == s[j] && (j == i + 1 || dp[i + 1][j - 1]))
                    dp[i][j] = 1;
                res += dp[i][j];
            }
        }
        return res;
    }
};