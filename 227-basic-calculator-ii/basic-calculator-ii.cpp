class Solution {
public:
    int check(char ch) {
        if (ch == '+' || ch == '-') return 1;
        else return 2;
    }

    int addition(int a, int b, char op) {
        if (op == '+') return a + b;
        else if (op == '-') return a - b;
        else if (op == '*') return a * b;
        else return a / b;
    }

    int calculate(std::string s) {
        std::stack<int> number;
        std::stack<char> operat;
        int i = 0;
        while (s[i] != '\0') {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                int result = check(s[i]);
                while (!operat.empty() && check(operat.top()) >= result) {
                    int second = number.top();
                    number.pop();
                    int first = number.top();
                    number.pop();
                    int num = addition(first, second, operat.top());
                    operat.pop();
                    number.push(num);
                }
                operat.push(s[i]);
            } else if (isdigit(s[i])) {
                int num = 0;
                while (i < s.length() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                number.push(num);
            }
            i++;
        }

        while (!operat.empty()) {
            int second = number.top();
            number.pop();
            int first = number.top();
            number.pop();
            int num = addition(first, second, operat.top());
            operat.pop();
            number.push(num);
        }

        return number.top();
    }
};
