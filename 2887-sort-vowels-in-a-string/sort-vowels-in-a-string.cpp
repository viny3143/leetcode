class Solution
{
public:
    string sortVowels(string s)
    {
        string ans = "";
        string l = "AaEeIiOoUu";
        string res = "";
        for (char i : s)
        {
            if (l.find(i) != std::string::npos)res.push_back(i);
        }
    sort(res.begin(), res.end());
    int i = 0, j = 0;
    while (i < s.length())
    {
        if (l.find(s[i]) != std::string::npos)
        {
            ans += res[j];
            j++;
        } 
        else ans += s[i];
        i++;
    }
    
    return ans;
    }
};