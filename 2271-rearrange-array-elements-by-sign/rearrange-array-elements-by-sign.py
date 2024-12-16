class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        a=[]
        b=[]
        for i in nums:
            if i<0:
                b+=[i]
            else:
                a+=[i]
        j=0
        k=0
        for i in range(len(nums)):
            if i%2==0:
                nums[i]=a[j]
                j+=1
            else:
                nums[i]=b[k]
                k+=1
        return nums
            