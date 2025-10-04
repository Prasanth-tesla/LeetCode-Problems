class Solution(object):
    def finalString(self, s):
        """
        :type s: str
        :rtype: str
        """
        res = ""
        for ch in s:
            if ch == 'i':
                res = res[::-1]
            else:
                res += ch
        return res
