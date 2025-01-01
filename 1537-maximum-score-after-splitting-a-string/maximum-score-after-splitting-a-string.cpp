class Solution {
public:
    int maxScore(string s) {
        int check = 0;
        for(int i=1; i<s.size(); i++) {
            int zero_cnt = 0;
            int one_cnt = 0;
            for(int zero = 0 ; zero < i ;zero++) {
                if(s[zero] == '0') {
                    zero_cnt++;
                }
            }
            for(int one = i ;one<s.size() ; one++) {
                if(s[one] == '1') {
                    one_cnt++;
                }
                if( check <= zero_cnt + one_cnt) {
                    check = zero_cnt + one_cnt;
                }
            }

        }
        return check;
        
    }
};