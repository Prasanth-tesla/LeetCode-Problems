int minElement(int* nums, int numsSize) {
    int minEle = 0;
    for(int i = 0; i < numsSize; i++) {
        int sod = 0;
        while(nums[i] != 0) {
            sod += nums[i] % 10;
            nums[i] /= 10;
        }
        if(i == 0) minEle = sod;
        else minEle = minEle > sod ? sod : minEle;
    }
    return minEle;
}