class Solution(object):
    def minimumOperations(self, nums):
        if not (1<=len(nums)<=100 and 0<=max(nums)<=100):
            return 0
        return len({x for x in nums if x})
            
        
