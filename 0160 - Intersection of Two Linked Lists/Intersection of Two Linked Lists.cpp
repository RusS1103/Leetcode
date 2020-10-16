/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* first = headA;
        ListNode* second = headB;
        int len_first = 0, len_second = 0;
        while (first != NULL) {
            ++len_first;
            first = first->next;
        }
        while (second != NULL) {
            ++len_second;
            second = second->next;
        }
        first = headA;
        second = headB;
        if (len_first > len_second) {
            int dif = len_first - len_second;
            for (int i = 0; i < dif; ++i) {
                first = first->next;
            }
        } else {
            int dif = len_second - len_first;
            for (int i = 0; i < dif; ++i) {
                second = second->next;
            }
        }
        while (first != second) {
            first = first->next;
            second = second->next;
        }
        return first;
    }
};
