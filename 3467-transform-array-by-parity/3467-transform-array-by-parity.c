/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    int *parArr = malloc(numsSize * sizeof(int)), idx = 0, rev = numsSize - 1;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] % 2 == 0) parArr[idx++] = 0;
        else parArr[rev--] = 1; 
    }

    *returnSize = numsSize;
    return parArr;
}