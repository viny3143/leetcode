class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;
        for(auto detail:details) {
            string check;
            check += detail[11];
            check += detail[12];
            int age = stoi(check);
            if(age > 60)cnt++;
        }
        return cnt;
    }
};