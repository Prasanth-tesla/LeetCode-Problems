int averageValue(int* nums, int numsSize) {
    int size = 0, sum = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] % 6 == 0) {
            sum += nums[i];
            size++;
        }
    }
    return size ? sum / size : 0;
}