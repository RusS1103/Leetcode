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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        swapTwoNodes(findFirst(head, k), findSecond(head, k));
        return head;
    }
    
    ListNode* findFirst(ListNode* head, int k) {
        ListNode* temp = head;
        for (int i = 0; i < k - 1; ++i) {
            temp = temp->next;
        }
        return temp;
    }
    
    ListNode* findSecond(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        for (int i = 0; i < k; ++i) {
            fast = fast->next;
        }
        while (fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    
    void swapTwoNodes(ListNode* first, ListNode* second) {
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
    }
};
