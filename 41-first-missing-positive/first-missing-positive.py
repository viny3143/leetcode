class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums = [i for i in nums if i >= 1]
        check = 0
        nums = set(nums)
        nums = list(nums)
        nums.sort()
        print(nums)
        for i in range(len(nums)):
            if nums[i] != i+1:
                check = i+1
                break
        if check:
            return check
        else:
            return len(nums)+1
