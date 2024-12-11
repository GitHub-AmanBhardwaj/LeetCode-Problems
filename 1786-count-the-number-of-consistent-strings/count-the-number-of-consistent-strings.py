class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        c=True
        ans=0
        for i in words:
            for j in i:
                if j not in allowed:
                    c=False
                    break
            if c:
                ans+=1
            c=True
        return ans

        