class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = "aeiouAEIOU"
        chars = list(s)
        i, j = 0, len(s) - 1

        while i < j:
            if chars[i] not in vowels:
                i += 1
                continue
            if chars[j] not in vowels:
                j -= 1
                continue
           
            chars[i], chars[j] = chars[j], chars[i]
            i += 1
            j -= 1

        return ''.join(chars)
