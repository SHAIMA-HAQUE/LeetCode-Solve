# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        delnode = None
        temp = head
        if temp!= None:
            while temp.next is not None:
                delnode = temp.next
                temp.next = temp.next.next
                delnode.next = head
                head = delnode
        return head