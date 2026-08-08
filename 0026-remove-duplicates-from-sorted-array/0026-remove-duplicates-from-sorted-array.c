int removeDuplicates(int* nums, int numsSize) {
    int left = 0;

    for(int right = 1 ; right < numsSize ; right++) {
        if(nums[left] != nums[right]) {
            left++;
            nums[left] = nums[right];
        }
    }

    return left + 1;
}