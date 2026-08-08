/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0, right = numbersSize - 1;
    int* res = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    res[0] = res[1] = -1;

    while(left < right) {
        if(numbers[left] + numbers[right] > target) right--;
        else if(numbers[left] + numbers[right] < target) left++;
        else {
            res[0] = left + 1;
            res[1] = right + 1;
            break;
        }
    }

    return res;
}