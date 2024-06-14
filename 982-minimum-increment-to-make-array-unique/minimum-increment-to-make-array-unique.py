class Solution:
    def minIncrementForUnique(self, nums: List[int]) -> int:
        nums.sort()
        cnt = 0
        for i in range(1, len(nums)):
            if nums[i] <= nums[i - 1]:
                increment_needed = nums[i - 1] - nums[i] + 1
                nums[i] += increment_needed
                cnt += increment_needed
        return cnt