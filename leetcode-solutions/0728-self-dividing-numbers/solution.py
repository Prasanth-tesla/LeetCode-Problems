class Solution(object):
    def selfDividingNumbers(self, left, right):
        if 1<=left<=right<=10**4:
            li=[]
            for i in range(left,right+1):
                k=i
                while k:
                    d=k%10
                    if d==0 or i%d:
                        break
                    k//=10
                else:
                    li.append(i)
            return li
        return []
        
