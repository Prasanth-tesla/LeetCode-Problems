/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int *leftSum = malloc(numsSize * sizeof(int)), lSum = 0;
    int *rightSum = malloc(numsSize * sizeof(int)), rSum = 0;
    int *sumDiff = malloc(numsSize * sizeof(int));

    for(int i = 0; i < numsSize; i++) {
        lSum += nums[i];
        rSum += nums[numsSize - i - 1];
        leftSum[i] = lSum;
        rightSum[numsSize - i - 1] = rSum;
    }

    for(int i = 0; i < numsSize; i++)
        sumDiff[i] = (leftSum[i] > rightSum[i]) ? leftSum[i] - rightSum[i] : rightSum[i] - leftSum[i];

    *returnSize = numsSize;
    return sumDiff;
}