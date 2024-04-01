class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char i:s)
        {
            if(i == '*')st.pop();
            else st.push(i);
        }
        string result = "";
        while(!st.empty())
        {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};