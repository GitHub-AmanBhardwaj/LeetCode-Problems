class Solution:
    def longestPalindrome(self, s: str) -> str:
        max=0
        p=s[0]
        for i in range(len(s)):
            for j in range(i+1,len(s)):
                if s[i:j+1]==s[i:j+1][::-1] and len(s[i:j+1])>max:
                    max=len(s[i:j+1])
                    p=s[i:j+1]
        return p