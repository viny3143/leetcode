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
    ListNode* sortList(ListNode* head)
    {
        vector<int>vec;
        ListNode* temp = head;
        while(temp != nullptr)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }
        sort(vec.begin(),vec.end());
        if (vec.empty()) return nullptr;
        ListNode* res = new ListNode(vec[0]);
        ListNode* tempp = res;
        for(int i = 1;i<vec.size();i++)
        {
            tempp->next = new ListNode(vec[i]);
            tempp = tempp->next;
        }
        return res;
    }
};