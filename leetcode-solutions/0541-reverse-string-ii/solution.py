class Solution(object):
    def reverseStr(self, s, k):
        if 1<=len(s)<=10**4 and 1<=k<=10**4 and s.isalnum():
            s=list(s)
            for i in range(0,len(s),2*k):
                s[i:i+k]=reversed(s[i:i+k])
            return ''.join(s)
        
