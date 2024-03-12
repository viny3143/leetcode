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
    ListNode* removeZeroSumSublists(ListNode* head) {
        unordered_map<int, ListNode*> prefixSum;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        int sum = 0;
        for (ListNode* prefix = dummy; prefix != nullptr; prefix = prefix->next) {
            sum += prefix->val;
            prefixSum[sum] = prefix;
        }

        sum = 0;
        for (ListNode* prefix = dummy; prefix != nullptr; prefix = prefix->next) {
            sum += prefix->val;
            prefix->next = prefixSum[sum]->next;
        }

        return dummy->next;
    }
};

