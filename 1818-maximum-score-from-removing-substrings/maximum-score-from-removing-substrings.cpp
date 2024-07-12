class Solution {
public:
    int maximumGain(string s, int x, int y) {
         stack<char> st;
        int cnt_x = 0;
        int cnt_y = 0;

        if (x > y) {
            // First pass: count 'ba' pairs
            for (char i : s) {
                if (!st.empty() && i == 'b' && st.top() == 'a') {
                    cnt_x += x;
                    st.pop();
                } else {
                    st.push(i);
                }
            }
            // Second pass: count 'ab' pairs in the remaining characters
            stack<char> temp_st;
            while (!st.empty()) {
                temp_st.push(st.top());
                st.pop();
            }
            while (!temp_st.empty()) {
                char check = temp_st.top();
                temp_st.pop();
                if (!st.empty() && check == 'a' && st.top() == 'b') {
                    cnt_y += y;
                    st.pop();
                } else {
                    st.push(check);
                }
            }
        } else {
            // First pass: count 'ab' pairs
            for (char i : s) {
                if (!st.empty() && i == 'a' && st.top() == 'b') {
                    cnt_y += y;
                    st.pop();
                } else {
                    st.push(i);
                }
            }
            // Second pass: count 'ba' pairs in the remaining characters
            stack<char> temp_st;
            while (!st.empty()) {
                temp_st.push(st.top());
                st.pop();
            }
            while (!temp_st.empty()) {
                char check = temp_st.top();
                temp_st.pop();
                if (!st.empty() && check == 'b' && st.top() == 'a') {
                    cnt_x += x;
                    st.pop();
                } else {
                    st.push(check);
                }
            }
        }
        return cnt_x + cnt_y;
    }
};