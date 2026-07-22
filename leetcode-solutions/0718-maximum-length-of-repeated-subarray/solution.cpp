class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int row = nums1.size();
        int col = nums2.size();

        int dp[row + 1][col + 1];
        memset(dp, 0, sizeof(dp));

        int max = 0;

        for(int i = 1;i <= row;i++) {
            for(int j = 1;j <= col;j++) {
                if(nums1[i-1] == nums2[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else
                    dp[i][j] = 0;

                if(dp[i][j] > max)
                    max = dp[i][j];
            }
        } 

        return max;
    }
};
