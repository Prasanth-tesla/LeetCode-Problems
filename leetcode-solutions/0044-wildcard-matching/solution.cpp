class Solution {
public:
    bool isMatch(string s, string p) {
        int row = s.size();
        int col = p.size();

        bool dp[row+1][col+1];
        memset(dp, false, sizeof(dp));
        dp[0][0] = true;

        for(int j = 1; j <= col; j++) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
            }
        }

        for(int i = 1;i <= row;i++) {
            for(int j = 1;j <= col;j++) {
                if(s[i-1] == p[j-1] || p[j-1] == '?')
                    dp[i][j] = dp[i-1][j-1];
                else if(p[j-1] == '*')
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
            }
        }
        return dp[row][col];
    }
};
