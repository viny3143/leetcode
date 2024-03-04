class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score = 0;
        int mscore = 0;
        int i = 0;
        int j = tokens.size() - 1;
        while (i <= j) {
            if (tokens[i] <= power) {
                power -= tokens[i];
                score++;
                i++;
                mscore = std::max(mscore, score);
            } else if (score >= 1) {
                power += tokens[j];
                j--;
                score--;
            } else break;
        }

        return mscore;
        }
};