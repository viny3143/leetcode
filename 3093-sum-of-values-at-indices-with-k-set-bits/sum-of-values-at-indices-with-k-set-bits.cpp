class Solution
{
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            int onesCount = std::bitset<32>(i).count();
            if (k == onesCount)cnt += nums[i];
        }
        return cnt;

    }
};