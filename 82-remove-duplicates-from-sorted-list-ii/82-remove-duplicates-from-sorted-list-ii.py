# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp = ListNode(-1, head)
        prev = temp
        while prev.next and prev.next.next:
            subHead = prev.next
            if subHead.val != subHead.next.val:
                prev.next = subHead
                prev = prev.next
                
            while subHead.next and subHead.val == subHead.next.val:
                subHead = subHead.next
            prev.next = subHead.next
        # return head
        return temp.next