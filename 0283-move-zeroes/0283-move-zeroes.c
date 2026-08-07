void moveZeroes(int* nums, int numsSize) {
    int insPos = 0;

    for(int i = 0 ; i < numsSize ; i++) {
        if(nums[i] != 0) {
            nums[insPos] = nums[i];
            insPos++;
        }
    }

    for(int i = insPos ; i < numsSize ; i++)
        nums[i] = 0;
}