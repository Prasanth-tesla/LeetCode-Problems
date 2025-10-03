class Solution(object):
    def transpose(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """
        myDict = {}
        n , i = len(matrix[0]) , 0
        for j in range (n):
            for row in matrix:
                if i not in myDict:
                    myDict[i] = []
                    myDict[i].append(row[i])
                else:
                    myDict[i].append(row[i])
            i += 1
        return myDict.values()
