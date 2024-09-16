class Solution {
public:
    int findMinDifference(vector<string>& timepoints) {
        vector<int>vec;
        for(int i = 0 ; i < timepoints.size() ; i++) {
            string hours;
            hours += timepoints[i][0];
            hours += timepoints[i][1];
            int check = stoi(hours) * 60;
            string minutes;
            minutes += timepoints[i][3];
            minutes += timepoints[i][4];
            check += stoi(minutes);
            vec.push_back(check);
        }
        sort(vec.begin() , vec.end());
        int value_check = INT_MAX;
        for(int i = 0 ; i < vec.size()-1 ; i++) {
            if(value_check > vec[i+1] - vec[i])value_check = vec[i+1] - vec[i];
        }
        value_check = min(value_check, 1440 - (vec.back() - vec[0]));
        return value_check;
    }
};