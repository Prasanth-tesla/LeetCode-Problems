class Solution(object):
    def applyOperations(self, nums):
        if not(2<=len(nums)<=2000 and 0<=max(nums)<=1000):
            return 0
        n=len(nums)
        for i in range(n-1):
            if nums[i]==nums[i+1]:
                nums[i]*=2
                nums[i+1]=0
        w=0
        for r in range(n):
            if nums[r]:
                nums[w]=nums[r]
                w+=1
        for j in range(w,n):
            nums[j]=0
        return nums
                
