class Solution {
    public int[] sortedSquares(int[] nums) {
        int left = 0, right = nums.length - 1;
        int i = right;

        int res[] = new int[i + 1];

        while(left <= right) {
            if(Math.abs(nums[left]) > Math.abs(nums[right])) {
                res[i] = nums[left] * nums[left];
                left++;
            }
            else {
                res[i] = nums[right] * nums[right];
                right--;
            }

            i--;
        }

        return res;
    }
}