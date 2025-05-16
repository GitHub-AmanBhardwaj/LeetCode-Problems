# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        t=head
        arr=[]
        while t:
            arr.append(t.val)
            t=t.next

        if len(arr)<2:
            return head

        head=None
        t=None
        for i in arr:
            if arr.count(i)==1:
                node=ListNode(i)
                if head is None:
                    head=node
                    t=node
                else:
                    t.next=node
                    t=t.next

        return head
