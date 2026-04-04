class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if not nums:
            return 0
        maxP = minP = res = nums[0]
        for i in range (1,len(nums)):
            num = nums[i]
            if num < 0:
                maxP, minP = minP, maxP
            maxP = max(maxP * num, num)
            minP = min(minP * num, num)
            res = max(res, maxP)
        return res

