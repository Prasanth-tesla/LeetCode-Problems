class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count, m = 0, 0
        for n in nums:
            if n == 1:
                count += 1
                m = max(count, m)
            else:
                count = 0
        return m
