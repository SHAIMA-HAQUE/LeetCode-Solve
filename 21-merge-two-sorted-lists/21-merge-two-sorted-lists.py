# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        curr_node = ListNode() 
        temp = curr_node
        while list1 and list2:
            if list1.val < list2.val:
                curr_node.next = ListNode(list1.val)
                curr_node = curr_node.next
                list1 = list1.next
            else:
                curr_node.next = ListNode(list2.val)
                curr_node = curr_node.next
                list2 = list2.next
        if list1:
            curr_node.next = list1
        if list2:
            curr_node.next = list2
        return temp.next
        