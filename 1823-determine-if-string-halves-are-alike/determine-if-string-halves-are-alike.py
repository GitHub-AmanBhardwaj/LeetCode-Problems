class Solution:
    def isvowel(self, c: chr)->bool:
        if c in ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'):
            return True
        return False

    def halvesAreAlike(self, s: str) -> bool:
        c1=0
        c2=0
        for i in range(0,len(s)//2):
            if(self.isvowel(s[i])):
                c1+=1

        for i in range(len(s)//2,len(s)):
            if(self.isvowel(s[i])):
                c2+=1
        
        if c1==c2:
            return True
        
        return False

    


        