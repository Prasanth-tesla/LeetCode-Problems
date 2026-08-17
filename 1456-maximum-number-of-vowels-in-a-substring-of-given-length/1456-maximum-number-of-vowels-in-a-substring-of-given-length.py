class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        size, count = len(s), 0

        for i in range(k):
            if self.isVowel(s[i]): 
                count += 1
        
        maxCount = count

        for i in range(k, size):
            if self.isVowel(s[i]): 
                count += 1
            if self.isVowel(s[i - k]):
                count -= 1

            maxCount = max(maxCount, count)

        return maxCount

    def isVowel(self, c):
        return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u'