# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        #Approach2
        temp = head
        if head is None:
            return head
        if head.next is None:
            return None
        c = 0
        while temp is not None:
            c += 1
            temp = temp.next
        temp = head
        for i in range(c//2-1):
            temp = temp.next
        temp.next = temp.next.next
        return head
        #Approach 1
#         slow, fast = head, head
#         if head is None:
#             return head
#         if head.next is None:
#             return None
#         c = 0
#         while fast and fast.next:
#             c += 1
#             if c == 1:
#                 prev = head
#                 slow = slow.next
#                 fast = fast.next.next
#             else:
#                 prev = prev.next
#                 slow = slow.next
#                 fast = fast.next.next
#         prev.next = slow.next
        
#         return head

        