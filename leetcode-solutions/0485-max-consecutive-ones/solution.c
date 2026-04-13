int max(int num1, int num2) {
    if(num1 > num2)
        return num1;
    return num2;
}
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count = 0, maxC = 0, i;
    for(i = 0;i < numsSize;i++) {
        if(nums[i] == 1) {
            count++;
            maxC = max(maxC, count);
        }
        else
            count = 0;
    }
    return maxC;
}
