class Solution:
    def minNumberOperations(self, target: List[int]) -> int:
        # c=0
        # while True:
        #     m=min(target)
        #     c+=m
        #     ch=1
        #     for i in range(len(target)): 
        #         if target[i]!=0:
        #             target[i]=target[i]-m
        #             ch=0
        #     if ch:
        #         break
        # return c
        c=target[0]
        for i in range(1,len(target)):
            if target[i]>target[i-1]:
                c+=target[i]-target[i-1]
        return c

            
        