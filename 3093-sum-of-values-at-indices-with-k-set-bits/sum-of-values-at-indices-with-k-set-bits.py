class Solution:
    def sumIndicesWithKSetBits(self, nums: List[int], k: int) -> int:
        cnt = 0
        for i in range(len(nums)):
            if k == (str(bin(i)[2:])).count('1'): cnt += nums[i]
        return cnt