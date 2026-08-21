int evenNumberBitwiseORs(int* nums, int numsSize) {
    int bitOr = 0;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] % 2 == 0) bitOr |= nums[i];
    }
    return bitOr;
}