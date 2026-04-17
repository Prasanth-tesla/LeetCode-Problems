class Solution(object):
    def numEquivDominoPairs(self, dominoes):
        """
        :type dominoes: List[List[int]]
        :rtype: int
        """
        count = [0] * 100
        res = 0
        for a, b in dominoes:
            x = min(a, b)
            y = max(a, b)
            key = x * 10 + y
            res += count[key]
            count[key] += 1
        return res
