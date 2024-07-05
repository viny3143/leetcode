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
    vector<int> nodesBetweenCriticalPoints(ListNode* head)
    {
       if (head->next == nullptr || head->next->next == nullptr || head == nullptr)return {-1,-1};
       int check = head->val;
       head = head->next;
       vector<int>vec;
       while(head->next != nullptr)
       {
            if((check < head->val and head->val > head->next->val) or (check > head->val and head->val < head->next->val))vec.push_back(-1);
            else vec.push_back(head->val);
            check = head->val;
            head = head->next;
       }
       int i = 0;
       int j = vec.size()-1;
       int maxi,mini = INT_MAX;
       while(i < j)
       {
            if(vec[i] == -1 and vec[j] == -1)
            {
                maxi = j-i;
                break;
            }
            if(vec[i] != -1)i++;
            if(vec[j] != -1)j--;
       }
       int mini_check = 0;
       int count = 0;
       for(int i = 0; i < vec.size(); i++)
       {
        if(vec[i] == -1)count++;
        if(vec[i] == -1 && mini_check == 0)mini_check = i+1;
        else
        {
            if(vec[i] == -1)
            {
                if(i+1 - mini_check < mini)
                {
                    mini = i+1 - mini_check;
                    mini_check = i+1;
                }
                else mini_check = i+1;
            }
        }
       }
       if(count == 0 or count == 1)return {-1,-1};
       return {mini,maxi};
    }
};