class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        size, sum = len(nums), 0

        for i in range(k):
            sum += nums[i]

        maxSum = sum

        for i in range(k, size):
            sum += nums[i]
            sum -= nums[i - k]
            maxSum = max(maxSum, sum)

        return float(maxSum) / k