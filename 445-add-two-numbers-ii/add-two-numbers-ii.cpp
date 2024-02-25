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
    ListNode* addTwoNumbers(ListNode* L1, ListNode* L2) 
    {
        ListNode *pes = NULL;
        ListNode *cur = L1;
        ListNode *nxt_0;
        while(cur != NULL)
        {
            nxt_0 = cur->next;
            cur->next = pes;
            pes = cur;
            cur = nxt_0;
        }
        
        ListNode *pes1 = NULL;
        ListNode *cur1 = L2;
        ListNode *nxt_1;
        while(cur1 != NULL)
        {
            nxt_1 = cur1->next;
            cur1->next = pes1;
            pes1 = cur1;
            cur1 = nxt_1;
        }
        ListNode *l1 = pes;
        ListNode *l2 = pes1;
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
        //rh
        ListNode *head = NULL;
        ListNode *current = rh;
        ListNode  *sec;
        while(current != NULL)
        {
            sec = current->next;
            current->next = head;
            head = current;
            current = sec;
        }
        return head;

    }
};