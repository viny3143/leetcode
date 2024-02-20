class Solution
{
public:
    int missingNumber(vector<int>& nums)
    {
        //int sum = accumulate(nums.begin(),nums.end(),0);
        //int n = nums.size();
        //n = int(n*((n+1)/2));
       // return n-sum;
       int flag = 0;
       sort(nums.begin(),nums.end());
       if(nums[0]!=0)return 0;
       for(int i=0;i<nums.size()-1;i++)
       {
        if(nums[i]+1!=nums[i+1])
        {
            flag++;
            return nums[i]+1;
        }
    }
    if(flag==0)return nums[nums.size()-1]+1;
    else return 0;
    }
};