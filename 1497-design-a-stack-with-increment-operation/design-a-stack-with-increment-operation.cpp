class CustomStack {
public:
    stack<int> st;
    int check;
    CustomStack(int maxSize) {
        this->check = maxSize;
    }
    void push(int x) {
        if(st.size() < check)st.push(x);
    }
    int pop() {
        if (!st.empty()) {  
            int k = st.top();
            st.pop();
            return k;
        }
        return -1;
    }
    void increment(int k, int val) {
        stack<int> temp;
        int actualSize = st.size();
        while(!st.empty()) {
            temp.push(st.top());
            st.pop();
        }
        for (int i = 0; i < actualSize; i++) {
            int value = temp.top();
            temp.pop();
            if (i < k)value += val;
            st.push(value);
        }
    }
};
