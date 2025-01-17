class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int product = 1;
        int zeroCount = 0;
        for (int num : arr) {
            if (num != 0) {
                product *= num;
            }
            else {
                zeroCount++;
            }
        }
        vector<int> result;
        for (int num : arr) {
            if (num == 0) {
                result.push_back(zeroCount > 1 ? 0 : product);
            }
            else {
                result.push_back(zeroCount > 0 ? 0 : product / num);
            }
         }
         return result;
    }
};