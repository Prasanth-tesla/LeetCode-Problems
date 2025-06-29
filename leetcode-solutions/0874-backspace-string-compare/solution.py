class Solution(object):
    def backspaceCompare(self, s, t):
        if not (1<=len(s)<=200 and 1<=len(s)<=200):
            return 0
        li1, li2 = [], []
        for i in s:
            if i == '#':
                if li1:
                    li1.pop()
            else:
                li1.append(i)

        for j in t:
            if j == '#':
                if li2:
                    li2.pop()
            else:
                li2.append(j)

        return li1 == li2
        
