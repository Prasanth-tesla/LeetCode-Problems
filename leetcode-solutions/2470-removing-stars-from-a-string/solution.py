class Solution(object):
    def removeStars(self, s):
        if not 1<=len(s)<=10**5:
            return 0
        st=[]
        for ch in s:
            if ch=='*':
                if st:
                    st.pop()
            else:
                st.append(ch)
        return ''.join(st)
            
        
