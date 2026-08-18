/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    *returnSize = 0;

    int *res = malloc(2 * numsSize * sizeof(int));

    for(int i = 0 ; i < numsSize ; i++) 
        res[i] = res[2 * numsSize - i - 1] = nums[i];

    *returnSize =  2 * numsSize;
    return res;
}