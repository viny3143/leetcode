class Solution {
public:
     void getParenthese(int n, vector<string> &result, string ans, int left, int right) {
        if(n*2  == left+right) {
            result.push_back(ans);
            return;
        }
        if(left < n) {
            ans.push_back('(');
            getParenthese(n, result, ans, left+1, right);
            ans.pop_back();
        }
        if(right < left) {
            ans.push_back(')');
            getParenthese(n, result, ans, left, right+1);
            ans.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        string ans;
        int right = 0, left = 0;
        getParenthese(n, result, ans, left, right);
        return result;
    }
};