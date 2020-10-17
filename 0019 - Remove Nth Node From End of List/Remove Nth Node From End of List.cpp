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
    size_t findSize(ListNode* head) {
        size_t k = 0;
        while (head != NULL) {
            ++k;
            head = head->next;
        }
        return k;
    }

ListNode* removeNthFromEnd(ListNode* head, int n) {
    size_t k = findSize(head);
    if (k == n) {
        head = head->next;
    } else {
            ListNode* first = head;
            for (size_t i = 0; i < k - n - 1; ++i) {
                first = first->next;
            }
            if (first->next->next == NULL) {
                first->next = NULL;
            } else {
                first->next = first->next->next;
            }
        }
        return head;
    }
};
