class Solution {
    public void moveZeroes(int[] nums) {
        int insPos = 0;
        for(int i = 0;i < nums.length;i++) {
            if(nums[i] != 0) {
                nums[insPos] = nums[i];
                insPos++;
            }
        }
        for(int i = insPos;i < nums.length;i++)
            nums[i] = 0;
    }
}
