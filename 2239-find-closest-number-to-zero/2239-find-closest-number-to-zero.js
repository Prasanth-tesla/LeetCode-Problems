/**
 * @param {number[]} nums
 * @return {number}
 */
var findClosestNumber = function(nums) {
    let closest = nums[0], size = nums.length;

    for(let i = 0; i < size; i++) {
        if(Math.abs(closest) > Math.abs(nums[i]))
            closest = nums[i];

        else if(closest == -nums[i])
            closest = (closest < 0) ? nums[i] : closest;
    }

    return closest;
};