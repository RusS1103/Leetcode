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
    ListNode* reverseList(ListNode* head) {
    if (head == NULL) {
        return NULL;
    }
    if (head->next == NULL) {
        return head;
    }
    
    vector<int> temp_v;
    while(head != NULL) {
        temp_v.push_back(head->val);
        head = head->next;
    }
    reverse(temp_v.begin(), temp_v.end());
    for (auto now : temp_v) {
        cout << now << " ";
    }
    cout << endl;
    ListNode* first = new ListNode(0);
    ListNode* listik = new ListNode(temp_v[0]);
    first->next = listik;
    for (size_t i = 1; i < temp_v.size(); ++i) {
        ListNode* temp = new ListNode(temp_v[i]);
        listik->next = temp;
        listik = listik->next;
    }
    return first->next;
}
};
