class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        words = s.split()
        if len(pattern) != len(words):
            return False
        charToWord = {}
        wordToChar = {}
        for c, w in zip(pattern, words):
            if c in charToWord:
                if charToWord[c] != w:
                    return False
            else:
                charToWord[c] = w
            if w in wordToChar:
                if wordToChar[w] != c:
                    return False
            else:
                wordToChar[w] = c

        return True
