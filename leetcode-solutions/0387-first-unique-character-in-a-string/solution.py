class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        myDict = {}
        for ch in s:
            if ch not in myDict:
                myDict[ch] = 1
            else:
                myDict[ch] += 1
        
        for i, ch in enumerate(s):
            if myDict[ch] == 1:
                return i
        return -1
