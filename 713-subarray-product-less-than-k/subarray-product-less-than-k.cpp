class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        int result = 0;
        int product = 1;
        int left = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            product *= nums[right];
            while (left <= right && product >= k)
            {
                product /= nums[left]; 
                left++;
            }
            result += (right - left + 1);
        }
         return result;
    }
};