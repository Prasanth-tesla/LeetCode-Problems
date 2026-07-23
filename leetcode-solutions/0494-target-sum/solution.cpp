class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (int num : nums)
            sum += num;
        
        if (abs(target) > sum || (sum + target) % 2) return 0;

        int n = nums.size();
        sum = (sum + target) / 2;

        vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(sum + 1, 0));
        
        dp[0][0] = 1;
    
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {
    
                dp[i][j] = dp[i-1][j];
    
                if (nums[i-1] <= j)
                    dp[i][j] += dp[i-1][j - nums[i-1]];
            }
        }
    
        return dp[n][sum];
    }
};
