class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int>vec;
        unordered_map<int, int> nextGreater;
        stack<int> st;
        for (int num : nums2)
        {
            while (!st.empty() && st.top() < num)
            {
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
            for (int num : nums1) {
            if (nextGreater.find(num) != nextGreater.end()) {
                vec.push_back(nextGreater[num]);
            } else {
                vec.push_back(-1); // Next greater element not found
            }
        }
        
        return vec;
    }
};