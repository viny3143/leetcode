class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
         int cnt = 1;
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            cnt = 1;
            for (int j = i; j < nums.size(); j++) {
                cnt *= nums[j]; // Multiply cnt with nums[j], not nums[i]
                if (cnt < k) result++;
                else break; // Break the inner loop if cnt >= k since further multiplication won't change this
            }
        }
        return result;
    }
};