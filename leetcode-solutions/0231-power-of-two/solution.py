class Solution(object):
    def isPowerOfTwo(self, n):
        if not (-(2**31)<=n<=2**31):
            return 0
        if n<=0:
            return False
        return (n&(n-1))==0
        
