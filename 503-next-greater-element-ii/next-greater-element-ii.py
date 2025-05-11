class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        l=[]
        n=len(nums)
        for i in range(n):
            c=0
            for j in range(n):
                if nums[(i+j)%n]>nums[i]:
                    c=1
                    break
            if c:
                l.append(nums[(i+j)%n])
            else:
                l.append(-1)
        return l