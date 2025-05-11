class Solution:
    def nextGreaterElements(self, nums: List[int]) -> List[int]:
        l=[]
        for i in range(len(nums)):
            c=0
            for j in range(len(nums)):
                if nums[(i+j)%len(nums)]>nums[i]:
                    c=1
                    break
            if c:
                l.append(nums[(i+j)%len(nums)])
            else:
                l.append(-1)
        return l