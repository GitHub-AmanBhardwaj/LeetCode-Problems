class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        for a in range(0,int(c**0.5)+1):
            bs=c-a**2
            b=int(bs**0.5)
            if b*b==bs:
                return True
        return False