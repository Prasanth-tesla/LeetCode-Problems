class Solution(object):
    def intersection(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        elist = []
        for num in nums1:
            if num in nums1 and num in nums2:
                elist.append(num)
        return list(set(elist))
