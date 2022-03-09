# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:

        while head != None and head.val == val:
            head = head.next
        if head != None:
            prev, curr = head, head.next
            while curr != None:
                if curr.val == val:
                    prev.next = prev.next.next
                else:
                    prev = prev.next
                curr = curr.next
        return head
                
                