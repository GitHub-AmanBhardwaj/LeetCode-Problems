class Solution:
    def toHex(self, num: int) -> str:
        if num>=0:
            return str(hex(num))[2:]
        a=4294967295-abs(num)+1
        return str(hex(a))[2:]

        