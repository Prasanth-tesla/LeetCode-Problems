class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        myset = set()
        for num in nums:
            myset.add(num)
        maxLen = 0
        for num in myset:
            if (num - 1) not in myset:
                curr = num
                len = 1
                while (curr + 1) in myset:
                    curr += 1
                    len += 1
                maxLen = max(maxLen, len)
        return maxLen
