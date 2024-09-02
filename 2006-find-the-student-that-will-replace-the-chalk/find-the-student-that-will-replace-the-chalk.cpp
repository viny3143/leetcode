class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long check_sum = 0;
        for(auto i : chalk) check_sum += i;
        long long remaining = k % check_sum;
        for(int i = 0; i < chalk.size(); i++) {
            if(remaining < chalk[i]) {
                return i;
            }
            remaining -= chalk[i];
        }
        return 0;
    }
};