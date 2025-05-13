# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
sumv=0
s=''
def fun(root):
    global sumv,s
    if root:
        s+=str(root.val)
        if not root.left and not root.right:
            sumv+=int(s)
        fun(root.left)
        fun(root.right)
        s = s[:-1]
class Solution:      
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        global sumv, s
        sumv= 0
        s = '' 
        fun(root)
        return sumv
        