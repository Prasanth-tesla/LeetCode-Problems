class Solution(object):
    def addStrings(self, num1, num2):
        if not (1<=len(num1)<=10**4 and 1<=len(num2)<=10**4):
            return 0
        add=num1+num2
        ans=int(add[:len(num1)])+int(add[len(num1):])
        return str(ans)
            
        
