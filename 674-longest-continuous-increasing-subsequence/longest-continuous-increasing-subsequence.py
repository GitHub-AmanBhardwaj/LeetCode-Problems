class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        i=0
        ma=1
        while i<len(nums):
            ml=1
            j=i+1
            while j<len(nums) and nums[j]>nums[j-1]:
                ml+=1
                j+=1
            if ml>ma:
                ma=ml
            if ml==1:
                i+=1
            else:
                i=j
        return ma