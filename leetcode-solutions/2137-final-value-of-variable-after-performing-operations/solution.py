class Solution(object):
    def finalValueAfterOperations(self, operations):
        if not 1<=len(operations)<=100:
            return 0
        return sum(1 if '++' in i else -1 for i in operations)
        
