class Solution(object):
    def numWaterBottles(self, numBottles, numExchange):
        """
        :type numBottles: int
        :type numExchange: int
        :rtype: int
        """
        drinked, empty, full = 0, 0, numBottles
        while full > 0:
            drinked += full
            empty += full
            full = empty // numExchange
            empty = empty % numExchange
        return drinked
