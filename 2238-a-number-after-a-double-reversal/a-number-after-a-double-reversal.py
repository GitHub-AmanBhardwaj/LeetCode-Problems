class Solution:
    def isSameAfterReversals(self, num: int) -> bool:
        a=int(str(num)[::-1])
        a=int(str(a)[::-1])
        if a==num:
            return True
        return False