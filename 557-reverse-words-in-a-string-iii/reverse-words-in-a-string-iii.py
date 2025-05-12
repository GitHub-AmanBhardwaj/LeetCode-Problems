class Solution:
    def reverseWords(self, s: str) -> str:
        ans=''
        l=list(s.split(' '))
        for w in l:
            ans+=w[::-1]
            ans+=' '
        return ans.rstrip()
        