class Solution {
public:
    int longestValidParentheses(string str) {
        stack<int> st;
        int cnt = 0;
        st.push(-1);
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(')st.push(i);
            else {
                st.pop();
                if (!st.empty())cnt = max(cnt, i - st.top());
                else st.push(i);
            }
        }

        return cnt;
    }
};