class Solution(object):
    def missingNumber(self, nums):
        l=len(nums)
        if 0<=max(nums)<=10**4 and len(set(nums))==l and 0 in nums:
            nums=sorted(nums)
            for i in range(nums[0],nums[l-1]+1):
                if i not in nums:
                    return i
            return i+1
        return 0
            
        
        
