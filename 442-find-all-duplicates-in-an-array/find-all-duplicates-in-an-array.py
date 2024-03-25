class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        counts = Counter(nums)
        duplicates = [item for item, count in counts.items() if count > 1]
        return duplicates
