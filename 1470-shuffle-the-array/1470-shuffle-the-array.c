

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *shuffled = malloc(numsSize * sizeof(int));
    int left = 0, right = n, idx = 0;

    while(right < numsSize) {
        shuffled[idx++] = nums[left++];
        shuffled[idx++] = nums[right++];
    }

    *returnSize = numsSize;
    return shuffled;
}