class Solution(object):
    def arraySign(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        neg = 0
        for i in range(len(nums)):
            if nums[i] == 0: 
                return 0
            if nums[i] < 0:
                neg += 1

        return -1 if neg % 2 else 1