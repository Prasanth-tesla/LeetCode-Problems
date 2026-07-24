/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var search = function(nums, target) {
    let size = nums.length;
    let low = 0, high = size - 1;

    while(low <= high) {
        let mid = (low + high) // 2;
        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
};