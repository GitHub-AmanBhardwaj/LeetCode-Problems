class Solution:
    def maximumPossibleSize(self, nums: List[int]) -> int:
        stack=[]
        l=len(stack)
        for n in nums:
            if not stack:
                stack.append(n)
            elif stack[l-1]>n:
                pass
            else:
                stack.append(n)
        return len(stack) 
        