class Solution {
    public int findClosestNumber(int[] nums) {
        int closest = nums[0];

        for(int i = 0; i < nums.length; i++) {
            if(Math.abs(closest) > Math.abs(nums[i]))
                closest = nums[i];
            else if(closest == -nums[i])
                closest = (closest < 0) ? nums[i] : closest;
        }

        return closest;
    }
}