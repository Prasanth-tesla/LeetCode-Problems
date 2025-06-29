class Solution(object):
    def calPoints(self, operations):
        if not 1<=len(operations)<=1000 and (-3*10**4<=int(max(operations))<=3*10**4):
            return 0
        res=[]
        for i in operations:
            if i=='C':
                res.pop()
            elif i=='D':
                res.append(res[-1]*2)
            elif i=='+':
                res.append(res[-1]+res[-2])
            else:
                res.append(int(i))
        return sum(res)
                
        
