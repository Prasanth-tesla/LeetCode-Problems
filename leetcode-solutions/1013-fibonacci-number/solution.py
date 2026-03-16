class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        prev, next = 0, 1
        for i in range (n):
            prev, next = next, next + prev
        return prev
