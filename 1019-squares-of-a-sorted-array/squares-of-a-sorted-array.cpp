class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int>vec;
        for(int i:nums)vec.push_back(i*i);
        sort(vec.begin(),vec.end());
        return vec;
    }
};