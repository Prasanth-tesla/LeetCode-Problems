class Solution(object):
    def distributeCandies(self, candies, num_people):
        """
        :type candies: int
        :type num_people: int
        :rtype: List[int]
        """
        candy, li, i = 1, [0] * num_people, 0
        while candies >= candy:
            li[i] += candy
            candies -= candy
            candy += 1
            i = (i + 1) % num_people
        li[i] += candies 
        return li
