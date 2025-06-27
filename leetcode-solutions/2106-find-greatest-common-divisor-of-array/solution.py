class Solution(object):
    def findGCD(self, nums):
        n=len(nums)
        if 2<=n<=1000 and 1<=max(nums)<=1000:
            nums=sorted(nums)
            f=nums[0]
            l=nums[n-1]
            for i in range(1,f+1):
                if f%i==0 and l%i==0:
                    gcd=i
            return gcd
        return 0
                
            
        
        
