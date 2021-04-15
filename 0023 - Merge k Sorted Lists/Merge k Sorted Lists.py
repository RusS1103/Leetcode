# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        interval = 1
        amount = len(lists)
        
        while interval < amount:
            for i in range(0, amount - interval, interval * 2):
                lists[i] = self.merge2Lists(lists[i], lists[i + interval])
            interval *= 2
            
        return lists[0] if amount > 0 else None
            
            
    def merge2Lists(self, first: ListNode, second: ListNode) -> ListNode:
        first_head = first
        second_head = second
        
        newHead = ListNode()
        head = newHead
        
        while first_head is not None and second_head is not None:
            if first_head.val < second_head.val:
                newHead.next = first_head
                first_head = first_head.next
            else:
                newHead.next = second_head
                second_head = second_head.next
            newHead = newHead.next
            
        if first_head is None:
            newHead.next = second_head
        else:
            newHead.next = first_head

