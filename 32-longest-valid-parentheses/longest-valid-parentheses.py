class Solution:
    def longestValidParentheses(self, s: str) -> int:
        stack=[-1]
        maxi=0
        for i,p in enumerate(s):
            if p=='(':
                stack.append(i)
            else:
                stack.pop()
                if not stack:
                    stack.append(i)
                else:
                    maxi=max(maxi, i-stack[-1])

        return maxi