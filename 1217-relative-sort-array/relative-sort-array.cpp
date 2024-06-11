class Solution
{
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
    {
        vector<int>vec;
        for(int k:arr2)
        {
            for(int i=0;i<arr1.size();i++)
            {
                if(k == arr1[i])
                {
                    vec.push_back(k);
                    arr1[i] = -1;
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i:arr1)
        {
            if(i != -1)vec.push_back(i);
        }
        return vec;
    }
};