class Solution:
    def twoSum(self, num: List[int], target: int) -> List[int]:
        # for i in range(len(numbers)):
        #     for j in range(i+1,len(numbers)):
        #         if numbers[i]+numbers[j]==target:
        #             return [i+1,j+1]
        i=0
        j=len(num)-1
        while(True):
            if num[i]+num[j]==target:
                return [i+1,j+1]
            elif num[i]+num[j]<target:
                i+=1
            else:
                j-=1
        return []

        