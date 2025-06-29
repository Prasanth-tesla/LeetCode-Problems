class Solution(object):
    def countEven(self, num):
        if not 1<=num<=1000:
            return 0
        count=0
        for i in range(2,num+1):
            a=sum(int(j) for j in str(i))
            if a%2==0:
                count+=1
        return count
        
