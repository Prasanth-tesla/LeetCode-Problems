class Solution(object):
    def findNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        for num in nums:
            co = 0
            while num > 0:
                num //= 10
                co += 1
            if co % 2 == 0:
                count += 1
        return count
