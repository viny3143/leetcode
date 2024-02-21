class Solution
{
public:
    int balancedStringSplit(string s)
    {
        int c1 = 0;
        int c2 = 0;
        int res = 0;
        for(int i = 0; i<s.length(); i++)
        {
            if(s[i] == 'R')c1++;
            else if(s[i] == 'L')c2++;
            if(c1 == c2)
            {
                res++;
                c1 = 0;
                c2 = 0;
            }
        }
        return res;
    }
};