class Solution {
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        vector<int>vec;
        int c = 0;
        for(int i =0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i != j and nums[i] == nums[j])
                {
                    c++;
                    break;
                }
            }
            if(c == 0)
            {
                vec.push_back(nums[i]);
            }
            c=0;
        }
        return vec;
    }
};