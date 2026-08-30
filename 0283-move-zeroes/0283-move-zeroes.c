void moveZeroes(int* nums, int numsSize) {
    int left = 0, right = 1;

    while(right < numsSize) {
        if(nums[left] != 0) left++;
        else if(nums[right] != 0) {
            nums[left] = nums[left] ^ nums[right];
            nums[right] = nums[left] ^ nums[right];
            nums[left] = nums[left] ^ nums[right];
            left++;
        }
        right++;
    }
}