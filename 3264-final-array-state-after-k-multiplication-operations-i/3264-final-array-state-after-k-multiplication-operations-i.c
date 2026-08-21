/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    int *finalArr = malloc(numsSize * sizeof(int));
    *returnSize = 0;

    for(int i = 0; i < k; i++) {
        int min = 0;
        for(int j = 0; j < numsSize; j++)
            min = (nums[min] > nums[j]) ? j : min;
        nums[min] *= multiplier;
    }

    for(int i = 0; i < numsSize; i++) finalArr[i] = nums[i];

    *returnSize = numsSize;
    return finalArr;
}