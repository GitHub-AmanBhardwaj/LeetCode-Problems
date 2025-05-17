# Definition for singly-linked list.
# class ListNode:
#     def _init_(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def modifiedList(self, nums, head):
        t=head
        new=ListNode(0)
        Nt=new
        nums=set(nums)
        while True:
            if t.val in nums:
                if t.next==None:
                      break
                t=t.next
                continue
            Nt.next=ListNode(0)
            Nt=Nt.next
            Nt.val=t.val
            if t.next==None:
                break
            t=t.next
        return new.next
        