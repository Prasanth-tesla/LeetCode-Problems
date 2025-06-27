class Solution(object):
    def isThree(self, n):
        if 1<=n<=10**4:
            div=0
            for i in range(1,n+1):
                if n%i==0:
                   div+=1
            return div==3
        return 0
        
