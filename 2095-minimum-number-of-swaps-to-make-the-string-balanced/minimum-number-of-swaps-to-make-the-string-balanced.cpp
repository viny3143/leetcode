class Solution {
public:
    int minSwaps(string s) {
        stack<int>st;
        for(int i = 0; i< s.size() ; i++) {
            if(st.empty())st.push(s[i]);
            else if(st.top() == '[' and s[i] == ']')st.pop();
            else st.push(s[i]);
        }
        return ceil(st.size() / 4.0);
    }
};