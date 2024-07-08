class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>vec;
        for(int i  = 1; i<= n; i++)
        vec.push_back(i);
        int index = 0;
        while(vec.size() > 1) {
            int element = (index + k -1) % vec.size();
            vec.erase(vec.begin() + element);
            index = element;
        }
        return vec[0];
    }
};