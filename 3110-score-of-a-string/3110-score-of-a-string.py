class Solution(object):
    def scoreOfString(self, s):
        """
        :type s: str
        :rtype: int
        """
        left, size, score = 0, len(s), 0

        for right in range(1, size):
            score += ord(s[left]) - ord(s[right]) if ord(s[left]) > ord(s[right]) else ord(s[right]) - ord(s[left])
            left += 1

        return score