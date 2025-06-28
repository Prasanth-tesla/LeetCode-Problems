class Solution(object):
    def getLucky(self, s, k):
        if not(1<=len(s)<=100 and 1<=k<=10):
            return 0
        ans=''
        for i in s:
            ans+=str(ord(i)-96)
        for j in range(k):
            ans=sum(int(d) for d in str(ans))
        return ans
        
            
        
