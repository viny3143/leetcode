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
    int pairSum(ListNode* head)
    {
        ListNode* temp = head;
        stack<int>st;
        while(temp != nullptr)
        {
            st.push(temp->val);
            temp = temp->next;
        }
        int max_sum = 0;
        int size = st.size();
        int i = 0;
        while(i < size)
        {
            if(max_sum < st.top() + head->val)max_sum = st.top() + head->val;
            st.pop();
            head = head->next;
            i++;
        }
        return max_sum;
    }
};