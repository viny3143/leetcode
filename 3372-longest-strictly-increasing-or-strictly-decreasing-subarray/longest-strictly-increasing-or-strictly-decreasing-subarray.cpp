class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int check = 1;
        int result = 0;
        int num  = nums[0];
        int temp = 1;
        for(int i=1; i<nums.size(); i++) {
            if (nums[i] > num) {
                if(temp == 0) {
                    check = 1;
                }
                check++;
                result = max(result,check);
                num = nums[i];
                temp = 1;
            }
            else if (nums[i] < num) {
                if(temp) {
                    check = 1;
                }
                check++;
                result = max(result,check);
                num = nums[i];
                temp = 0;
            }
            else {
                num = nums[i];
                check = 1;
            }
        }
        result = max(check,result);
        return result;
    }
};