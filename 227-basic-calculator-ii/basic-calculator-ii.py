import math
class Solution:
    def calculate(self, s: str) -> int:
        return math.floor(eval(s.replace('/','//')))