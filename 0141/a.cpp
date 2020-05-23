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
    set<ListNode*> hash;
    while (head != NULL) {
        if (hash.count(head) != 0) {
            return true;
        }
        hash.insert(head);
        head = head->next;
    }
    return false;
    }
};
