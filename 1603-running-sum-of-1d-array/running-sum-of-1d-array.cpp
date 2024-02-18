class Solution
{
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int>vec;
        vec.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)vec.push_back(nums[i] + vec[i-1]);
        return vec;
    }
};