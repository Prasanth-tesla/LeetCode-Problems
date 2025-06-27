class Solution(object):
    def commonFactors(self, a, b):
        if 1<=a<=1000 and 1<=b<=1000:
            com=0
            min=a if a<b else b
            for i in range(1,min+1):
                if a%i==0 and b%i==0:
                    com+=1
            return com
        return 0
        
        
