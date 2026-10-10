class Solution(object):
    def findClosestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        closest, size = nums[0], len(nums)

        for i in range(size):
            if abs(closest) > abs(nums[i]):
                closest = nums[i]
            elif closest == -nums[i]:
                closest = nums[i] if closest < 0 else closest

        return closest