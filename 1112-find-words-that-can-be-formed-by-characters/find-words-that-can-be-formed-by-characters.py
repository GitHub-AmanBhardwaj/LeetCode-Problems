class Solution:
    def countCharacters(self, words: List[str], chars: str) -> int:
        count=0
        for i in words:
            y=1
            s=list(c for c in chars)
            for c in i:
                if c in s:
                    s.remove(c)
                else:
                    y=0
                    break
            if y:
                count+=len(i)
        return count     

        