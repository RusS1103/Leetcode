/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode fake(-1);
        ListNode* last = &fake;
        while (l1 != NULL && l2 != NULL) {
            if (l2->val > l1->val) {
                last->next = l1;
                last = l1;
                l1 = l1->next;
            } else {
                last->next = l2;
                last = l2;
                l2 = l2->next;
            }
        }
        while (l1 != NULL) {
            last->next = l1;
            last = l1;
            l1 = l1->next;
        }
        while (l2 != NULL) {
            last->next = l2;
            last = l2;
            l2 = l2->next;
        }
        return fake.next;
    }
};
