/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let size = nums.length;
    let left = 0, right = 1;

    while(right < size) {
        if(nums[left] != 0) left++;
        else if(nums[right] != 0) {
            nums[left] = nums[left] ^ nums[right];
            nums[right] = nums[left] ^ nums[right];
            nums[left] = nums[left] ^ nums[right];

            left++;
        }
        right++;
    }
};