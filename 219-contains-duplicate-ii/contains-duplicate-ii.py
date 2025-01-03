class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        mp = {}
        for i, num in enumerate(nums):
            if num in mp:
                if abs(i - mp[num]) <= k:
                    return True
            mp[num] = i
        return False
