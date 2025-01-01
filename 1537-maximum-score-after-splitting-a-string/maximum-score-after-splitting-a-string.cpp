class Solution {
public:
    int maxScore(string s) {
        int check = 0;
        for(int i=1; i<s.size(); i++) {
            int count = 0;
            for(int zero = 0 ; zero < i ;zero++) {
                if(s[zero] == '0') {
                    count++;
                }
            }
            for(int one = i ;one<s.size() ; one++) {
                if(s[one] == '1') {
                    count++;
                }
                if( check <= count) {
                    check = count;
                }
            }

        }
        return check;
        
    }
};