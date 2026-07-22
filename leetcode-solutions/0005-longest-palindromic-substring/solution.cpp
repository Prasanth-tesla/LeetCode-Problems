class Solution {
public:
    string longestPalindrome(string s) {
        int row = s.size();
        int col = row;

        int dp[row][col];
        memset(dp, 0, sizeof(dp));

        int start = 0;
        int end = 1;

        for(int i = row - 1;i >= 0;i--) {
            for(int j = i;j < row;j++) {
                if(i == j)
                    dp[i][j] = 1;
                else if(s[i] == s[j] && (j == i + 1 || dp[i + 1][j - 1])) {
                    dp[i][j] = 1;
                    int currLen = j - i + 1;
                    if (currLen > end) {
                        end = currLen;
                        start = i;
                    }
            }
        }
    }
    return s.substr(start, end);
    }
};
