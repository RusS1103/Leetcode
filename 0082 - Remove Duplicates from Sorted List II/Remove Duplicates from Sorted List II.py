# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        first = ListNode(0, head)
        pred = first
        
        while head is not None:
            if head.next is not None and head.val == head.next.val:
                while head.next is not None and head.val == head.next.val:
                    head = head.next
                
                pred.next = head.next
            else:
                pred = pred.next
                
            head = head.next
        
        return first.next

