class Solution(object):
    def isPerfectSquare(self, num):
        """
        :type num: int
        :rtype: bool
        """
        sum = 0
        odd = 1
        while sum < num:
            sum += odd
            odd += 2
        return sum == num

