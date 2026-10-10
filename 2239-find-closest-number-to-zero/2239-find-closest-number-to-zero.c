int findClosestNumber(int* nums, int numsSize) {
    int closest = nums[0];

    for(int i = 0; i < numsSize; i++) {
        if(abs(closest) > abs(nums[i])) closest = nums[i];
        else if(closest == -nums[i]) closest = (closest > nums[i]) ? closest : nums[i];
    }

    return closest;
}