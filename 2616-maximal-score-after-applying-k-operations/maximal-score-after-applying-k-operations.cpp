class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long> pq;
        for(auto i : nums) pq.push(i);
        long long cnt = 0;
        while(k--) {
            long long top = pq.top();
            cnt += top;
            pq.pop();
            pq.push(ceil(top / 3.0));
        }
        return cnt;
    }
};
