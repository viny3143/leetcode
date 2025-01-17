class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums = list(set(i for i in nums if i >= 1))
        nums.sort()
        check = 0
        for i in range(len(nums)):
            if nums[i] != i+1:
                check = i+1
                break
        if check:
            return check
        else:
            return len(nums)+1
