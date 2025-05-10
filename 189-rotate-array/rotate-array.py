class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n=len(nums)
        k=k%n
        print(nums[n-k:])
        num=nums[n-k:]+nums[:n-k]
        for i in range(n):
            nums[i]=num[i]
        