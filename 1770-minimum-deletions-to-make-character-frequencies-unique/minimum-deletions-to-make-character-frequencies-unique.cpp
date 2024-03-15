class Solution
{
public:
    int minDeletions(std::string s)
    {
        unordered_map<char, int> mp;
        for (char i : s)
            mp[i]++;

        unordered_set<int> counts;
        int deletions = 0;
        for (const auto& entry : mp)
        {
            int count = entry.second;
            while (counts.find(count) != counts.end())
            {
                deletions++;
                count--;
            }
            if (count > 0)counts.insert(count);
        }
        return deletions;
    }
};