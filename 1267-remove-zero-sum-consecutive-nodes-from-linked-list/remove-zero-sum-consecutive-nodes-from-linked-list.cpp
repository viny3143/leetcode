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
        if (!head)
            return nullptr;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prefix = dummy;
        unordered_map<int, ListNode*> prefixSum;

        int sum = 0;
        while (prefix) {
            sum += prefix->val;
            if (prefixSum.find(sum) != prefixSum.end()) {
                ListNode* start = prefixSum[sum]->next;
                int tempSum = sum + start->val;
                while (tempSum != sum) {
                    prefixSum.erase(tempSum);
                    start = start->next;
                    tempSum += start->val;
                }
                prefixSum[sum]->next = prefix->next;
            } else {
                prefixSum[sum] = prefix;
            }
            prefix = prefix->next;
        }

        return dummy->next;
    }
};
