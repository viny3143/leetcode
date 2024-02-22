class Solution
{
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
    {
        string str1;
        string str2;
        for (const auto& i : word1)str1.append(i);
        for (const auto& i : word2)str2.append(i);
        if(str1 == str2)return true;
        return false;
    }
};