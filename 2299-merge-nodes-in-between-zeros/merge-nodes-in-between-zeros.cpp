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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head;
        temp=temp->next;
        head=head->next;
        while(head)
        {
            if(head->next->val == 0)
            {
                head->next = head->next->next;
                head = head->next;
            }
            else 
            {
                head->val += head->next->val;
                head->next = head->next->next;
            }
        }
        return temp;  
    }
};