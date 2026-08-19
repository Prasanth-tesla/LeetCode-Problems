class Solution(object):
    def mirrorDistance(self, n):
        """
        :type n: int
        :rtype: int
        """
        rev, num = 0, n

        while num:
            rev *= 10
            rev += num % 10
            num //= 10

        return n - rev if n > rev else rev - n