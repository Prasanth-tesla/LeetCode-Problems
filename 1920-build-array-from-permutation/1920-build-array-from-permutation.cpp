class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> arr(size);

        for(int i = 0; i < size; i++) {
            arr[i] = nums[nums[i]];
        }

        return arr;
    }
};