import math
class Solution(object):
    def countBeautifulPairs(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        def gcd(a, b):
            while b != 0:
                a, b = b, a % b
            return a
        n = len(nums)
        count = 0

        for i in range (n):
            first = nums[i]
            while first >= 10:
                first //= 10
            for j in range (i + 1, n):
                last = nums[j] % 10
                if gcd(first, last) == 1:
                    count += 1

        return count
