# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        l=[]
        t=head
        while t:
            if t in l:
                return t
            else:
                l.append(t)
            t=t.next
        return None