class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int size = nums.length;

        int sum = 0;
        for(int i = 0 ; i < k ; i++)
            sum += nums[i];

        int maxSum = sum;

        for(int i = k ; i < size ; i++) {
            sum += nums[i];
            sum -= nums[i - k];
            maxSum = Math.max(sum, maxSum);
        }

        return (double) maxSum / k;
    }
}