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
        ListNode* temp = head;
        int k = 0;
        while (temp != NULL) {
            temp = temp->next;
            ++k;
        }
        k /= 2;
        for (int i = 0; i < k; ++i) {
            head = head->next;
        }
        return head;
    }
};
