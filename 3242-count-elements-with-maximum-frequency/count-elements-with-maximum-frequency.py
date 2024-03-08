class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        cnt = Counter(nums)
        
        max_freq = max(cnt.values())
        
        max_freq_elements = [num for num, freq in cnt.items() if freq == max_freq]
        
        total_freq = max_freq * len(max_freq_elements)
        
        return total_freq