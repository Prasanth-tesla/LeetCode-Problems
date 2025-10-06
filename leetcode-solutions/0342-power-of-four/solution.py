class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        i , x = 0 , 0
        while n >= x:
            x = 4**i
            if n == 4**i:
                return True
            i += 1
        return False
