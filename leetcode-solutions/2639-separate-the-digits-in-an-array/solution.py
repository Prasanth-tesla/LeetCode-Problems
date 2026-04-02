class Solution(object):
    def separateDigits(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        answer = []
        for num in nums:
            temp = []
            while num > 0:
                rem = num % 10
                num //= 10
                temp.append(rem)
            answer = answer + temp[::-1]
        return answer
