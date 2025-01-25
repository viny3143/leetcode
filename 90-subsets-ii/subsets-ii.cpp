class Solution {
public:
    void getSubsets(vector<int> &vec, int i, vector<int> &ans , vector<vector<int>> &result) {
        if(i == vec.size()) {
            result.push_back({ans});
            return;
        }
        ans.push_back(vec[i]);
        getSubsets(vec,i+1,ans,result);
        ans.pop_back();
        int index = i+1;
        while(index < vec.size() and vec[index] == vec[index-1]) {
            index++;
        }
        getSubsets(vec,index,ans,result);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>result;
        sort(nums.begin() , nums.end());
        getSubsets(nums,0,ans,result);
        return result;
        
    }
};