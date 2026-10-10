class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0], size = nums.size();

        for(int i = 0; i < size; i++) {
            if(abs(closest) > abs(nums[i]))
                closest = nums[i];
            else if(closest == -nums[i])
                closest = (closest < 0) ? nums[i] : closest;
        }

        return closest;
    }
};