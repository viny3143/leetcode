class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        ListNode* second = head;
        ListNode* kth = nullptr;
        for (int i = 1; i < k; i++) {
            first = first->next;
        }
        kth = first;
        first = first->next;
        while (first != nullptr) {
            first = first->next;
            second = second->next;
        }
        swap(kth->val, second->val);
        return head;
    }
};
