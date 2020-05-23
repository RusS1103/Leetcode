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
    ListNode* middleNode(ListNode* head) {
        ListNode* first = head;
        ListNode* second = head;
        while (second != NULL) {
            second = second->next;
            if (second == NULL) {
                return first;
            }
            first = first->next;
            second = second->next;
        }
        return first;
    }
};
