class Solution {
public:
    string reverseParentheses(string s) {
        string res;
        stack<int>st;
        for(auto i:s)
        {
            if(i == ')') {
                string temp;
                while(st.top() != '(') {
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                for(auto j : temp)st.push(j);
            }
            else st.push(i);
        }
    while(!st.empty()) {
        res += (st.top());
        st.pop();
    }
    reverse(res.begin() , res.end());
    return res;
    }
};