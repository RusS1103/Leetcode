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
    bool hasCycle(ListNode *head) {
    ListNode* first = head;
    ListNode* second = head;
    while (first != NULL && first->next != NULL) {
        second = second->next;
        first = first->next->next;
        if (first == second) {
            return true;    
        }
    }
    return false;
    }
};
