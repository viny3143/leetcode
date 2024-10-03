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
    int size = 0;
    ListNode * check = new ListNode(0);
    Solution(ListNode* head) {
        check->next = head;
        ListNode *temp = head;
        while(temp != nullptr) {
            size++;
            temp = temp->next;
        }
    }
    
    int getRandom() {
        ListNode* itr = check->next;
        int result = itr->val;
        int count = 1;
        while (itr != nullptr) {
            if (std::rand() % count == 0)result = itr->val;
            itr = itr->next;
            count++;
        }
    return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */