class Solution(object):
    def tribonacci(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 0:
            return 0
        if n < 3:
            return 1
        prev, mid, next = 0, 1, 1
        for i in range (3, n + 1):
            curr = prev + mid + next
            prev = mid
            mid = next
            next = curr
        return next
