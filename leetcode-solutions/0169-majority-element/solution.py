class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        myDict = {}
        for ele in nums:
            if ele not in myDict:
                myDict[ele] = []
                myDict[ele].append(ele)
            else:
                myDict[ele].append(ele)

        max_key = None
        max_len = -1

        for k, v in myDict.items():
            l = len(v)
            if l > max_len:
                max_len = l
                max_key = k
        return max_key
