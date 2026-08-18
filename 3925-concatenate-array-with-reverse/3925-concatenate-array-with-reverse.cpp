class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int size = nums.size();
        vector<int> res(2 * size);

        for(int i = 0 ; i < size ; i++)
            res[i] = res[2 * size - i - 1] = nums[i];

        return res;
    }
};