class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        sLen, pLen = len(s), len(p)
        res = []

        if sLen < pLen:
            return res
        
        sFreq, pFreq = [0] * 26, [0] * 26

        for i in range(pLen):
            sFreq[ord(s[i]) - ord('a')] += 1
            pFreq[ord(p[i]) - ord('a')] += 1

        if sFreq == pFreq:
            res.append(0)

        for i in range(pLen, sLen):
            sFreq[ord(s[i]) - ord('a')] += 1
            sFreq[ord(s[i - pLen]) - ord('a')] -= 1

            if sFreq == pFreq:
                res.append(i - pLen + 1)

        return res
