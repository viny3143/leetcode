class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> vec;
        for(int i : nums1)
        {
            int cnt = 0;
            for(int j = 0; j < nums2.size() - 1; j++)
            {
                if(nums2[j] == i)
                {
                    while(j + 1 < nums2.size()) // Corrected the loop condition
                    {
                        if(nums2[j + 1] > i) // Removed semicolon at the end of the if statement
                        {
                            cnt++;
                            vec.push_back(nums2[j + 1]);
                            break;
                        }
                        j++;
                    }
                }
            }
            if(cnt == 0)
                vec.push_back(-1);
        }
        return vec;
    }
};