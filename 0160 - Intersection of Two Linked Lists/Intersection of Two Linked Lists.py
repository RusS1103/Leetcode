# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        first, second = headA, headB
        len_first, len_second = 0, 0
        while first is not None:
            first = first.next;
            len_first = len_first + 1
            
        while second is not None:
            second = second.next;
            len_second = len_second + 1
            
        first, second = headA, headB
        
        if len_second > len_first:
            dif = len_second - len_first
            for i in range(dif):
                second = second.next
        else:
            dif = len_first - len_second
            for i in range(dif):
                first = first.next
            
        while first != second:
            first = first.next
            second = second.next
        
        return first

