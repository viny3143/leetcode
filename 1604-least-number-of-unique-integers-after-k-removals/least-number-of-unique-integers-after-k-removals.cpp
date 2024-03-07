class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k)
    {
        vector<int>vec;
        unordered_map<int,int>mp;
        for(auto i : arr)mp[i]++;
        int cnt=0;
        for(auto a :mp)vec.push_back(a.second);
        sort(vec.begin(),vec.end());
        for(int i =0;i<vec.size();i++){
            if(k > vec[i]){
                k-=vec[i];
                vec[i]=0;
            }else{
                vec[i] -= k;
                k =0;
            }
            if(vec[i]!=0)cnt++;
        }

        return cnt;
    }
};