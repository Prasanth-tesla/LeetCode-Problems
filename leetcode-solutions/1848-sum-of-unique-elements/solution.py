class Solution(object):
    def sumOfUnique(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        freq, sum = defaultdict(int), 0
        for i in nums:
            freq[i] += 1
        for j in freq:
            if freq[j] == 1:
                sum += j
        return sum
