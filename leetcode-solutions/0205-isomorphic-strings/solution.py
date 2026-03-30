class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        map1 = {}
        map2 = {}

        for i in range(len(s)):
            if map1.get(s[i], t[i]) != t[i] or map2.get(t[i], s[i]) != s[i]:
                return False
            map1[s[i]] = t[i]
            map2[t[i]] = s[i]

        return True
