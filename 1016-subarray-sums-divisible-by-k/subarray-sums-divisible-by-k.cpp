class Solution
{
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
            int cnt = 0;
            int ans = 0;
            unordered_map<int,int> mp;
            mp[0]++;
            for(int i=0;i<nums.size();i++)
            {
                cnt += nums[i];
                int res = cnt%k;
                if(res<0)res += k;
                ans += mp[res];
                mp[res]++;
            } 
        return ans;
    }
};