class Solution(object):
    def searchInsert(self, nums, target):
        low,high=0,len(nums)-1
        if 1<=len(nums)<=10**4 and -(10**4)<=max(nums)<= 10**4 and -(10**4)<=target<= 10**4:
            while low<=high:
                mid=(low+high)//2
                if nums[mid]==target:
                    return mid
                elif nums[mid]<target:
                    low=mid+1
                else:
                    high=mid-1
            return low
        
