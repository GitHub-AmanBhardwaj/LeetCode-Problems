class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        m=-1
        a=-1
        for i in nums:
            if -i in nums:
                a=abs(i)
                if m<a:
                    m=a
        return m