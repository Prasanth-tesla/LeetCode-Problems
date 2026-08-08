class Solution {
    public int removeDuplicates(int[] nums) {
        int left = 0, size = nums.length;

        for(int right = 0 ; right < size ; right++) {
            if(nums[left] != nums[right]) {
                left++;
                nums[left] = nums[right];
            }
        }

        return ++left;
    }
}