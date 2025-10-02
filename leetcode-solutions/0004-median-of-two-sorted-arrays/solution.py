class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        
        nums1 += nums2
        nums1 = sorted(nums1)
        l = len(nums1) // 2
        if len(nums1) % 2 != 0:
            return nums1[l]
        return (nums1[l] + nums1[l - 1]) / 2.0
        
