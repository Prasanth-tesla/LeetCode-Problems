class Solution(object):
    def kthFactor(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        li = []
        for i in range(1 , n+1):
            if n % i == 0:
                li.append(i)
                
        if len(li) >= k:
            return li[k - 1]
        return -1
