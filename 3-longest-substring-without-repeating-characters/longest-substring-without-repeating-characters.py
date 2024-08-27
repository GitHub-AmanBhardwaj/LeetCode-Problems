class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st=""
        co=0
        m=0
        u=0
        while u<len(s):
            if s[u] in st:
                idx = st.index(s[u])
                st = st[idx + 1:] 
                co=len(st)
            co+=1
            st+=s[u]
            if co>m:
                m=co
            u+=1
        return m
                    