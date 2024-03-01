class Solution
{
public:
    std::string maximumOddBinaryNumber(std::string s)
    {
        int cnt_1 = count(s.begin(), s.end(), '1');
        int cnt_0 = count(s.begin(), s.end(), '0');
        return string(cnt_1 - 1, '1') + string(cnt_0, '0') + '1';
    }
};