# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        fake = last = ListNode(0)
        while l1 and l2:
            if l1.val > l2.val:
                last.next = l2
                last = l2
                l2 = l2.next
            else:
                last.next = l1
                last = l1
                l1 = l1.next
        
        while l1:
            last.next = l1
            last = l1
            l1 = l1.next
        
        while l2:
            last.next = l2
            last = l2
            l2 = l2.next
            
        return fake.next
