class Solution(object):
    def buildArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        size = len(nums)
        res = [0] * size

        for i in range(size):
            res[i] = nums[nums[i]]

        return res