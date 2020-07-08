/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* current = temp;
        while (current->next != NULL && current->next->next != NULL) {
            ListNode* first = current->next;
            ListNode* second = current->next->next;
            first->next = second->next;
            current->next = second;
            current->next->next = first;
            current = current->next->next;
        }
        return temp->next;
    }
};
