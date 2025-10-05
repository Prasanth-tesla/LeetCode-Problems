class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        pairs = {')': '(', ']': '[', '}': '{'}
        stack = []
        
        for ch in s:
            if ch in pairs: 
                top = stack.pop() if stack else '#'
                if top != pairs[ch]:
                    return False
            else:
                stack.append(ch)
        
        return not stack
                
