/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    
    const int ZERO = [](){
        ios_base::sync_with_stdio;
        cin.tie(NULL);
        return 0;
    }();
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        while (l1 != NULL || l2 != NULL) {
            int x = (l1 != NULL) ? l1->val : 0;
            int y = (l2 != NULL) ? l2->val : 0;
            int sum = carry + x + y;
            carry = sum / 10;
            head->next = new ListNode(sum % 10);
            head = head->next;
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        if (carry > 0) {
            head->next = new ListNode(carry);       
        }
        return temp->next;
    }
};
