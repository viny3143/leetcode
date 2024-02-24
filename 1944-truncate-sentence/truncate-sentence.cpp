class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        string str;
        for(int i=0;i<s.size();i++)
        {
            if(k == 0)break;
            if(k == 1)
            {
                if(s[i] == ' ')break;

            }
            if(s[i] == ' ')
            {
                str += s[i];
                k--;
            }
            else str += s[i];
        }
        return str;
    }
};