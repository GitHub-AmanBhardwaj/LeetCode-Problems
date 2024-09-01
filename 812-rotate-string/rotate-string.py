class Solution:
    def rotateString(self, s: str, g: str) -> bool:
        if len(s)!=len(g):
            return 0
        s+=s
        if g in s:
            return 1
        return 0
        