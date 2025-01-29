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
    void reorderList(ListNode* head) {

        if (!head || !head->next || !head->next->next) return;

        vector<int> vec;
        ListNode* temp = head;

        while (temp) {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        int i = 0, j = vec.size() - 1;
        temp = head;

        while (i < j) {
            temp->val = vec[i++];
            temp = temp->next;
            temp->val = vec[j--];
            temp = temp->next;
        }
        
        if (i == j) {
            temp->val = vec[i];
        }
    }
};