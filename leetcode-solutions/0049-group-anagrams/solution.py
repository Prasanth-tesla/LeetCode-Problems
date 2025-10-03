class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        myDict = {}
        for word in strs:
            key = tuple(sorted(word))
            if key not in myDict:
                myDict[key] = []
                myDict[key].append(word)
            else:
                myDict[key].append(word)
        return myDict.values()
