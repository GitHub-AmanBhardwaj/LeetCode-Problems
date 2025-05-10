class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        if len(nums)<2:
            return 0
        nums.sort()
        print(nums)
        max=0
        for i in range(len(nums)-1):
            if abs(nums[i]-nums[i+1])>max:
                max=abs(nums[i]-nums[i+1])
        return max