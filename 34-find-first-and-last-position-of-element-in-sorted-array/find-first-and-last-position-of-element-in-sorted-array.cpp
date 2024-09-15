class Solution {
public:
    vector<int> searchRange(vector<int>& v, int x) {
        int i = 0;
        int j = v.size()-1;
        int first = -1;
        int second = -1;
        while(i<=j) {
            if(v[i] == x)first = i;
            if(v[j] == x)second = j;
            if(first == -1)i++;
            if(second == -1)j--;
            if( first != -1 and second != -1)break;
        }
        return {first , second};
    }
};