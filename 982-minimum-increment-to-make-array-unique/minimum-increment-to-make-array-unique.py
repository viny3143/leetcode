class Solution:
    def minIncrementForUnique(self, nums: List[int]) -> int:
        nums.sort()
        cnt = 0
        for i in range(1, len(nums)):
            if nums[i] <= nums[i - 1]:
                num = nums[i - 1] - nums[i] + 1
                nums[i] += num
                cnt += num
        return cnt