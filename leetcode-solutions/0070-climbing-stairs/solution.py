class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n <= 2:
            return n
        prev, next = 1, 2
        for i in range (3, n + 1):
            curr = prev + next
            prev = next
            next = curr
        return next
