int singleNonDuplicate(int* nums, int numsSize) {
    int low = 0, high = numsSize - 1;
    while(low < high) {
        int mid = low + (high - low) / 2;
        if(mid % 2 == 0) {
            if(nums[mid + 1] == nums[mid]) {
                low = mid + 2;
            } else high = mid - 1;
        }
        else {
            if(nums[mid - 1] == nums[mid]) {
                low = mid + 1;
            } else high = mid - 1;
        }
    }
    return nums[low];
}