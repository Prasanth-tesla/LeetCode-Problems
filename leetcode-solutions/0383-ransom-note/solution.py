class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        count = [0] * 26
        for c in magazine:
            count[ord(c) - ord('a')] += 1
        for c in ransomNote:
            if count[ord(c) - ord('a')] == 0:
                return False
            count[ord(c) - ord('a')] -= 1
        return True    


