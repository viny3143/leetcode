class Solution {
public:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;

        while (temp->next != nullptr) {
            int first_num = temp->val;
            int second_num = temp->next->val;
            int num = gcd(first_num, second_num);

            ListNode* newNode = new ListNode(num);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = newNode->next; 
        }

        return head;
    }
};
