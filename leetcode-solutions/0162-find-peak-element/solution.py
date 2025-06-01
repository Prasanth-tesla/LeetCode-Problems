class Solution(object):
    def findPeakElement(self, nums):
        a=max(nums) 
        for i in range(len(nums)):
            if nums[i]==a:
                return i
        
        
