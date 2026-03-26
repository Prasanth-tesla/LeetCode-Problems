class Solution(object):
    def titleToNumber(self, columnTitle):
        """
        :type columnTitle: str
        :rtype: int
        """
        res = 0
        for ch in columnTitle:
            res = res * 26 + (ord(ch) - ord('A') + 1)
        return res
