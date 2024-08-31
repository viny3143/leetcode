class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        stack<int> st;
        ListNode* result = new ListNode(0);
        ListNode* temp = result;
        while (head != nullptr) {
            st.push(head->val);
            head = head->next;
            if (head != nullptr) {  
                st.push(head->val);
                head = head->next;
                result->next = new ListNode(st.top());
                st.pop();
                result = result->next;
                result->next = new ListNode(st.top());
                st.pop();
                result = result->next;
            } else {
                result->next = new ListNode(st.top());
                st.pop();
                result = result->next;
            }
        }
        return temp->next;
    }
};
