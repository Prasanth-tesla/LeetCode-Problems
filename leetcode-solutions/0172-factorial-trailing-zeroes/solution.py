class Solution(object):
    def trailingZeroes(self, n):
        if not 0<=n<=10**4:
            return 0
        fact=1
        for i in range(1,n+1):
            fact*=i
        count=0
        for j in str(fact)[::-1]:
            if j=='0':
                count+=1
            else:
                return count
        
