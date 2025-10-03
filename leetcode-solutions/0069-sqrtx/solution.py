class Solution(object):
    def mySqrt(self, x):
        """
        :type x: int
        :rtype: int
        """
        sqrt , odd = 0 , 1
        while odd <= x:
            x -= odd
            odd += 2
            sqrt += 1
        return sqrt
