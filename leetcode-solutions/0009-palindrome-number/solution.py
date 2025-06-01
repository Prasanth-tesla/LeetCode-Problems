class Solution(object):
    def isPalindrome(self, x):
        if -2**31 <= x <= 2**31-1:
            if x<0:
                return False
            rev=int(str(abs(x))[::-1])
            if x==rev:
                return True
            return False
        return False
        
        
