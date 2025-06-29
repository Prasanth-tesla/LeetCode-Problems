class Solution(object):
    def countOperations(self, num1, num2):
        if not (0<=num1<=10**5 and 0<=num2<=10**5):
            return 0
        count=0
        while num1 and num2:
            if num1>=num2:
                count+=num1//num2
                num1%=num2
            else:
                count+=num2//num1
                num2%=num1
        return count
            
        
