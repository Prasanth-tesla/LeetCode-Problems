class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findBound(nums, target, true);
        int last = findBound(nums, target, false);

        return {first, last};
    }
private:
    int findBound(vector<int>& nums, int target, bool isFirst) {
        int low = 0, high = nums.size() - 1, bound = -1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target) {
                bound = mid;

                if(isFirst) high = mid - 1;
                else low = mid + 1;
            } else if(nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return bound;
    }
};