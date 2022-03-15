# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if head is None :
            return None  
        if head.next is None:
            return head
        start, end = head, head
        temp = head
        c = 0
        while temp:
            c += 1
            temp = temp.next
        for i in range(k-1):
            start = start.next
        for i in range(c -k):
            end = end.next
        start.val, end.val = end.val, start.val
        return head
        