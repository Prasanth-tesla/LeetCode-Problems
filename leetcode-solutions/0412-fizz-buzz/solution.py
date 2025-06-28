class Solution(object):
    def fizzBuzz(self, n):
        if 1<=n<=10**4:
            li=[]
            for i in range(1,n+1):
                if i%3==0 and i%5==0:
                    li.append("FizzBuzz")
                elif i%5==0:
                    li.append("Buzz")
                elif i%3==0:
                    li.append("Fizz")
                else:
                    li.append(str(i))
            return li
        return 0   
        
