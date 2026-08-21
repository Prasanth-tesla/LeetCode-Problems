int countPartitions(int* nums, int numsSize) {
    int *prefSum = malloc(numsSize * sizeof(int));
    int *sufSum = malloc(numsSize * sizeof(int)), parts = 0;

    prefSum[0] = nums[0];
    sufSum[0] = nums[numsSize - 1];

    for(int i = 1; i < numsSize; i++) {
        prefSum[i] = prefSum[i - 1] + nums[i];
        sufSum[i] = sufSum[i - 1] + nums[numsSize - i - 1];
    }

    for(int i = 0; i < numsSize - 1; i++) {
        if((prefSum[i] - sufSum[numsSize - i - 2]) % 2 == 0) parts++;
    }
    
    return parts;
}