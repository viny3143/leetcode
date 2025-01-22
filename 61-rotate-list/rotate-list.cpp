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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>vec;
        if (!head) return nullptr;
        while(head != nullptr) {
            vec.push_back(head->val);
            head = head->next;
        }
        int check = k % vec.size();
        ListNode *result = new ListNode(0);
        ListNode *temp = result;
        for(int i = vec.size()-check; i < vec.size(); i++) {
            temp->next = new ListNode(vec[i]);
            temp = temp->next;
        }
        for(int i=0; i<vec.size()-check; i++) {
            temp->next = new ListNode(vec[i]);
            temp = temp->next;
        }
        return result->next;
    }
};