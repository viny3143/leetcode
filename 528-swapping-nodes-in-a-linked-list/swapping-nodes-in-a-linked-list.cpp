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
        vector<int>vec;
        while(head != nullptr) {
            vec.push_back(head->val);
            head = head->next;
        }
         swap(vec[k - 1], vec[vec.size() - k]);
        ListNode* result = new ListNode(vec[0]);
        ListNode* temp = result;
        for(int i = 1; i< vec.size(); i++) {
            temp->next = new ListNode(vec[i]);
            temp = temp->next;
        }
        return result;
    }
};