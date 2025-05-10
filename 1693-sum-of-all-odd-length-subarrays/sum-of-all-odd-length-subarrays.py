class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        ans=sum(arr)
        for i in range(3,len(arr)+1,2):
            for j in range(len(arr)-i+1):
                for k in range(j,j+i):
                    ans+=arr[k]
        return ans

        