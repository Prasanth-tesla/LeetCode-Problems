class Solution(object):
    def isPalindrome(self, s):
        cleaned = ''.join(char for char  in s if char.isalnum())
        s=cleaned.lower()
        return s==s[::-1]
