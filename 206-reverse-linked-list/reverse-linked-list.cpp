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
class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        int c = 1;
        ListNode* RL;
        while(head!=NULL)
        {
            int temp = head->val;
            head = head->next;
            ListNode* res = new ListNode(temp);
            if(c==1)
            {
                    RL = res;
                    c++;
            }
            else
            {
                res->next = RL;
                RL = res;
            }
        }
        return RL;   
    }
};