class Solution(object):
    def divideString(self, s, k, fill):
        if not (1<=len(s)<=100 and s.isalnum() and 1<=k<=100):
            return 0
        li=[s[i:i+k] for i in range(0,len(s),k)]
        if len(li[-1])<k:
            li[-1]=li[-1].ljust(k,fill)
        return li
        
        
