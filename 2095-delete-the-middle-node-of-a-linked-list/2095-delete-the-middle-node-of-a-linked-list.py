# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow, fast = head, head
        if head is None:
            return head
        if head.next is None:
            return None
        c = 0
        while fast and fast.next:
            c += 1
            if c == 1:
                prev = head
                slow = slow.next
                fast = fast.next.next
            else:
                prev = prev.next
                slow = slow.next
                fast = fast.next.next
        prev.next = slow.next
        
        return head