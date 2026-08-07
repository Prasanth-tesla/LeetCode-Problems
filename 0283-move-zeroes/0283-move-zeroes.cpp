class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size(), insPos = 0;

        for(int i = 0 ; i < size ; i++) {
            if(nums[i] != 0) {
                nums[insPos] = nums[i];
                insPos++;
            }
        }

        for(int i = insPos ; i < size ; i++)
            nums[i] = 0;

    }
};