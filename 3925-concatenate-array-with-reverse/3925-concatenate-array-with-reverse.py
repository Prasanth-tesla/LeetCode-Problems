class Solution(object):
    def concatWithReverse(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        size = len(nums)
        res = [0] * (2 * size)

        for i in range(size):
            res[i] = res[2 * size - i - 1] = nums[i]
        
        return res