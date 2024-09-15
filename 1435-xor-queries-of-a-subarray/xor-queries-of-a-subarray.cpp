class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> vecPrefix(n);
        vecPrefix[0] = arr[0];
        for (int i = 1; i < n; i++)vecPrefix[i] = vecPrefix[i-1] ^ arr[i];
        vector<int> vec;
        for (auto i : queries) {
            int L = i[0], R = i[1];
            if (L > 0)vec.push_back(vecPrefix[R] ^ vecPrefix[L-1]);
            else vec.push_back(vecPrefix[R]);
        }
        return vec;
    }
};
