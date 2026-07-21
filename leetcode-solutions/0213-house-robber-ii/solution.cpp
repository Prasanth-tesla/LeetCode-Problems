class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 0) return 0;
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);

        int ans1[n];
        int ans2[n];
        ans1[0] = nums[0];
        ans1[1] = max(nums[1],nums[0]);

        for(int i = 2;i < n;i++)
            ans1[i] = max(ans1[i-1], ans1[i-2] + nums[i]);
            
        ans2[0] = 0;
        ans2[1] = nums[1];

        for(int i = 2;i < n;i++)
            ans2[i] = max(ans2[i-1], ans2[i-2] + nums[i]);

        return max(ans1[n-2], ans2[n-1]);
    }
};
