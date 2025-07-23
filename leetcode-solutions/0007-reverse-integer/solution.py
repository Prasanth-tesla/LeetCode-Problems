class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if not (-2**31 <= x <= 23**31-1):
            return 0
        sign = -1 if x<0 else 1
        x = abs(x)
        rev = int(str(x)[::-1]) * sign

        if not -(2**31) <= rev <= 2**31-1:
            return 0
        return rev
        
