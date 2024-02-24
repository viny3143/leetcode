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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        int carry = 0;
        int sum = 0;
        
        ListNode *nxt = NULL,*rh=NULL;
        while(l1 != NULL and l2 != NULL)
        {
            sum = l1->val + l2->val + carry;
            ListNode  *res = new ListNode(sum%10);
            if(nxt == NULL)
            {
                nxt = res;
                rh = res;
            }
            else
            {
                nxt->next = res;
                nxt = nxt->next;
            }
            if(sum >= 10)carry = 1;
            else carry = 0;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1 != NULL)
        {
             while(l1 != NULL)
            {
                sum = l1->val +  carry;
                ListNode  *res = new ListNode(sum%10);
                if(nxt == NULL)
                {
                    nxt = res;
                    rh = res;
                }
                else
                {
                    nxt->next = res;
                    nxt = nxt->next;
                }
                if(sum >= 10)carry = 1;
                else carry = 0;
                l1 = l1->next;
            }
        }
        else
        {
             while(l2 != NULL)
            {
                sum = l2->val + carry;
                ListNode  *res = new ListNode(sum%10);
                if(nxt == NULL)
                {
                    nxt = res;
                    rh = res;
                }
                else
                {
                    nxt->next = res;
                    nxt = nxt->next;
                }
                if(sum >= 10)carry = 1;
                else carry = 0;
                l2 = l2->next;
            }
        }
        if(carry > 0)
        {
            ListNode  *res = new ListNode(carry);
            nxt->next = res;
        }
        return rh;

    }
};