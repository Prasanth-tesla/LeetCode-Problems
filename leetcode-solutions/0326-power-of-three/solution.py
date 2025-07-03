class Solution(object):
    def isPowerOfThree(self, n):
        if not (-(2**31)<=n<=2**31):
            return 0
        if n<1:
            return False
        while n%3==0:
            n//=3
        return n==1
        
