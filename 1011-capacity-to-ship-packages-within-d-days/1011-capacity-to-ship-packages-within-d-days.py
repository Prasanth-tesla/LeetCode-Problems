class Solution(object):
    def check(self, weights, capacity, days):
        currDays, load = 1, 0
        for weight in weights:
            if weight > capacity: 
                return False

            if load + weight <= capacity:
                load += weight
            
            else:
                currDays += 1
                load = weight

        return currDays <= days

    def shipWithinDays(self, weights, days):
        """
        :type weights: List[int]
        :type days: int
        :rtype: int
        """
        sum = 0
        for weight in weights:
            sum += weight
        
        low, high, ans = 0, sum, -1

        while low <= high:
            mid = low + (high - low) // 2
            res = self.check(weights, mid, days)
            if(res):
                ans = mid
                high = mid - 1
            else:
                low = mid + 1
        
        return ans