int alternatingSum(int* nums, int numsSize) {
    int altSum = 0;

    for(int i = 0; i < numsSize; i++) 
        altSum = (i % 2 == 0) ? altSum + nums[i] : altSum - nums[i];

    return altSum;
}