class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0, size = nums.size();
        for(int i = 0 ; i < size ; i++) {
            if (i > maxReach)
                return false;
            maxReach = max(maxReach, i + nums[i]);
        }
        return true;
    }
};