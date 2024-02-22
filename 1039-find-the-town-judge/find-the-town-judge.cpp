class Solution
{
public:
    int findJudge(int n, vector<vector<int>>& trust)
    {
        set<int>st;
        for(int i=0; i<trust.size(); i++)st.insert(trust[i][0]);
        int cnt=0;
        for(auto i:st)cnt += i;
        int sum = n*(n+1)/2;
        if(sum == cnt)return -1;
        int cnt_1 = 0;
        int val=sum-cnt;
        for(int i=0; i<trust.size(); i++)if(val == trust[i][1])cnt_1++;
        if(cnt_1 == n-1)return val;
        return -1;
    }
};