class Solution(object):
    def isGoodArray(self, nums):
        if not (1<=len(nums)<=10**5 and max(nums)<=10**9):
            return 0
        def gcd(a,b):
            while b:
                a,b=b,a%b
            return a 
        g=nums[0]
        for i in nums[1:]:
            g=gcd(g,i)
        return g==1
            
