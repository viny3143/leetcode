class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for(string i:logs)
        {
            if(i == "../") {
                  if (cnt > 0) {
                    cnt--;
                }
            }
            else if(i != "./" and i != "../")cnt++;
            else cnt = cnt;
        }
        if(cnt < 0)return 0;
        return cnt;
    }
};