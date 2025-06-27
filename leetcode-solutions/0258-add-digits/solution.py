class Solution(object):
    def addDigits(self, num):
        if 0<=num<=(2**31-1):
            if num<10:
                return num
            else:
                return 1+(num-1)%9
        return 0   
            
            
        
